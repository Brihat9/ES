#include <reg51.h>
unsigned char data multiplicand _at_ 0x22;
unsigned char data multiplier _at_ 0x15;
unsigned char data answer[2] _at_ 0x19;

void delay(int time)
{
	unsigned int i,j;
	for (i=0;i<time;i++)
		for (j=0;j<125;j++);
}

void main(void)
{
	unsigned int result = 0x0;
	unsigned char i;
	
	multiplicand = 0xff;
	multiplier = 0xde;
	
	for(i=0x0;i<multiplier;i++)
		result += multiplicand;
	
	answer[0] = result%0x100;
	result >>= 8;
	answer[1] = result%0x100;

	while(1)
	{
		P0 = answer[0];
		delay(1000);
		P0 = answer[1];
		delay(1000);
	}	
}