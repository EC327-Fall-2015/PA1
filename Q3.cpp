#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{


	int user_num1, user_num2;  // user numbers
	char buffer1[50], buffer2[50]; //space to put the hexadecimal number
	string old_rem1; // stores the string of old remainers. this becomes the hexadecimal for user_num1
	string old_rem2; // stores the string of old remainers. this becomes the hexadecimal for user_num2
	string hex1;
	string hex2;
	string hex_string;
	string hex_string2;
	cin>>user_num1>>user_num2;
	int length;
	int distance = 0;
	int i;

	int rem1; //the remainder adds the value behind of the hexadecimal number 1
	int rem2; //the remainder adds the value behind of the hexidecmal number 2


	while ((user_num1 != 0)) //the loop will continually run until user_num != 0
	{
		rem1 = user_num1 % 16;
		user_num1 /= 16; //integer division that ensures rem1 calculates the next remainder
		//sprintf(buffer1, "%d", rem1);

		if (rem1 == 10) //in case the hex value is a number 10 - 15, it will convert it to a character A-E
		{
			hex_string = "A";
			hex1 += hex_string; //adds the value in hex_string to the hex string
		}

		else if (rem1 == 11)
		{
			hex_string = "B";
			hex1 += hex_string;
		}
		
		else if (rem1 == 12)
		{
			hex_string = "C";
			hex1 += hex_string;
		}

		else if (rem1 == 13)
		{
			hex_string = "D";
			hex1 += hex_string;
		}

		else if (rem1 == 14)
		{
			hex_string = "E";
			hex1 += hex_string;
		}

		else if (rem1 == 15)
		{
			hex_string = "F";
			hex1 += hex_string;
		}


		else
		{
			sprintf(buffer1, "%d", rem1);
			hex1 += buffer1; 
		}

	}

	while ((user_num2 != 0)) //does the same thing as the first while loop but for user_num2
	{
		rem2 = user_num2 % 16;
		user_num2 /= 16;
		if (rem2 == 10)
		{
			hex_string2 = "A";
			hex2 += hex_string2;
		}

		else if (rem2 == 11)
		{
			hex_string2 = "B";
			hex2 += hex_string2;
		}
		
		else if (rem2 == 12)
		{
			hex_string2 = "C";
			hex2 += hex_string2;
		}

		else if (rem2 == 13)
		{
			hex_string2 = "D";
			hex2 += hex_string2;
		}

		else if (rem2 == 14)
		{
			hex_string2 = "E";
			hex2 += hex_string2;
		}

		else if (rem2 == 15)
		{
			hex_string2 = "F";
			hex2 += hex_string2;
		}


		else
		{
			sprintf(buffer2, "%d", rem2); //converts to type string
			hex2 += buffer2; 
		}

	}

	reverse(hex1.begin(), //hex1 and hex2 are backwards right now but this will flip it to the correct order
		hex1.end());

	reverse(hex2.begin(),
		hex2.end());

	cout<<hex1<<endl;

	cout<<hex2<<endl;

	length = hex1.length(); //calculates the length of the hexadecimal number


	for (i = 0; i<length; i++) //compares each character in hex1 to the corresponding character in hex2
	{
		if (hex1[i] != hex2[i]) //if the value isn't the same...
			distance ++; //computes the difference between the two user inputs

	}
	cout << "The hamming distance is " << distance << endl;

	return 0;

}


