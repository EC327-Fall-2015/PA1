#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	long int decimal1, decimal2;
	stringstream string1, string2;
	
	//Prompt user to enter decimal
	cout << "Enter two positive integers: " << endl;
	cin >> decimal1;
	cin >> decimal2;

	//Converting decimals to hex
	string1 << hex << decimal1;
	string hexdec1 = string1.str();

	string2 << hex << decimal2;
	string hexdec2 = string2.str();
	
	//computing size of variables
	int size1 = hexdec1.size();
	int size2 = hexdec2.size();

	int sum = 0;
	
	//calculating hamming distance	
	int i;
	if (size1 > size2) //comparing which variable is larger
	{
		for (i = 0; i < size1; i++) //looping through to compare each value of both strings
		{
			if (hexdec1[i] != hexdec2[i])
			{
				sum = sum +1;
			}
		}
	}
	else if (size2 > size1)
	{
		for (i = 0; i<size2; i++)
		{
			if (hexdec1[i] != hexdec2[i])
			{
				sum = sum +1;
			}
		}
	}
	else
	{
		for (i=0; i<size1;i++)
		{
			if (hexdec1[i] != hexdec2[i])
			{
				sum = sum + 1;
			}
		}
	}

	//Outputting result
	cout << "Hamming distance between " << decimal1 << " and " << decimal2
	<< " when numbers are in hex format is: " << sum << endl;

	return 0;
}

	
