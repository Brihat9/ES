#include <reg51.h>
unsigned char led_pattern[10] = { 0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

void delay(void)
{
	TMOD = 0x01;
	TH0 = 0xE9;
	TL0 = 0x0E;
	TR0 = 1;
	while (!TF0);
	TR0 = 0;
	TF0 = 0;
}

void display(int min, int sec)
{
	int i, r, led[4];
	
	led[0] = min / 10;
	led[1] = min % 10;
	led[2] = sec / 10;
	led[3] = sec % 10;
	
	for(r = 0; r < 39; r++)
	{
		P2 = 0x01;
		for(i = 0; i < 4; i++)
		{
			if(i == 1)
				P0 = led_pattern[led[i]] | 0x80;
			else
				P0 = led_pattern[led[i]];
				delay();
				P2 <<= 1;
		}
	}
}

void main(void)
{
	int i,j;
	while(1)
		for(i = 0; i < 60; i++)
			for(j = 0;j < 60; j++)
				display(i,j);
}