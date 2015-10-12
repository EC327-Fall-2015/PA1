//Q3 Hamming Distance


#include <iostream>
#include <cmath>

using namespace std;

string decToHex(unsigned int ints)			//Converting Decimal to Hex by hand
{
	unsigned int holder = ints;
	unsigned int digitDec;
	char nextDigit;
	string loop;
	do
	{
		digitDec = holder%16;				//next digit in decimal
		if (digitDec <10){					//if it's the same in hex as decimal, put into string.
			nextDigit = '0' + digitDec;
		}
		else
		{
			if (digitDec == 10){			//replace 10-15 with A-F
				nextDigit = 'A';
			}
			else if (digitDec == 11){
				nextDigit = 'B';
			}
			else if (digitDec == 12){
				nextDigit = 'C';
			}
			else if (digitDec == 13){
				nextDigit = 'D';
			}
			else if (digitDec == 14){
				nextDigit = 'E';
			}
			else if (digitDec == 15){
				nextDigit = 'F';
			}

		}
		holder = holder/16;					//Holds the quotient to be used again.
		loop = nextDigit + loop;			//Adds next digit to the string of hex.

	}while (holder !=0);

	return loop;
}


//////////////////////
//		Main 		//
//////////////////////



int main()
{
	unsigned int num1;
	unsigned int num2;

	cout << "Enter two positive integers: " << endl;
	cin >> num1;
	cin >> num2;

	string hex1 = decToHex(num1);						//Convert Decimals to Hex
	string hex2 = decToHex(num2);

	
	

	if (hex1.length() > hex2.length())					//Check if hex numbers are of unequal length.
	{
		do
		{
			hex2 = '0'+ hex2;
		}while (hex1.length()>hex2.length());			//Add zeroes to extend the shorter number.
	}
	else if (hex2.length() > hex1.length())
	{
		do
		{
			hex1 = '0' + hex1;
		}while (hex2.length() > hex1.length());			//Add zeroes to extend the shorter number.
	}	

	
	int hamCount = 0;
	int strLength = hex1.length();
	int cnt = 0;

	for (cnt; cnt<strLength; cnt++)						//Check individual digits to find hamming distance.
	{
		if (hex1.at(cnt) != hex2.at(cnt))				//Compare the characters in the strings.
		{
			hamCount++;									//If not equal, Hamming Distance+1
		}
		else
		{
			continue;
		}
	}


	//cout << hex1 << endl;
	//cout << hex2 << endl;
	cout << "Hamming Distance between " << num1 << " and " << num2 << " when numbers are in hex format is: " << hamCount << "." << endl;

	return 0;
}