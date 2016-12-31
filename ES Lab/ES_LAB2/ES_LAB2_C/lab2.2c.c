#include <reg51.h>
unsigned char led_pattern[10] = { 0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void display(unsigned int i)
{
	unsigned int j, led[2];
	led[0] = i / 10;
	led[1] = i % 10;
	for(j=0; j<10; j++)  // change limit of j for different delay
		for(i=0;i<2;i++)
		{
			P2 = 0x1 * (i + 1);
			P0 = led_pattern[led[i]];
			delay(40);
		}
}

void main(void)
{
	unsigned int i;
	while(1)
	{
		for(i=0; i<20; i++)
			display(i);
		for(i=20; i>0; i--)
			display(i);
	}
}