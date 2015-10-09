#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
	char char1, char2; //declared variables for character 1 and 2
	int offset, offset2;			//declared that offset is an integer

	cout << "Enter character: ";
	cin >> char1;

	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	if(offset == 0)  //if offset is 0 change capitalization of character
		{
			if(islower(char1)) //if lowercase letter, then 32 is added to offset
			{
				offset = toupper(char1) - tolower(char1);
				cout << offset <<endl;
			}
			else 			//if uppercase letter, then 32 is subtracted from offset
			{ 
				offset = tolower(char1) - toupper(char1);
				cout << offset << endl;
			}
		}

	char2 = (int)char1 + offset; //adds offset to old character to produce new character

		if(char2 >= '~')
		{
			cout << "Error. Out of range.";
			return 0;
		}

	cout << "New character: " << char2;

return 0;
}
