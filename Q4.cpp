//Emily Ubik
//Programming Assignment 1
//Question 4

#include <iostream>

using namespace std;

int main()
{
	char character;
	
	int offset;

	char new_character;
	
	cout << "Enter character: ";

	cin >> character;

	cout << "Offset (enter 0 to convert case): ";

	cin >> offset;

	if (offset == 0 && character >= 65 && character <= 90) 
	{
		new_character = character + 32;	

		cout << "New character: " << new_character << endl;
	}

	else if (offset == 0 && character >= 97 && character <= 122)
	{
		new_character = character - 32;

		cout << "New character: " << new_character << endl;
	}
	
	else if ( offset == 0 && character >= 0 && character < 65)
	{
		cout << "New character: " << character << endl;
	}

	else if ( offset == 0 && character > 90 && character < 97)
	{
		cout << "New character: " << character << endl;
	}

	else if ( offset == 0 && character > 122 && character <= 127)
	{
		cout << "New character: " << character << endl;
	}

	else if ( offset < 0 || offset > (127 - character)) 
	{
		cout << "Error. Out of range." << endl;
	}

	else if ( offset > 0 || offset < (127 - character))
	{
		new_character = character + offset;

		cout << "New character: " << new_character << endl;
	}
	
return 0;
}
		
