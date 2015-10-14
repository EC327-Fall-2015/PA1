/*

Q4.cpp (PA1, Q4)

Letter Conversion (25 pts)
	- User inputs character
	- User inputs non-neg int offset
	- Adds offset to character
	- Returns new ASCII val 

Name: Kiara Alberto
BUID:  U73121880
email: kikisq@bu.edu

*/


#include <iostream>
using namespace std;


// Main function
int main()
{
	// Enter character and offset
	cout << "Enter character: ";
	char ch;
	cin >> ch;
	cout << "Offset (enter 0 to convert case): ";
	unsigned int offset;
	cin >> offset;

	// A-Z: 65-90
	// a-z: 97-122

	// Difference between upper and lowercase letters
	int chOffset = 'a' - 'A';
	//cout << "chOffset is " << chOffset << endl;

	// X = offset character
	char X;

	// Character conversion
	if (offset == 0)
	{
		if (ch >= 'a' && ch <= 'z')	// ch is lowercase
		{ 
			X = ch - chOffset;
			cout << "New character: " << X << endl;
		}			
	
		else if (ch >= 'A' && ch <= 'Z')	// ch is uppercase 
		{
			X = ch + chOffset;
			cout << "New character: " << X << endl;
		}

		else	// ch is not a letter
		{
			X = ch;	
			cout << "New character: " << X << endl;
		}
	} 			
	
	else	// offset != 0
	{
		int chVal = ch + offset;

		if (chVal > 126)	// Characters no longer valid (del != character)
		{
			cout << "Error. Out of range." << endl;
		}
		
		else
		{ 
			X = ch + offset;	// Offset character valid, print result
			cout << "New character: " << X << endl;
		}
	}
	
	return 0;
}

