/*
 * ! Title : Led Program
 * ! File Name : main.c
 * ! Description : This file has the implementation code for switching on led
 * ! Version : V1.0
 */

#include<avr/io.h>
#include<util/delay.h>

void main(void){
	DDRA = 0xFF;
	while(1){
		PORTA = 0xFF;
		_delay_ms(1000);
		PORTA = 0x00;
		_delay_ms(1000);
	}
}


