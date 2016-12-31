#include <reg51.h>

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
	unsigned char aa, bb, cc;
	aa = c%0x100;
	c >>= 8;
	bb = c%0x100;
	c >>= 8;
	cc = c%0x100;

	while(1)
	{
		P0 = aa;
		delay(1000);
		P0 = bb;
		delay(1000);
		P0 = cc;
		delay(1000);
	}	
}