
#include <iostream>
#include <math.h>
using namespace std;

unsigned int result;

int main() {

	unsigned int num1;
	unsigned int num2;
	cout << "Enter two positive integers: ";
	cin >> num1;
	cin >> num2;
	cout << endl;


	unsigned int hexArray1[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	unsigned int hexArray2[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	do {
		static int i = 0;
		static unsigned int val;
		static unsigned int prevResult = num1;
		static unsigned int remainderHexVal;

		val = (prevResult % 16);

		result = prevResult / 16;
		remainderHexVal = prevResult % 16;
	    hexArray1[i] = (remainderHexVal);

		prevResult = result;
		i++;


	} while (result != 0); //while quotient != 0


	do {
		static int j = 0;
		static unsigned int prevResult = num2;
		static unsigned int remainderHexVal;

		result = (prevResult / 16);
		remainderHexVal = prevResult % 16;
			hexArray2[j] = (prevResult % 16);

		prevResult = result;
		j++;

	} while (result != 0);

	unsigned int k;
	unsigned int sum = 0;
	for (k = 0; k != 9; k = k + 1)
	{
		if (hexArray1[k] != hexArray2[k])
			sum++;
	}

	cout << "Hamming distance between " << num1 << " and " << num2 << " when the numbers are in hex format is: " << sum << endl;

	system("pause");
	return 0;
}