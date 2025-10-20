#include <stdio.h>

int binaryToDecimal(unsigned long long binaryNumber);

int main()
{
	// declare variables
	unsigned long long binaryInput;
	int decimalOutput;
	
	// input binary number
	printf("input a binary number to convert: ");
	scanf("%llu", &binaryInput);

	// convert to decimal
	decimalOutput = binaryToDecimal(binaryInput);

	// output decimal number
	printf("%llu in decimal form is %d\n", binaryInput, decimalOutput);

	// exit
	return 0;
}

int binaryToDecimal(unsigned long long binaryNumber)
{
	int decimalNumber = 0;
	int i = 0;
	unsigned long long divisor = 1;
	long numToAdd = 1;

	while (binaryNumber / divisor > 0)
	{
		if ((binaryNumber / divisor) % 2 == 1)
		{
			numToAdd = 1;
			for (int j = 1; j <= i; j++)
			{
				numToAdd *= 2;
			}

			decimalNumber += numToAdd;
		}

		i++;
		divisor *= 10;
	}

		
	return decimalNumber;
}
