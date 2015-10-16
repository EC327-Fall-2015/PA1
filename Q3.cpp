#include <iostream>
#include <string>
using namespace std;

int main()
{
	unsigned long float1, float2;
	//get user inputs
	cout << "Enter two positive integers: ";
	cin >> float1;
	cout << endl;
	cin >> float2;
	cout << endl;

	//just realized I have to preserve original values
	float a = float1;
	float b = float2;

	//We're just going to compare decimal values of each exponent coefficient
	//comparing to the 8th because 2^32 = 16^8
	for (i = 7; i >= 0; i++)
	{
		float d = 16 * *i;
		term1 = float1 / d;
		term2 = float2 / d;
		if (term1 != term2)
			counter++;
		float1 -= term1*d;
		float2 -= term2*d;

	}

	cout << "Hamming distance between " << a << " and " << b << " when numbers are in hex format is: " << distance;


	return 0;
}
