/*
 * audio.h
 *
 *  Created on: Oct 14, 2026
 *      Author: 15199
 */

#ifndef INC_AUDIO_H_
#define INC_AUDIO_H_

#define PDM_BUFFER_SIZE 128
#define AUDIO_BYTES 16
#include "stdbool.h"
#include "stdint.h"

typedef struct MicrophoneData_t
{
	uint16_t pcmBuffer[16];  //TODO, hard-coded
	uint16_t pdmBuffer[PDM_BUFFER_SIZE];
}AudioMicrophoneData_t;

volatile AudioMicrophoneData_t* GetAudioMicrophoneData(void);
#endif /* INC_AUDIO_H_ */
