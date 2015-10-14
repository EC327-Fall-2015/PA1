#include <iostream>

using namespace std;

int main()
{
	char inchar;	// the character the user inputs 
	int offset;

	cout << "Enter character: ";
	cin >> inchar;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	if ((inchar + offset) > 126)	// the case if the output is outside the ascii values
	{
		cout << "Error. Out of range." << endl;
	}
	else if (offset == 0)
	{
		if (65 <= inchar && inchar <= 90)
		{
			inchar = inchar + 32;
		}
		else if (97 <= inchar && inchar <= 122)
		{
			inchar = inchar - 32;
		}
		cout << "New character: " << inchar << endl;
	}
	else
	{
		inchar = inchar + offset;
		cout << "New character: " << inchar << endl;
	}

	return 0;
}