#include <iostream>
using namespace std;

int main()
{
	char char1;
	cout << "Enter character:";
	cin >> char1;
	int offset;
	cout << "Offset (enter 0 to convert case):";
	cin >> offset;
	int asciiv;
	asciiv = (int) char1;
	if (offset == 0) {
		if (char1 >= 65 && char1 <= 90){
			asciiv = asciiv + ('a' - 'A');
			char1 = (char) asciiv;
			cout << "New character: " << char1 << endl;
		}
	}
	else if ((offset + asciiv) < 127){
		asciiv = asciiv + offset;
		char1 = (char) asciiv;
		cout << "New character: " << char1 << endl;
	}
	else {
		cout << "Error. Out of range." << endl;
	}
return 0;	
}
