#include <iostream>
using namespace std;

string getOffsetCharacter(char character, unsigned int offset)
{
	string offsetCharacter;
	int newValue = character + offset;
	
	// Check to make sure offset hasn't brought user out of range
	if( newValue >= 127 )
	{
		// Set the character equal to a string with length() > 1, so that it fails validation later when we print the final response
		offsetCharacter = "Out of range.";
	}
	else
	{
		if(offset == 0)
		{
			if(newValue >= 65 && newValue <= 90)
			{
				// Character is an uppercase letter. Convert to lowercase
				newValue = newValue + 32;
			}
			else if(newValue >= 97 && newValue <= 122)
			{
				// Character is a lowercase letter. Convert to uppercase.
				newValue = newValue - 32;
			}
		}
		offsetCharacter = static_cast<char>(newValue);
	}

	return offsetCharacter;
}

int main()
{
	char startCharacter;
	string finalCharacter;
	unsigned int offsetValue;

	cout << "Enter character: ";
	cin >> startCharacter;

	cout << "Offset (enter 0 to convert case): ";
	cin >> offsetValue;

	// Use the offset to figure out the new character
	finalCharacter = getOffsetCharacter(startCharacter, offsetValue);
	
	if(finalCharacter.length() > 1)
	{
		// Then the offset was outside of the valid range
		cout << "Error. " << finalCharacter << endl;
	}
	else
	{
		cout << "New character: " << finalCharacter << endl;
	}

	return 0;
}