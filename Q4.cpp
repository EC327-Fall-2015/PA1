#include <iostream>

using namespace std;

int main()
{
	char input;
	char output;

	cout<<"Enter character: ";
	cin>>input;

	int asciivalue = input;
	int new_asciivalue;
	int offset;

	cout<<"Offset (enter 0 to convert case): ";
	cin>>offset;

	if (offset == 0)
	{
		if (((asciivalue >= 65) & (asciivalue <= 90)))//tests to see if value is a capital letter, then converts case
		{
			new_asciivalue = asciivalue + 32;
			output = new_asciivalue;
			cout<<"New character: "<<output<<endl;
		}
		else if (((asciivalue >= 97) & (asciivalue <= 122)))//test to see if value is a non-capital letter, then converts case
		{
			new_asciivalue = asciivalue - 32;
			output = new_asciivalue;
			cout<<"New character: "<<output<<endl;
		}
		else//outputs the input for everything else
		{
			output = asciivalue;
			cout<<"New character: "<<output<<endl;
		}
	}
	
	else
	{
		int offset_with_value = asciivalue + offset;
		
		if (offset_with_value > 126)//tests to see if out of range
		{
			cout<<"Error. Out of range."<<endl;
		}

		else
		{
			output = offset_with_value;
			cout<<"New character: "<<output<<endl;
		}
			
	}

	return 0;
}