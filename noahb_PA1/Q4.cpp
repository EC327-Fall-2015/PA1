#include <iostream>
using namespace std;

int main ()
{
	//declare variables
	char input_char;
	int input_offset;
	char new_char;
	
	//Prompt user to enter a character and assign it to input_char
	cout << "Enter character: ";
	cin >> input_char;

	//Prompt user to enter an integer offset and assign it to input_offset
	redo: cout << "Offset (enter 0 to convert case): ";
	cin >> input_offset;

	//Error message if the offset integer is negative or the sum of the character and offset integer exceed 126 and end program
	if (input_offset < 0 || (input_char + input_offset) > 126)
		{
			cout << "Error. Out of range." << endl;
			return 0;
		}

	/* If the input_offset is 0, return a lowercase letter if the original character was an uppercase letter and an uppercase letter if the original character was a lowercase letter. If the original character was not a letter, return the original character unchanged. */
	if (input_offset == 0)
		if (isalpha(input_char))
			if (isupper(input_char))
				{
					new_char = tolower(input_char);
				}
			else 
				{
					new_char = toupper(input_char);
				} 
		else 
		{
			new_char = input_char;
		}

	// If the offset was not 0, return the character that maps to the ACII code for the sum of the character's ASCII code plus the offset integer.
	else
	{
		new_char = static_cast<char>(input_char + input_offset);
	}
	

	//Print out the new character and end program
	cout << "New character: " << new_char << endl;

	return 0;
}
