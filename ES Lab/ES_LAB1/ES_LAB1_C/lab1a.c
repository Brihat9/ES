#include <reg51.h>
unsigned char data d[4] _at_ 0x40;

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main(void)
{
	unsigned long a = 0x897f9a;
 	unsigned long b = 0x34bc48;
	unsigned long c = a + b;
	unsigned int i;
	
	for(i = 0; i < 4; i++)
	{
		d[i] = c%0x100;
		c >>= 8;
	}
	
	while(1)
		for(i = 0; i < 4; i++)
		{
			P0 = d[i];
			delay(1000);
		}
}