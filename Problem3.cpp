
//this program takes two positive integers in decimal, and computes the hamming distance between the numbers in hexadecimal
//hamming distance is the number of substitutions or errors or different digits in the two strings
#include <iostream>
#include "math.h"
#include "stdlib.h"
#include <string>

using namespace std;
//include the necessary libraries and header files

int main()
{
	//declare variables with up to 32-bits of precision
	unsigned long int val1;
	unsigned long int val2;
	int hex1[8];
	int hex2[8];
	int count = 0;
	int val3;
	int val4;

	//prompt the user to enter two positive decimal integers
	cout << "Enter two positive integers:" << endl;
	cin >> val1;
	cin >> val2;

	//make a copy of the two input values, so that there is an original and a changed copy
	val3 = val1;
	val4 = val2;

	//set up an algorithm to convert the numbers to hex and store in an array, 32 bits or 8 hex digits long
	for (int i = 7; i >= 0; i--)
	{
		hex1[i] = val1 % 16;
		val1 = (val1 - hex1[i]) / 16;
		hex2[i] = val2 % 16;
		val2 = (val2 - hex2[i]) / 16;
	}
	//compare the digits in each array and keep a count for hamming distance
	for (int j = 0; j < 8; j++)
	{
		if (hex1[j] != hex2[j])
			count++;
	}

	//print out the number of different digits, the hamming distance, of the two hexadecimal values
	cout << "Hamming distance between " << val3 << " and " << val4 << " when numbers are in hex format is: " << count << endl;
	return 0;
}