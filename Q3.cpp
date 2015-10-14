#include <iostream>
#include <math.h>	// floor()
#include <cmath>	// pow()

using namespace std;

int main()
{
	unsigned int num1, num2, loopnum1, loopnum2, rem1, rem2, ii, hamdist;
		// user input numbers, numbers changed in the loop, remainders, counter, output

	cout << "Enter two positive integers: " << endl;
	cin >> num1 >> num2;
	
	loopnum1 = num1;
	loopnum2 = num2;
	hamdist = 0;

	for (int ii = 0; ii <= 7; ii++)
	{
		rem1 = loopnum1 % 16;
		loopnum1 = floor(loopnum1 / 16);		// checks num1

		rem2 = loopnum2 % 16;
		loopnum2 = floor(loopnum2 / 16);		// checks num2

		if (rem1 != rem2)
		{
			hamdist = hamdist + 1;		// hamming distance incremented
		}
	}

	cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in hex format is: " << hamdist << endl;

	return 0;
}