#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Enter character: ";//prompt user to enter character and change to int value
	char character;
	cin >> character;

	cout << "Offset (enter 0 to convert case): ";//prompt user to input offset value
	int offset, charValue;
	cin >> offset;

	//if offset is 0 and character is a letter, program should change case of letter
	if (offset == 0 && islower(character))//for lowercase go to uppercase
		cout << "New character: " << static_cast<char>(toupper(character)) << endl;
	else if (offset == 0 && isupper(character))//for uppercase go to lowercase
		cout << "New character: " << static_cast<char>(tolower(character)) << endl;
	else  
	{	
		charValue = static_cast<int>(character);
		int newValue = charValue + offset;//add offset to character to produce new ASCII value
		if (newValue > 127)
			cout << "Error. Out of range." << endl;
		else			
		{
			char newAsciiValue = static_cast<char>(newValue);
			cout << "New character: " << newAsciiValue << endl;
		}
	}

	return 0;
}
