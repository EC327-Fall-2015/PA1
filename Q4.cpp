#include <iostream>
using namespace std;

int main()
{
	//enter original character
	char input;
	cout << "Enter character: "; 
	cin >> input;

	//enter offset
	int offset;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	//variable for final answer
	char result;
	
	//makes sure offset is not out of range
	if (offset < 0 || offset > 127 || input + offset > 127)
	{
		cout << "Error. Out of range." << endl;
		return 0;
	}

	if (offset == 0)
	{	
		if(input>=65 && input <=90)//if offset is 0, changes upper to lowercase
		{
			result = input + 32;
		}

		else if (input >= 97 && input <= 122)//if offset is 0, changes lower to uppercase
		{
			result = input - 32;
		}
		else //if offset is 0 and it is a character, result is character
		{
			result = input;
		}
	}

	else //simply add the offset to the char
	{
		result = input + offset;
	}

	cout << "New character: " << result << endl;
	return 0;
}