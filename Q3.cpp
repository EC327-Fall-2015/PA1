#include <iostream>
#include <string>
using namespace std;


int main()
{
	int firstUserInput;
	int secondUserInput;
	cout << "Enter two positive integers:\n";
	cin >> firstUserInput;
	cin >> secondUserInput;

	int firstOriginal = firstUserInput;
	int secondOriginal = secondUserInput;

	int counter = 0;

	// In this while loop, both numbers have values
	while (firstUserInput > 1 && secondUserInput > 1)
	{
		int firstDigit = firstUserInput % 16;
		int secondDigit = secondUserInput % 16;
		if (firstDigit != secondDigit)
		{
			counter++;
		}
		firstUserInput /= 16;
		secondUserInput /= 16;
	}
	
	// Catch remaining digits for one of the numbers
	while (firstUserInput > 1 || secondUserInput > 1)
	{
		counter++;
		firstUserInput /= 16;
		secondUserInput /= 16;
	}
	
	cout << "Hamming distance between " << firstOriginal << " and " 
		 << secondOriginal << " when numbers are in hex format is: " << counter;

	return 0;
}
