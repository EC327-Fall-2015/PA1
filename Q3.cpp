#include <iostream>
#include <string>
using namespace std;

string getHexOfDecimal(unsigned int value)
{
	// Convert the decimal input value into hex format
	int result;
	int leftOver;
	string hexVal;

	do
	{
		// Have a variable to hold the resulting hex character after conversion
		string incrementHexVal;

		// Take decimal number, and divide by 16 and store the result and the remainder (using modulus)
		result   = ( value / 16 );
		leftOver = ( value % 16 );

		// if the hex value is from 0-9, then we can just use that character as a string, otherwise convert to hex letter
		switch( leftOver )
		{
			case 0:
				incrementHexVal = "0";
				break;
			case 1:
				incrementHexVal = "1";
				break;
			case 2:
				incrementHexVal = "2";
				break;
			case 3:
				incrementHexVal = "3";
				break;
			case 4:
				incrementHexVal = "4";
				break;
			case 5:
				incrementHexVal = "5";
				break;
			case 6:
				incrementHexVal = "6";
				break;
			case 7:
				incrementHexVal = "7";
				break;
			case 8:
				incrementHexVal = "8";
				break;
			case 9:
				incrementHexVal = "9";
				break;
			case 10:
				incrementHexVal = "A";
				break;
			case 11:
				incrementHexVal = "B";
				break;
			case 12:
				incrementHexVal = "C";
				break;
			case 13:
				incrementHexVal = "D";
				break;
			case 14:
				incrementHexVal = "E";
				break;
			case 15:
				incrementHexVal = "F";
				break;
			default:
				break;
		}

		// Prepend the digit to the hexVal variable
		hexVal = incrementHexVal + hexVal;

		// update the value to be divided in next loop to the result from this loop
		value = result;

	} while(result != 0);

	return hexVal;
}


int getHammingDistance(unsigned int value1, unsigned int value2)
{
	// Instantiate 2 strings to hold hex conversions of input values
	string hexValue1;
	string hexValue2;

	// Get hex version of input values
	hexValue1 = getHexOfDecimal(value1);
	hexValue2 = getHexOfDecimal(value2);

	// If the hex values are not the same length, prepend 0's to the shorter value until they are the same length
	if( hexValue1.length() < hexValue2.length() )
	{
		do
		{
			hexValue1 = "0" + hexValue1;

		} while(hexValue1.length() < hexValue2.length());
	}
	else if(hexValue2.length() < hexValue1.length())
	{
		do
		{
			hexValue2 = "0" + hexValue2;

		} while(hexValue2.length() < hexValue1.length());
	}
	
	// Instantiate Hamming distance counter
	int hammingCounter = 0;

	// Calculate Hamming distance between the two values
	for (int i = 0; i < hexValue1.length(); ++i)
	{
		// Start at first character in hexValue1, and check if it is equal to the first character in the hexValue2
		string characterCheck1 = hexValue1.substr(i, 1);
		string characterCheck2 = hexValue2.substr(i, 1);

		if( characterCheck1 != characterCheck2 )
		{
			// The characters are different, so increment Hamming distance counter
			hammingCounter++;
		}
	}
	return hammingCounter;
}

int main()
{
	// Problem only wants inputs of 32-bit-precision positive integers
	unsigned int value1;
	unsigned int value2;
	int hammingDist;

	// Receive inputs
	cout << "Enter two positive integers:" << endl;
	cin >> value1;
	cin >> value2;

	// Calculate Hamming distance
	hammingDist = getHammingDistance(value1, value2);

	cout << "Hamming distance between " << value1 << " and " << value2 << " when numbers are in hex format is: " << hammingDist << endl;

	return 0;
}