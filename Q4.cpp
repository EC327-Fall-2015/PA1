#include <iostream>
using namespace std;

int main() {

	//Instantiate variables for the character and offset inputed by user
	char character;
	int offset;

	//Create variables for limits of upper and lower case letters
	int upperA = 'A', upperZ = 'Z', lowerA = 'a', lowerZ = 'z';

	//Ask user to input character and offset
	cout << "Enter character: ";
	cin >> character;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	if (offset == 0 && character >= upperA && character <= upperZ) {
		//If letter is upper case and offset == 0, convert to lower case
		character = character + ('a' - 'A');
	} else if (offset == 0 && character >= lowerA && character <= lowerZ) {
		//If letter is lower case and offset == 0, convert to upper case
		character = character + ('A' - 'a');
	} else if (character + offset > 127) {
		//If offset creates letter than is out of range, alert user and quit
		cout << "Error. Out of range." << endl;
		return 0;
	} else {
		//Regularly offset character by specified offset
		character = character + offset;
	}

	//Output new character to user
	cout << "New character: " << character << endl;
	return 0;
}