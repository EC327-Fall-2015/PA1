#include <iostream>

using namespace std;

int main(){

	char c;
	int offset;

	cout << "Enter character: ";
	cin >> c;         // enter a character

	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;    // enter a non-negative integer offset

	if ( (c + offset) <= 127){      // check if the resulting char code is greater than 127
		if (offset == 0) {
			if ( c>=65 && c<=90 )   
			c = c + 32;             // convert an uppercase letter to a lowercase letter

			if ( c>=97 && c<=122)
			c = c - 32;             // convert a lowercase letter to an uppercase letter

			if ( (c>=0 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=127))
			c = c;

		}
		else {
			c = c + offset;
		}
		cout << "New character: " << c << endl;
	}

	else {
	  cout << "Error. Out of range." << endl;     // error message
	}

	return 0;
}





