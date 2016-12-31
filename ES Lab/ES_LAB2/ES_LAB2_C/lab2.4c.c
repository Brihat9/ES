#include <reg51.h>
#define N	7  // number whose multiplication table is to be displayed (max = 10, 10 * 9 = 90)
unsigned char led_pattern[10] = { 0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void display(unsigned int i)
{
	unsigned int j;
	for(j=0; j<15; j++)  // change limit of j for different delay
	{
		P2 = 0x1;
		P0 = led_pattern[i / 10];
		delay(40);
		
		P2 = 0x2;
		P0 = led_pattern[i % 10];
		delay(40);
	}
}

void main(void)
{
	unsigned int i;
	while(1)
		for(i=1; i<=10; i++)
			display(N*i);
}
