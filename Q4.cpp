#include <iostream>
using namespace std;

int main() {
	char character; //initial character
	cout << "Enter character: ";
	cin >> character;
	int num; //number for convert
	cout << "Offest (enter 0 to convert case): ";
	cin >> num;
	int ASCII = int(character); //finds ASCII decimal number
	while ((ASCII + num) < 128){ //if the character plus number converstion is in range of ASCII
		if ((num == 0) && (ASCII < 123) && (ASCII>96)) { // checks if the convert is 0 and charcter is upper case, uppuer case to lower case converstion 
			int value = ASCII - 32;
			cout << "New character: " << char(value) << endl;
			return 0;
		}
		if ((num == 0) && (ASCII < 90) && (ASCII>64)) {  // checks if the convert is 0 and charcter is lowercase, lower case to upper case converstion 
			int value = ASCII + 32;
			cout << "New character: " << char(value) << endl;
			return 0;
		}
		if ((num == 0) &&(( (ASCII < 65) || (ASCII>122)) || ((ASCII<90) && (ASCII<97)))) {  // checks if the convert is 0 and charcter is not in alphabet, character stays the same 
			cout << "New character: " << char(ASCII) << endl;
			return 0;
		}
		if (num != 0) { // checks if num is not 0, changes by number incriment 
			int value = ASCII + num;
			cout << "New character: " << char(value) << endl;
			return 0;
		}
	}
	if ((ASCII + num) > 127){ // if character + converstion is out of range
		cout << "Error. Out of range.";
		return 0;
	}

}