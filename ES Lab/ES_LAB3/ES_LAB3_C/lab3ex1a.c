//TIMER 1 IN MODE 0
#include <reg51.h>
sbit mybit=P1^5;

void delay(void)
{
	TMOD=0x00;
	TL1=0x12;
	TH1=0xA9;
	TR1=1;
	while (!TF1);
	TR1=0;
	TF1=0;
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