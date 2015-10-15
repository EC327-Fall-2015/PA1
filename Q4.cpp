#include <iostream> 
#include <stdio.h>
#include <ctype.h> // for isupper, islower, and isalpha

using namespace std;

int main()
{
	char initial;
	int offset;
	int conv;
	char newcharacter;
	cout << "Enter character: ";
	cin >> initial;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;
	int range = 127 - int(initial);	//offset can't be larger than range
	if (offset > range)
	{
		cout << "Error. Out of range." << endl;
	}
	else if (offset == 0 and isalpha(initial))	// if offset is 0 and initial is a letter
	{
		if (isupper(initial))	//for capital letters when offset = 0
		{
			conv = int(initial) + 32;
			newcharacter = char(conv);
			cout << "New character: " << newcharacter << endl;
		}
		else		//for lowercase letters when offset =0 
		{
			conv = int(initial) - 32;
			newcharacter = char(conv);
			cout << "New character: " << newcharacter << endl;
		}
	}
	else	// for everything else
	{
		conv = int(initial) + offset;
		newcharacter = char(conv);
		cout << "New character: " << newcharacter << endl;
	}

	return 0;

}