/*
	John Marcao
	EC327
	PA1 Q4
*/

#include <iostream>

using namespace std;

int main(){
	char newLetter = 0;
	char oldLetter = 0;
	int offset = 0;
	
	//Ask User for Inputs
	cout << "Enter character: ";
	cin >> oldLetter;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;
	
	// If the "Change Case" option ('0') is chosen and it is a valid character, change the case
	if ( offset == 0 && ((oldLetter >= 65 && oldLetter <= 90))){ 
		offset = 'a' - 'A';
	}
	else if ( offset == 0 && ((oldLetter >= 97 && oldLetter <= 122))){
		offset = 'A' - 'a';
	}
	
	// Offset the character
	newLetter = oldLetter + offset;
	
	//If the resultant is not a valid character, produce an error
	//Otherwise, print out the result
	if ((newLetter > 126) || (newLetter < 32))
		cout << "Error. Out of range." << endl;
	else
		cout << "New Character: " << newLetter << endl;
		
	
	return 0;
}
