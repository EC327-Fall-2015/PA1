
//this program takes a character input from the user, and allows the user to shift the ascii value of that character by a desired amount, or change the case of a letter
#include <iostream>
#include "math.h"
using namespace std;
//include the necessary libraries and header files

int main()
{
	//declare the variables
	char sym;
	int shift;
	char newsym;

	//prompt the user to enter a character and a value to shift the character ascii value by
	cout << "Enter character: ";
	cin >> sym;
	cout << "Offset (Enter 0 to convert case): ";
	cin >> shift;

	//if statements to determine if the character is a letter and if the shift value was 0
	//if the character was not a letter, a shift of 0 returned the same character
	//if the character was a letter, a shift of zero changed the case of the letter
	if (sym > 31 && sym < 65 && shift == 0)
	{
		newsym = sym;
		cout << "New character: " << newsym << endl;
	}
	else if (sym > 90 && sym < 97 && shift == 0)
	{
		newsym = sym;
		cout << "New character: " << newsym << endl;
	}
	else if (sym > 122 && shift == 0)
	{
		newsym = sym;
		cout << "New character: " << newsym << endl;
	}
	else if (sym > 64 && sym < 91 && shift == 0)
	{
		newsym = sym + 32;
		cout << "New character: " << newsym << endl;
	}
	else if (sym > 96 && sym < 123 && shift == 0)
	{
		newsym = sym - 32;
		cout << "New character: " << newsym << endl;
	}
	else if (sym < 32 || (sym + shift) > 127 || shift < 0)
		//if the shift put the character ascii value out of valid range,an error message is returned
	{
		cout << "Error. Out of range." << endl;
	}
	else
	{
		newsym = sym + shift;
		cout << "New character: " << newsym << endl;
	}
	return 0;
}