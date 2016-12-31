//TIMER 1 MODE 1
#include <reg51.h>
sbit mybit=P1^5;

void delay(int factor)
{
	int i;
	TMOD=0x10;
		
	for(i = 0; i < factor; i++)
	{
		TL1=0xFF;
		TH1=0xED;
		TR1=1;
		while (!TF1);
		TR1=0;
		TF1=0;
	}
}

void main(void)
{
	char i;
	while (1)
	{
		mybit = 1;
		delay(10);
		mybit = 0;
		delay(10);
		for(i = 0; i < 5; i++)
		{
			mybit = 1;
			delay(2);
			mybit = 0;
			delay(2);
		}
	};
}
