#include <iostream>
#include <exception>

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
	try
	{
		output = binToDec(input);
		std::cout << output;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what();
	}

	return 0;
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
		else if (bin.at(i) != '0')
		{
			throw std::invalid_argument("Cannot conatin digits/characters other than 0 or 1\n");
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
