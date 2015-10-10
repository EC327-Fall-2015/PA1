#include <iostream>

using namespace std;

int main()
{
	char character;
	int asciival;
	int offset;
	int newasciival;
	char newcharacter;
	
	//Prompting user to enter a character and the desried offset
	cout << "Enter character: ";
	cin >> character;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	//Converting character to ascii equivalent
	asciival = static_cast<int>(character);

	int newoffset = 'a' - 'A'; //setting offset for changing case of letters	
	
	//Computing case change
	if (offset == 0)
	{
		if (asciival >=65 && asciival <=90) //checks to see if character is an uppercase letter
		{
			newasciival = asciival + newoffset;
			newcharacter = static_cast<char>(newasciival);
			cout << "New character: " << newcharacter << endl;
		}
		else if (asciival >=97 && asciival <=122) //checking to see if character is a lowercase letter
		{
			newasciival = asciival - newoffset;
			newcharacter = static_cast<char>(newasciival);
			cout << "New character: " << newcharacter << endl;
		}
		else
		{
			newcharacter = character;
			cout << "New character: " << newcharacter << endl;
		}
	}
	//checks to see if the character inputted plus the offset is out of range	
	else if (asciival + offset <= 126)
	{
		newasciival = asciival + offset;
		newcharacter = static_cast<char>(newasciival);
		cout << "New character: " << newcharacter << endl;
	}
	else
	{
		cout << "Error. Out of range." << endl;
	}
	
	return 0;
}
		
