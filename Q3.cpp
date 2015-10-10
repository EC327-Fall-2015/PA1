#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int hex1;
	int hex2;
	int count = 0;
	
	cout << "Enter two positive integers:" << endl;			//prompt user to enter two positive integers
	cin >> num1;
	cin >> num2;

	int one = num1;					//initialize one as num1 for while loop
	int two = num2;					//initialize two as num2 for while loop

	while ((one != 0) || (two != 0))
	{
		hex1 = one % 16;			//hex1 gets the remainder of one/16
		hex2 = two % 16;			//hex2 gets the remainder of two/16

		{
			if (hex1 == 10)			//if hex >= 10, then need to accordingly assign 10 to 'A', 11, to 'B', etc.
				hex1 = 'A';
			else if (hex1 == 11)
				hex1 = 'B';
			else if (hex1 == 12)
				hex1 = 'C';
			else if (hex1 == 13)
				hex1 = 'D';
			else if (hex1 == 14)
				hex1 = 'E';
			else if (hex1 == 15)
				hex1 = 'F';
		}

		{
			if (hex2 == 10)
				hex2 = 'A';
			else if (hex2 == 11)
				hex2 = 'B';
			else if (hex2 == 12)
				hex2 = 'C';
			else if (hex2 == 13)
				hex2 = 'D';
			else if (hex2 == 14)
				hex2 = 'E';
			else if (hex2 == 15)
				hex2 = 'F';
		}

		if (hex1 != hex2)			//compare the two hex values which is the remainders of one/16 and two/16
			count++;				//if the two hex values are different, increment count (this will in the end be the hamming distance)

		one /= 16;				//one gets the value of one/16
		two /= 16;				//two gets the value of two/16

	}

	cout << "Hamming distance between " << num1 << " and " << num2 << 
		" when numbers are in hex format is: " << count << endl;			//hamming distance is count

	return 0; 
}