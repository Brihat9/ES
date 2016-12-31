#include <reg51.h>

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main(void)
{
	unsigned char a = 0xff;
	unsigned char b = 0xde;
	unsigned int result;
	unsigned char i = 0;
	unsigned char aa, bb;
	
	for(i=0x0;i<a;i++)
		result += b;
	
	aa = result%0x100;
	result >>= 8;
	bb = result%0x100;

	while(1)
	{
		P0 = aa;
		delay(1000);
		P0 = bb;
		delay(1000);
	}	
}