/*
 * GccApplication1.c
 *
 * Created: 28/01/2021 10:00:58 PM
 * Author : Rohit D
 */ 
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0b11111111;
	DDRC = 0b11111111;
	_delay_ms(1000);
		PORTB = 0b10000000;//1
		_delay_ms(700);
		PORTB &= 0b00000000;
		PORTB = 0b01000000;//2
		_delay_ms(700);
		PORTB &= 0b00000000;
		PORTB = 0b00100000;//3
		_delay_ms(700);
		PORTB = 0b00000000;
		PORTB = 0b00010001;//4,5
		_delay_ms(700);
		PORTB &= 0b00000000;
		PORTB = 0b00001000;//6
		_delay_ms(700);
		PORTB &= 0b00000000;
		PORTB = 0b00000100;//7,8
		PORTC = 0b00000001;
		_delay_ms(700);
		PORTC &= 0b00000000;
		PORTB &= 0b00000000;
		PORTB = 0b00000010;//9
		_delay_ms(700);
		PORTB &= 0b00000000;
		PORTB = 0b00000100;//7,8
		PORTC = 0b00000001;
		_delay_ms(700);
		PORTB &= 0b00000000;
		PORTC &= 0b00000000;
		PORTB = 0b00001000;//6
		_delay_ms(700);
		PORTB &= 0b00000000;
		PORTB = 0b00010001;//4,5
		_delay_ms(700);
		PORTB &= 0b00000000;
		PORTB = 0b00100000;//3
		_delay_ms(700);
		PORTB &= 0b00000000;
		PORTB = 0b01000000;//2
		_delay_ms(700);
		PORTB = 0b10000000;//1
		_delay_ms(700);
		PORTB &= 0b0000000;
}

