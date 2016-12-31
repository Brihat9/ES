#include <reg51.h>

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main(void)
{
	unsigned char a[10] = { 0xa5, 0xfd, 0x67, 0x42, 0xdf, 0x9a, 0x84, 0x1b, 0xc7, 0x31};
	unsigned char i, j, temp;
	unsigned char largest = a[0];
	
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
			if(a[j] > a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
					
	}
	
	while(1)
	{
		for( i = 0;i<10;i++)
		{
			P0 = a[i];
			delay(1000);
		}
	}	
}