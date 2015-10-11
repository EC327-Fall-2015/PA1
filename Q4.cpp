#include <iostream>
using namespace std;

int main() {

	char input;
	int offset;
	int total;
	char newchar;

	cout << "Enter character: ";
	cin >> input;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	total = input + offset;

	// If it's out of range, it'll prompt error
	if (total > 126)
	{
		cout << "Error. Out of range."<<endl;
		return(0);
	}

	// This will subtract 32 if user enters 0 with lowercase letter
	if (offset == 0 && input >= 'a' && input <= 'z')
	{
		newchar = input - 32;
		cout << "New character: " << newchar <<endl;
		return(0);
	}

	// This will add 32 if user enters 0 with uppercase letter
	if (offset == 0 && input >= 'A' && input <= 'Z')
	{
		newchar = input + 32;
		cout << "New character: " << newchar<<endl;
		return(0);
	}

	newchar = total;
	cout << "New character: " << newchar<<endl;


	return 0;
}