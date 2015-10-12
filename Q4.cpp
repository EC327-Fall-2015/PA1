//Q4
//Letter Conversion
#include <iostream>

using namespace std;

//////////////////////
//		Main 		//
//////////////////////

int main()
{
	char chr;
	int offset;

	cout << "Enter character: ";			//Take in first character
	cin >> chr;

	cout << "Offset (enter 0 to convert case): ";		//Take in offset
	cin >> offset;

	if (offset == 0)									//if change case
	{
		if (chr >=65 && chr <= 90)						//Check if uppercase
		{
			chr += 32;									//lower & upper ASCII values separated by 32
		}
		else if (chr >= 97 && chr <= 122)				//Check if lowercase
		{
			chr -= 32;
		}
		else
		{
			;											//Do nothing to chr if not a letter.		
		}
	}
	else
	{
		chr += offset;									//if not change case, just add the offset to char.
	}
	if (chr > 126 || chr < 32)							//if out of bounds (unprintable), throw up error message and exit.
	{
		cout << "Error. Out of range." << endl;
		return -1;
	}
	else
	{
		int chrVal = chr;								//If everything works, give new character.
		cout << "New character: " << chr << endl;
		return 0;
	}
}