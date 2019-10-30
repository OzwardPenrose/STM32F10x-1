#include "public.h"
#include "led.h"
#include "stm32f10x.h"

void delay(u32 nCount);
	
int main(void){
	
	LED_GPIO_config();
	while(1){
		LED_ON;
		delay(0x0ffffff);
		LED_OFF;
		delay(0x0ffffff);
	}
	return 0;
}

void delay(u32 nCount){
	for(;nCount!=0;nCount--);
}
