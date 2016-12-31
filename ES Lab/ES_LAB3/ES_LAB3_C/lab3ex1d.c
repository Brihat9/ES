//TIMER 0 IN MODE 3 NOT ACCURATE
#include <reg51.h>
sbit mybit=P1^5;

void delay(void)
{
	int i;
	TMOD=0x03;
	for(i = 0; i < 11; i++)
	{
		TL0=0x04;
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
		delay();
		for(i = 0; i < 4; i++)
		{
				mybit = 0;
				delay();
		}
	};
}