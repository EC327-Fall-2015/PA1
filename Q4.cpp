#include <iostream>

using namespace std;

int main()
{
	cout << "Enter character: ";
	char input;
	cin >> input;

	bool bigAlpha = false;
	bool littleAlpha = false;

	if(int(input) < 91 and int(input) > 64){
		bigAlpha = true;
	}else if(int(input) < 123 and int(input) > 96){
		littleAlpha = true;
	}

	cout << "Offset (enter 0 to convert case): ";
	int offset;
	cin >> offset;
	
	if (((int(input) + offset) > 126) or ((int(input) + offset) < 32)){
		cout << "Error. Out of range." << endl;
		return 0;
	} 
	
	if(offset == 0 and (bigAlpha or littleAlpha))
	{
		if(bigAlpha){
			cout << "New character: " << char(int(input) + 32) << endl;
		}else if(littleAlpha){
			cout << "New character: " << char(int(input) - 32) << endl;
		}
	} else if (offset == 0 and not (bigAlpha or littleAlpha)) {
		cout << "New character: " << input << endl;
	} else {
		cout << "New character: " << char(int(input) + offset) << endl;
	}
	return 0;
}
