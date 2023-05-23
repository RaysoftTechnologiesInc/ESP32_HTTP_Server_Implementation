/*
 * rgb_led.h
 *
 *  Created on: May 21, 2023
 *      Author: Raymond Mango
 */

#ifndef RGB_LED_H_
#define RGB_LED_H_



//RGB LED GPIOs
#define RGB_LED_RED_GPIO	18
#define RGB_LED_GREEN_GPIO 	23
#define RGB_LED_BLUE_GPIO 	19

//RGB LED color mix channels
#define RGB_LED_CHANNEL_NUM 	3

//config structure
typedef struct
{
	int channel;
	int gpio;
	int mode;
	int timer_index;
}ledc_info_t;



//wifi started status
void rgb_led_wifi_app_started(void);
void rgb_led_http_server_started(void);
void rgb_led_wifi_connected(void);


#endif /* RGB_LED_H_ */
