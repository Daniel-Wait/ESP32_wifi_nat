#ifndef __APSTA_NAT_H__
#define __APSTA_NAT_H__

/* The examples use WiFi configuration that you can set via project configuration menu.

   If you'd rather not, just change the below entries to strings with
   the config you want - ie #define EXAMPLE_WIFI_SSID "mywifissid"
*/

/* 
   Credit to https://github.com/jonask1337/esp-idf-nat-example
*/

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"

#define AP_WIFI_SSID             "esp32 wifi"
#define AP_WIFI_PASS             "mypassword"
#define AP_WIFI_CHANNEL          CONFIG_ESP_WIFI_CHANNEL
#define AP_MAX_STA_CONN          CONFIG_ESP_MAX_STA_CONN

#define STA_WIFI_SSID            "DESKTOP-DBW"
#define STA_WIFI_PASS            "8m1-N023"
#define STA_WIFI_MAX_RETRY       10
#define STA_WIFI_CONNECTED_BIT   BIT0
#define STA_WIFI_FAIL_BIT        BIT1

#define MY_DNS_IP_ADDR           0x08080808 // 8.8.8.8


#endif // __APSTA_NAT_H__