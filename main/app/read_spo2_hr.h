#ifndef _READ_SPO2_HR_H_
#define _READ_SPO2_HR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <inttypes.h>

#define MAX30102_INTR_GPIO   42
#define OXY_METER_I2C_SCL   11
#define OXY_METER_I2C_SDA   12

typedef struct {  
    float spo2;
    int32_t hr;
} h_data; 

void read_spo2_hr(void);

#ifdef __cplusplus
}
#endif

#endif