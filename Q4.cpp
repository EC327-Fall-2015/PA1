#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	char userInput;
	int offset;
	char formattedInput;
	cout << "Enter character: ";
	cin >> userInput;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;
	// acceptible range 33-126 inclusive

	bool validated;
	if(userInput + offset <= 126)
		{
			validated = true;
		}

	if (offset == 0 && validated)
	{
		if (userInput > 64 && userInput < 91)
		{
			formattedInput = userInput + 32;
		}
		else if (userInput > 96 && userInput < 123)
		{
			formattedInput = userInput - 32;
		}
		else
		{
			formattedInput = userInput;
		}	
	}
	else if (validated)
	{
		formattedInput = userInput + offset;	
	}

	string finalOutput;
	stringstream ss;
	if (validated)
	{
		ss << formattedInput;
		ss >> finalOutput;
		cout << "New character: " << finalOutput << endl;
	}
	else
	{
		cout << "Error. Out of range." << endl;
	}
	

	return 0;
}

