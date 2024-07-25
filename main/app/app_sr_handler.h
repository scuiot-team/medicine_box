

#pragma once

#include <stdbool.h>
#include "esp_err.h"
typedef enum {
    AUDIO_WAKE,
    AUDIO_OK,
    AUDIO_END,
    AUDIO_MAX,
} audio_segment_t;

#ifdef __cplusplus
extern "C" {
#endif

bool sr_echo_is_playing(void);
esp_err_t sr_echo_play(audio_segment_t audio, int t);

void sr_handler_task(void *pvParam);

#ifdef __cplusplus
}
#endif
