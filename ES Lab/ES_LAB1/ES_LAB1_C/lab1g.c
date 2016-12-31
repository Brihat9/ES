#include <reg51.h>
unsigned char data d[21] _at_ 0x40;

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

int isprime(unsigned char val)
{
	unsigned char j;
	for(j=0x2;j<val;j++)
		if(val % j == 0x0)
				break;
	if(j==val)
			return 1;
	return 0;
}
	

void main(void)
{
	unsigned char a[20];
	unsigned char i, count=0;
	for(i = 0x0; i<0x21; i++)
		d[i] = i;
	
	a[count++] = 0x2;
	
	for(i=0x3;i<0x21;i++)
	{
		if(isprime(d[i]))
			a[count++] = d[i];
	}
	
	while(1)
	{
		for(i = 0;i<count;i++)
		{
			P0 = a[i];
			delay(1000);
		}
	}	
}