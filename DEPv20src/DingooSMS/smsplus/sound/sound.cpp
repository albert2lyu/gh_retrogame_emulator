/******************************************************************************
 *  Sega Master System / GameGear Emulator
 *  Copyright (C) 1998-2007  Charles MacDonald
 *
 *  additionnal code by Eke-Eke (SMS Plus GX)
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *   Sound emulation.
 *
 ******************************************************************************/

#include "shared.h"

snd_t snd;
static int16 **fm_buffer;
static int16 **psg_buffer;
int *smptab;
int smptab_len;

int sound_init(void)
{
	uint8 *fmbuf = NULL;
	uint8 *psgbuf = NULL;
	int restore_sound = 0;
    int i;

	snd.fps = (sms.display == DISPLAY_NTSC) ? FPS_NTSC : FPS_PAL;
	snd.fm_clock = (sms.display == DISPLAY_NTSC) ? CLOCK_NTSC : CLOCK_PAL;
	snd.psg_clock = (sms.display == DISPLAY_NTSC) ? CLOCK_NTSC : CLOCK_PAL;
	snd.mixer_callback = NULL;

    /* Save register settings */
	if(snd.enabled)
    {
		restore_sound = 1;
		psgbuf = (uint8 *)malloc(SN76489_GetContextSize ());
		memcpy (psgbuf, SN76489_GetContextPtr (0),SN76489_GetContextSize ());
		fmbuf = (uint8 *)malloc(FM_GetContextSize());
		FM_GetContext(fmbuf);
    }

    /* If we are reinitializing, shut down sound emulation */
    if(snd.enabled)
    {
        sound_shutdown();
    }

    /* Disable sound until initialization is complete */
    snd.enabled = 0;

    /* Check if sample rate is invalid */
    if(snd.sample_rate < 8000 || snd.sample_rate > 48000)
        return 0;

    /* Assign stream mixing callback if none provided */
    if(!snd.mixer_callback)
        snd.mixer_callback = sound_mixer_callback;

    /* Calculate number of samples generated per frame */
    snd.sample_count = (snd.sample_rate / snd.fps);

    /* Calculate size of sample buffer */
    snd.buffer_size = snd.sample_count * 2;

    /* Free sample buffer position table if previously allocated */
    if(smptab)
    {
        free(smptab);
        smptab = NULL;
    }

	/* Prepare incremental info */
    snd.done_so_far = 0;
    smptab_len = (sms.display == DISPLAY_NTSC) ? 262 : 313;
    smptab = (int *)malloc(smptab_len * sizeof(int));
    if(!smptab) return 0;
    for (i = 0; i < smptab_len; i++)
    {
    	double calc = (snd.sample_count * i);
        calc = calc / (double)smptab_len;
    	smptab[i] = (int)calc;
    }

    /* Allocate emulated sound streams */
    for(i = 0; i < STREAM_MAX; i++)
    {
        snd.stream[i] = (int16 *)malloc(snd.buffer_size);
        if(!snd.stream[i]) return 0;
        memset(snd.stream[i], 0, snd.buffer_size);
    }

    /* Allocate sound output streams */
    snd.output[0] = (int16 *)malloc(snd.buffer_size);
    snd.output[1] = (int16 *)malloc(snd.buffer_size);
    if(!snd.output[0] || !snd.output[1]) return 0;

    /* Set up buffer pointers */
    fm_buffer = (int16 **)&snd.stream[STREAM_FM_MO];
    psg_buffer = (int16 **)&snd.stream[STREAM_PSG_L];

    /* Set up SN76489 emulation */
    SN76489_Init(0, snd.psg_clock, snd.sample_rate);
	SN76489_Config(0, MUTE_ALLON, BOOST_ON, VOL_TRUNC, (sms.console < CONSOLE_SMS) ? FB_SC3000 : FB_SEGAVDP);

    /* Set up YM2413 emulation */
    FM_Init();

    /* Restore YM2413 register settings */
	if(restore_sound)
    {
    	memcpy (SN76489_GetContextPtr (0),psgbuf,SN76489_GetContextSize ());
    	FM_SetContext(fmbuf);
    	free(fmbuf);
    	free(psgbuf);
	}

	/* Inform other functions that we can use sound */
	snd.enabled = 1;

    return 1;
}


void sound_shutdown(void)
{
    int i;

    if(!snd.enabled)
        return;

    /* Free emulated sound streams */
    for(i = 0; i < STREAM_MAX; i++)
    {
        if(snd.stream[i])
        {
            free(snd.stream[i]);
            snd.stream[i] = NULL;
        }
    }

    /* Free sound output buffers */
    for(i = 0; i < 2; i++)
    {
        if(snd.output[i])
        {
            free(snd.output[i]);
            snd.output[i] = NULL;
        }
    }

    /* Shut down SN76489 emulation */
    SN76489_Shutdown();

    /* Shut down YM2413 emulation */
    FM_Shutdown();
}


void sound_reset(void)
{
    if(!snd.enabled)
        return;

    /* Reset SN76489 emulator */
    SN76489_Reset(0);

    /* Reset YM2413 emulator */
    FM_Reset();
}


void sound_update(int line)
{
    int16 *fm[2], *psg[2];
	
    if(!snd.enabled)
        return;

    /* Finish buffers at end of frame */
    if(line == smptab_len - 1)
    {
    	psg[0] = psg_buffer[0] + snd.done_so_far;
    	psg[1] = psg_buffer[1] + snd.done_so_far;
    	fm[0]  = fm_buffer[0] + snd.done_so_far;
    	fm[1]  = fm_buffer[1] + snd.done_so_far;

	    /* Generate SN76489 sample data */
	    SN76489_Update(0, psg, snd.sample_count - snd.done_so_far);

	    /* Generate YM2413 sample data */
	    FM_Update(fm, snd.sample_count - snd.done_so_far);

	    /* Mix streams into output buffer */
    	snd.mixer_callback(snd.stream, snd.output, snd.sample_count);
    	
    	/* Reset */
    	snd.done_so_far = 0;
    }
    else
    {
    	int tinybit;
    	
    	tinybit = smptab[line] - snd.done_so_far;
    	
        /* Do a tiny bit */
    	psg[0] = psg_buffer[0] + snd.done_so_far;
    	psg[1] = psg_buffer[1] + snd.done_so_far;
    	fm[0]  = fm_buffer[0] + snd.done_so_far;
    	fm[1]  = fm_buffer[1] + snd.done_so_far;

	    /* Generate SN76489 sample data */
	    SN76489_Update(0, psg, tinybit);

	    /* Generate YM2413 sample data */
	    FM_Update(fm, tinybit);

		/* Sum total */
    	snd.done_so_far += tinybit;
    }
}

/* Generic FM+PSG stereo mixer callback */
void sound_mixer_callback(int16 **stream, int16 **output, int length)
{
    int i;
    for(i = 0; i < length; i++)
    {
        int16 temp = (fm_buffer[0][i] + fm_buffer[1][i]) / 2;
        output[0][i] = temp + psg_buffer[0][i];
        output[1][i] = temp + psg_buffer[1][i];
    }
}


/*--------------------------------------------------------------------------*/
/* Sound chip access handlers                                               */
/*--------------------------------------------------------------------------*/

void psg_stereo_w(int data)
{
  if(!snd.enabled) return;
    SN76489_GGStereoWrite(0, data);
}

void stream_update(int which, int position)
{
}


void psg_write(int data)
{
  if(!snd.enabled) return;
    SN76489_Write(0, data);
}

/*--------------------------------------------------------------------------*/
/* Mark III FM Unit / Master System (J) built-in FM handlers                */
/*--------------------------------------------------------------------------*/

int fmunit_detect_r(void)
{
    return sms.fm_detect;
}

void fmunit_detect_w(int data)
{
	if(!snd.enabled || !sms.use_fm) return;
    sms.fm_detect = data;
}

void fmunit_write(int offset, int data)
{
  if(!snd.enabled || !sms.use_fm) return;
    FM_Write(offset, data);
}

