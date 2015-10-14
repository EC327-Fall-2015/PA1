/*

Q3.cpp (PA1, Q3)

Hamming Distance (25 pts)
	- # of pos @ which corresponding symbols are diff
		MIN # of subs needed to convert string A to string B
		ex: "toned" and "roses" is 3
	- User enters 2 + int (up to 32 bits)
	- Converts #s into hex ---> computes Hamming dist
	- Returns Hamming dist  

Name: Kiara Alberto
BUID:  U73121880
email: kikisq@bu.edu

*/


#include <iostream>
#include <string>	// string type
using namespace std;


// Convert decimal to hex (reference to pg 184)
string dec2Hex(int dec)
{
	string hex = "";	// Initialize empty hex string

	while (dec != 0)	// Keep looping while decimal value != 0
	{
		int val = dec % 16;	// Hex value = decimal value % 16 & obtain remainder

		char ch = (val <= 9 && val >= 0) ?		// Takes remainder and converts to hex character
			static_cast<char>(val + '0') :		// For values 0 thru 9
			static_cast<char>(val - 10 + 'A');	// For values 10 thru 15

		hex = ch + hex;		// Hex string = "nth hex val" +...+ "2nd hex val" + "1st hex val"
		dec = dec / 16;		// Go to next hex digit place
		
		//cout << "The hex number is " << hex << endl;
	}

	return hex;
}


// Return the HD btwn hex #s
int hamD(int &n1, int &n2)
{
	// Convert int to hex for both numbers
	string h1 = dec2Hex(n1);
	//cout << "The first int " << n1 << " is " << h1 << " in hex." << endl;
	string h2 = dec2Hex(n2);
	//cout << "The first int " << n2 << " is " << h2 << " in hex." << endl;

	int count = 0;		// Initialize counter

	for (int i = 0; i < h1.length(); i++)	// For index up to length of string, compare values
	{
		int X1 = h1[i];
		int X2 = h2[i];

		if (X1 == X2)	// If values are the same, increase counter by 1
		{
			count++;
			//cout << "Count is " << count << endl;
		}
	}

	return h1.length() - count;	// Returns the HD by subtracting the count from the string length
}


// Main function
int main()
{
	// Prompt user for 2 positive int	
	cout << "Enter two positive integers: " << endl;
	int n1;
	cin >> n1;
	int n2;
	cin >> n2;

	//cout << "n1 in hex is " << dec2Hex(n1) << endl;
	//cout << "n2 in hex is " << dec2Hex(n2) << endl;

	// Print result
	cout << "Hamming distance between " << n1 << " and " << n2 <<
		" when numbers are in hex format is: " << hamD(n1, n2) << endl;
	
	return 0;
}

