#include <iostream>

#include <cctype>

using namespace std;

int main()
{
	char inp;
	cout << "Enter character: "; //input a character
	cin >> inp;
	int off;
	cout << "Offset (enter 0 to convert case): "; //input offset amount
	cin >> off;
	if (off == 0) //loop if offset amount is 0
	{
	  if (isalpha(inp)) //check for a letter of the alphabet
		{
		  if (isupper(inp)) // if-else statement to change the case depending on the current case
		    {
		      char out = tolower(inp);
		      cout << "New character: " << out << endl;
		    }
		  else
		    {
		      char out = toupper(inp);
		      cout << "New character: " << out << endl;
		    }
		}
	  else // prints out same character if input is not a letter
	    {
	      cout << "New character: " << inp << endl;
	    }
	}
	else // loop for other ASCII conversion
	  {
	    if (inp + off > 127) //to check if the new character is in range of ASCII values
	      {
		cout << "Error. Out of range." << endl;
	      }
	    else //print out new character if in range
	      {
		char out = inp + off;
		cout << "New character: " << out << endl;
	      }
	  }
	return 0;
}
