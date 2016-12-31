//TIMER 1 MODE 1
#include <reg51.h>
sbit mybit=P1^5;

void delay(int factor)
{
	int i;
	TMOD=0x00;
		
	for(i = 0; i < factor; i++)
	{
		TL0=0x1F;
		TH0=0x6F;
		TR0=1;
		while (!TF0);
		TR0=0;
		TF0=0;
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
