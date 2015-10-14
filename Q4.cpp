#include <iostream>
using namespace std;

void main(){
	char character;
	int offset;
	char newcharacter;
	cout << "Enter character: ";
	cin >> character;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	if (offset==0 & character>64) { //If the user wants to change case
		if (character <91){ // If the input is uppercase
			newcharacter=character+32;} //Add 32 to make it lowercase
		else{ // If the input is lowercase
			newcharacter= character-32;} //Subtract 32 to make it uppercase
	cout << "New character: " << newcharacter<< "\n";
	}
	else if (offset==0 & character<64){ //If the user inputs a non-letter, but wants to change case
		newcharacter= character;
	cout << "New character: " << newcharacter<< "\n"; //Output same input
	}
	else{ //If the user wants to add the offset
		newcharacter= character+offset; //Add the offset to change the ASCII value
		if ((int)newcharacter> 255  || offset > 255){ //If the addition is out of range
			cout << "Error. Out of range."<< endl;}
		else { //If the addition is within the range
			cout << "New character: " << newcharacter<< "\n";}
	}
	
	system("pause");
}