#include <iostream>
using namespace std;

int main ()
{
	char character; //initialize the character the user will input
	cout << "Enter a character : "; //prompt the user for a character input
	cin >> character; //user enters character input
	int intcharacter = character; //cast the character into an integer to make conversions and offsets easier
	int offset; //initialize the integer offset that the user will input
	cout << "Offset (enter 0 to convert case): "; //prompt the user to input an offset they would like
	cin >> offset; //user enters integer offset
	int sum = character + offset; //initialize the integer sum as the integer value of the character plus the offset
	if (sum > 127) //if the sum is greater than 127, the value of x, or the number of ASCII characters, print an error statement
	{
		cout << "Error. Out of Range." << endl; //print an error statement
		return 0; //end program
	}
	if (offset == 0) //if the offset is 0, the letters must change case
	{
		if ((intcharacter >= 65) && (intcharacter <= 90)) //if the integer value of the character is between and including 65 and 90 (the ascii values of capital letters)
		{
			int changecase = intcharacter + 32; //the integer value of the character adds 32 so that capital letters change case into lowercase
			cout << "New character: " << static_cast<char>(changecase) << endl; //cast the new integer into a character again and print the value 
			return 0; //end program
		} 
		else if ((intcharacter >= 97) && (intcharacter <= 122)) //however, if the integer value of the character is between and including 90 and 122 (the ascii values of lowercase letters)
		{
			int changecase = intcharacter - 32; //the integer value of the character subtracts 32 so the lowercase letters change case into uppercase letters
			cout << "New character: " << static_cast<char>(changecase) << endl; //cast the new integer into a character again and print the value
			return 0; //end program
		}
	}
	cout << "New character: " << static_cast<char>(sum) << endl; //if the offset is a number aside from zero or the character is not a letter, this will cast the new value into a character again
	//if the offset was 0 and the character was not a letter, the original character will be casted and printed
	return 0; //end program
}