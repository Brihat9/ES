#include <reg51.h>

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main(void)
{
	unsigned char a[10] = { 0xd6, 0xf2, 0xe4, 0xa8, 0xce, 0xb9, 0xfa, 0xae, 0xba, 0xcc};
	unsigned char smallest = a[0], largest = a[0];
	unsigned char i;
	
	for(i=1;i<10;i++)
	{
		if(a[i] < smallest)
			smallest = a[i];
		if(a[i] > largest)
			largest = a[i];
	}
	
	while(1)
	{
		P0 = smallest;
		delay(1000);
		P0 = largest;
		delay(1000);
	}	
}