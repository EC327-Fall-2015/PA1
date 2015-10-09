#include <iostream>
using namespace std;

int main() {

	//Instantiate variable for numbers, hex place and hamming distance
	int number1 = 0;
	int number2 = 0;
	int hex = 1;
	int hamming = 0;

	//Ask the user to input numbers to find hamming distance
	cout << "Enter two positive integers:" << endl;
	cin >> number1 >> number2;

	//Output prefix of answer
	cout << "Hamming distance between " << number1 << " and " << number2 << " when numbers are in hex format is: ";

	//Find the power of 16 that is just less than the value of the larger integer
	do {
		hex = hex * 16;
	} while (hex < number1 || hex < number2);
	hex = hex / 16;

	//Perform calculation until all powers of 16 have been tested
	while (hex > 0) {
		//Check if quotients from numbers and power of 16 are equal (value in base-16 numbers are equal)
		if (number1 / hex != number2 / hex) {
			//Increase the hamming distance
			hamming++;
		}
		//Decrease power of 16 and numbers to continue to next base
		if (hex < number1)
			number1 = number1 % hex;
		if (hex < number2)
			number2 = number2 % hex;
		hex = hex / 16;
	}

	//Output hamming distance and new line
	cout << hamming << endl;
	return 0;
}