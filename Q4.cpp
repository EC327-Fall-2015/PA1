#include <iostream>
using namespace std;
int main() {
	cout << "Enter a character: ";
	char base;
	cin >> base;
	cout << "Offset(enter 0 to convert case) ";
	int offset;
	cin >> offset;
	
	int code = base; //stores code as base's ascii value since its a char
	if(offset == 0){ 
		//uppercase -> lowercase
		if (code >= 65 && code <= 90) {
			code += 32;
		}
		//lowercase -> uppercase
		else if (code >= 97 && code <= 122) {
		code = code - 32;
		}
		
	}
	//all other cases, just add the offset(unless it's out of ASCII range
	else {
		// if offset puts value outside ASCII range, throw an error
		if (code + offset > 127)
			cout << "Error. Out of range." << endl;
		else {
			code += offset;
			char done = code;
			cout << "New character: " << done << endl;
		}
	}
	return 0;
}