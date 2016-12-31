#include <reg51.h>
unsigned char data a[10] _at_ 0x60;
void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main(void)
{
	unsigned char i, j, temp;
	a[0] = 0xa5; a[1] = 0xfd; a[2] = 0x67;
	a[3] = 0x42; a[4] = 0xdf; a[5] = 0x9a;
	a[6] = 0x84; a[7] = 0x1b; a[8] = 0xc7;
	a[9] = 0x31;
	
	for(i=0;i<10;i++)
		for(j=0;j<i;j++)
			if(a[j] > a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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