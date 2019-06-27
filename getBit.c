#include <stdio.h>
#include <math.h>

void getBit(int bitPosition)
{
	unsigned int step = 1;
	while ((step * pow(2, step + 1)) <= bitPosition)
		++step;
	unsigned int delta = bitPosition - (step - 1) * pow(2, step);
	unsigned int numberWithThisBit = pow(2, step) + delta / (step + 1);
	unsigned int bitValue = (numberWithThisBit >> (step - (delta % (step + 1)))) & 1;
	printf("%u %u\n", numberWithThisBit, bitValue);
}

int main(void)
{
	unsigned int bitPosition = 0;
	for (; bitPosition <= 1000; bitPosition++)
	{
		getBit(bitPosition);
		//getch();
	}
	return 0;
}