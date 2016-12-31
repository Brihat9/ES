//TIMER 1 MODE 0
#include <reg51.h>
sbit mybit=P1^5;

void delay(void)
{
	TMOD=0x01;
	TL0=0x32;
	TH0=0xF5;
	TR0=1;
	while (!TF0);
	TR0=0;
	TF0=0;
}

void main(void)
{
	char i;
	while (1)
	{
		mybit = 1;
		delay();
		for(i = 0; i < 4; i++)
		{
				mybit = 0;
				delay();
		}
	};
}
