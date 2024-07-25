#ifndef _WIFI_H_
#define _WIFI_H_


#ifdef __cplusplus
extern "C" {
#endif


void Z_WiFi_Init(void);
void Publish(char * topic , char * data);
#ifdef __cplusplus
}
#endif

#endif