#include <reg51.h>
unsigned char data a[10] _at_ 0x55;

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

int check_seq(unsigned char val)
{	
	unsigned char j;
	for(j=0;j<8;j++)
			if((val & 0x3) == 0x3)
				return 1;
			else
				val >>= 1;
	return 0;
}
	
void main(void)
{
	unsigned char i, count = 0, b[10];
	a[0] = 0x25; a[1] = 0x3d; a[2] = 0xf7;
	a[3] = 0x13; a[4] = 0xc9; a[5] = 0x4e;
	a[6] = 0x62; a[7] = 0x77; a[8] = 0xb8;
	a[9] = 0xeb;

	for(i=0;i<10;i++)
	{
		if(check_seq(a[i]))
			b[count++] = a[i];
	}
	
	while(1)
	{
		for(i = 0;i<count;i++)
		{
			P0 = b[i];
			delay(1000);
		}
	}	
}