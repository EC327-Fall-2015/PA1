#include <iostream>
using namespace std;


int main()
{
	int offset;
	unsigned char input; // Needs to be unsigned in case we go past 127.
	                     // This is because I'm using char > 127
	cout << "Enter character: ";
	cin >> input;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	if (offset == 0 && input >= 65 && input <= 90)
	{
		input += 32;
	}
	else if (offset == 0 && input >= 97 && input <= 122)
	{
		input -= 32;
	}
	else
	{
		input += offset;
	}
	
	// If char were signed, it would become negative after 127
	if(input > 127)
	{
	        cout << "Error. Out of range.";
                return 0;
	}
	
	cout << "New character: " << input;

       
	return 0;
}
