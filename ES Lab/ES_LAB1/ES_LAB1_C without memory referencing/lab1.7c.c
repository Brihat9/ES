#include <reg51.h>

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
	unsigned char i, count=2;
	
	a[0] = 0x2;
	a[1] = 0x3;
	
	for(i=0x4;i<0x21;i++)
	{
		if(isprime(i))
			a[count++] = i;
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