#include<reg51.h>

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main()
{
	unsigned int a = 0x5;
	unsigned int fact = 0x1;
	unsigned char i;
	unsigned char x, d1, d2, d3;
	
	for(i = 0x1;i<=a;i++)
		fact *=i;
	
	x = fact / 0xa;
	d1 = fact % 0xa; //decimal LSB
	d2 = x % 0xa;
	d3 = x / 0xa;		//decimal MSB
	
	while(1)
	{
		P0 = fact;
		delay(1000);
		P0 = d1;
		delay(1000);
		P0 = d2;
		delay(1000);
		P0 = d3;
		delay(1000);
	}
}