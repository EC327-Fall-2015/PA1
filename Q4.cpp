#include <iostream>

using namespace std;

int main()
{
	char input;						//user's inputted character
	char output;					//the program's output
	int offset;						//user's inputted offset
	
	int u2l = 'a' - 'A';			//decimal distance from ASCII upper case to lower case
	
	cout << "Enter character: ";
	cin >> input;
	
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;
	
	if (offset == 0)																	//OFFSET IS 0
	{
		if ((static_cast<int>(input) >= 65) && (static_cast<int>(input) <= 90))			//if input is an upper case letter
		{
			output = input + u2l;														//change upper case to lower case
			
			cout << "New character: " << output;
		}
		
		else if ((static_cast<int>(input) >= 97) && (static_cast<int>(input) <= 122))	//if input is a lower case letter
		{
			output = input - u2l;														//change lower case to upper case
			cout << "New character: " << output;
		}
		
		else 																			//if input is a symbol
		{
			output = input;																//no changes
			cout << "New character: " << output;
		}
	}
	
	else																		//OFFSET IS NOT 0
	{
		output = input + offset;												//increase the decimal index of the character by offset
		
		if (static_cast<int>(output) > 127 || static_cast<int>(output) < 0)		//if the decimal index of the ASCII is outside of the range of [0,127] (7 bits)
		{																		//ASCII holds 7 bits of characters and 1 bit used for error detection
			cout << "Error. Out of range.";
		}
		
		else																	//if not, output the new character increased by the offset
		{
			cout << "New character: " << output;
		}
	}
	
	return 0;
}
	
	