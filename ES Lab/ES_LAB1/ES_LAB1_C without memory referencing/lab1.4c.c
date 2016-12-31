#include <reg51.h>

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main(void)
{
	unsigned char a = 0xaf;
	unsigned char b = 0x12;
	unsigned char quotient = 0x0, remainder;
	
	int dividend = a;
	
	while(1)
	{
		dividend -= b;
		if(dividend < 0x0)
		{
			break;
		}
		quotient += 0x1;
	}
	dividend += b;
	remainder = dividend;
		
	while(1)
	{
		P0 = quotient;
		delay(1000);
		P0 = remainder;
		delay(1000);
	}	
}