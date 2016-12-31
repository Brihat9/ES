#include <reg51.h>

unsigned char led_pattern[10] = { 0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
unsigned char dept_init = 0x39;  // letter to be displayed C = 0x39 and E = 0x79

void delay(int time)
{
	unsigned int i,j;
	for (i=0; i<time; i++)
		for (j=0; j<125; j++);
}

void display(unsigned int i)
{
	unsigned int j, led2, led3, led4;
	
	led2 = i / 100;
	led3 = (i - led2 * 100) / 10;
	led4 = i - led2 * 100 - led3 * 10;
	
	for(j=0; j<20; j++)  // change limit of j for different delay
	{
		P2 = 0x1;
		P0 = dept_init;
		delay(10);
		
		P2 = 0x2;
		P0 = led_pattern[led2];
		delay(10);
	
		P2 = 0x4;
		P0 = led_pattern[led3];
		delay(10);
		
		P2 = 0x8;
		P0 = led_pattern[led4];
		delay(10);
		}
}

void main(void)
{
	unsigned int i;
	unsigned int roll_no[4] = {513, 514, 515, 516};
	while(1)
		for(i=0; i<4; i++)
			display(roll_no[i]);
}
