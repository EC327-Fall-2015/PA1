#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  //Initializing variables.
	char letter;
	int offset;
	char newletter;
  //Using output statements and input statements to define letter and offset.
	cout << "Enter character: ";
	cin >> letter;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;
	//Error checking to make sure offset is > 0.
	while (offset < 0)
	{
		cout << "Invalid offset. Please choose offset greater than or equal to zero." << endl;
		cout << "Offset: " << endl;
		cin >> offset;
	}
	//Determines what case to change or to keep if number when offset equals 0 and outputs.
	if (offset == 0)
	{
	  if (isalpha(letter))
	    {
	      if (islower(letter))
		{
		  newletter = toupper(letter);
		  cout << "New character: " << newletter << endl;
		}
	      else if (isupper(letter))
		{
		  newletter = tolower(letter);
		  cout << "New character: " << newletter << endl;
		}
	    }
	  else if (isdigit(letter))
	    {
	      cout << "New character: " << letter << endl;
	    } 
	  else
	    {
	      cout<< "New character: " << letter << endl;
	    }
	}
	//The addition of the input and offset needs to be greater than 127 to get an Error.
	//Otherwise, the output is equal to the input plus the offset.
	//Outputs the answer or an error statement.

	else
	  {
	    if (letter + offset > 127 )
	      { 
		cout << "Error. Out of range." << endl;
	      }
	    else 
	      {
	         newletter = letter + offset;
	         cout << "New character: " << newletter << endl;
	      }
	  }
	return 0;	
}
