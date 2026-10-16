#include "audio.h"

static volatile AudioMicrophoneData_t microphoneData;

inline volatile AudioMicrophoneData_t* GetAudioMicrophoneData(void)
{
	return &microphoneData;
}

