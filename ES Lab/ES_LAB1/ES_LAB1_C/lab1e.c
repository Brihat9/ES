#include <reg51.h>
unsigned char data d[10] _at_ 0x50;

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main(void)
{
	unsigned char smallest, largest;
	unsigned char i;
	
	d[0] = 0xd6; d[1] = 0xf2; d[2] = 0xe4; 
	d[3] = 0xa8; d[4] = 0xce; d[5] = 0xb9; 
	d[6] = 0xfa; d[7] = 0xae; d[8] = 0xba;
	d[9] = 0xcc;

	smallest = largest = d[0];
	for(i=1;i<10;i++)
	{
		if(d[i] < smallest)
			smallest = d[i];
		if(d[i] > largest)
			largest = d[i];
	}
	
	while(1)
	{
		P0 = smallest;
		delay(1000);
		P0 = largest;
		delay(1000);
	}	
}