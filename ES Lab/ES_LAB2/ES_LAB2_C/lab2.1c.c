#include <reg51.h>
unsigned char led_pattern[10] = { 0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
	
void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void display(int i)
{
	P0 = led_pattern[i];
	delay(1000);
}

void main(void)
{
	unsigned int i;
	P2 = 0x01;

	while(1)
	{
		for(i=0; i<10; i++)
			display(i);
		for(i=8; i>0; i--)
			display(i);
	}
}
