#include <iostream>
using namespace std;

int main()
{
	char ch;
	int offset;
	char neww;

	cout << "Enter character: ";			// prompts user to enter a character
	cin >> ch;

	cout << "Offset (enter 0 to convert case): ";	//prompts user to enter the offset
	cin >> offset;

	{
		if (int (ch + offset) > 127 || offset >=127)	//checks to see if resulting char code is greater than 127 which is the last value in ascii characters
			cout << "Error. Out of range" << endl;
		else if (offset == 0)						//operations if user inputted offset is 0
		{
			if (ch >= 'A' && ch <= 'Z')				//if offset is 0 and character is a capital letter, program changes character to lowercase
			{
				neww = 'a' + (ch - 'A');
				cout << "New character: " << neww << endl;
			}
			else if (ch >= 'a' && ch <= 'z')		//if offset is 0 and character is a lowercase letter, program changes character to uppercase
			{
				neww = 'A' + (ch - 'a');
				cout << "New character: " << neww << endl;
			}
			else if ((ch > 'Z' && ch < 'a') || (ch < 'A') || (ch > 'z'))	//if offset is 0 and character is not a letter, same character is displayed
			{
				neww = ch;
				cout << "New character: " << neww << endl;
			}
		}

		else 					//if user inputs character and offset, the new character is character + offset
		{
			neww = ch + offset;
			cout << "New character: " << neww << endl;
		}
	}

	return 0;


}