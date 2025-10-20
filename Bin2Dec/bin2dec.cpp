#include <iostream>

int pow(int base, int power);
int binToDec(std::string bin);

int main()
{
	// Declare variables
	std::string input;
	int output;
	
	// Prompt for input
	std::cout << "Enter a binary number to convert to decimal: ";
	std::cin >> input;

	// Convert to decimal
	output = binToDec(input);

	// Output result
	std::cout << output << std::endl;
}

int binToDec(std::string bin)
{
	int decimal = 0;
	
	for (int i = 0; i < bin.length(); i++)
	{
		if (bin.at(i) == '1')
		{
			decimal += pow(2, i); 
		}
	}

	return decimal;
}

int pow(int base, int exponent)
{
	int result = 1;

	for (int i = 0; i <= exponent; i++)
	{
		result *= base;
	}

	return result;
}
