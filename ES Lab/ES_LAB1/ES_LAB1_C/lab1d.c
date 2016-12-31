#include <reg51.h>
int data dividend _at_ 0x3e;
unsigned char data reg4 _at_ 0x04;
unsigned char data reg5 _at_ 0x05;

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main(void)
{
	unsigned char divisor = 0x12;
	unsigned char quotient = 0x00, remainder;
	
	dividend = 0x00af;
	
	while(1)
	{
		dividend -= divisor;
		if(dividend < 0x0)
			break;
		quotient += 0x1;
	}
	remainder = dividend + divisor;
	
	reg4 = quotient;
	reg5 = remainder;

	while(1)
	{
		P0 = quotient;
		delay(1000);
		P0 = remainder;
		delay(1000);
	}	
}