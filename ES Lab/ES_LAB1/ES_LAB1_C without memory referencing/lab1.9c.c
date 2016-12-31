#include <reg51.h>

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
	unsigned char i, count = 0;
	unsigned char a[10] = { 0x25, 0x3d, 0xf7, 0x13, 0xc9, 0x4e, 0x62, 0x77, 0xb8, 0xeb },b[10];

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