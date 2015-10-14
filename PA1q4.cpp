#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	char charin;
	char charout;
	int numin;
	// Initiate the var offset as the different between 
	// ASCII equivalents of a lower and upper case letter
	int offset = 'a'-'A';
	cout << "Enter character: ";
	cin >> charin;
	cout << "Offset (enter 0 to convert case): ";
	cin >> numin;
	// Convert the input char into its ASCII equivalent
	int asciicharin  = (int)charin;
	// If entered offset + ASCII eq. is more than 127, error dislayed
	if (asciicharin + numin > 127)
		cout << "Error. Out of range." << endl;
	// If case conversion requested (numin == 0), check whether input
	// character is upper or lower case using isfunctions
	else if (numin == 0)
	{
		if (islower(charin))
			charout = charin - offset;
		else if (isupper(charin))
			charout = charin + offset;
		else
			charout = charin;
		cout << "New character: " << charout << endl;
	}
	else
 	// Else, simply add the offset to charin.
	{
		charout = charin + numin;
		cout << "New character: " << charout << endl;
	}
	return 0;
}