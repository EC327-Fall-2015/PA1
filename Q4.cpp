#include <iostream>

using namespace std;

int main()
{
  char letter;
  int offset;

  // Receive input
  cout << "Enter character: ";
  cin >> letter;
  cout << "Offset (enter 0 to convert case): ";
  cin >> offset;
  
  // Error Check
  if ((int)letter + offset > 127)
    {
      cout << "Error. Out of range." << endl;
      return 1;
    };

  // Operate on letter
  if (offset == 0)
    {
      if (letter >= 65 && letter <= 90) // Upper Case
	{
	  offset = 'a' - 'A';
	  letter = letter + offset;
	}
      else if (letter >= 97 && letter <= 122) // Lower Case
	{
	  offset = 'a' - 'A';
	  letter = letter - offset;
	}
      else // if not letter
	{
	  offset = 0;
	  letter = letter + offset;
	}
    }
  else 
    {
      letter = letter + offset;
    };
  

  // Display Results
  cout << "New character: " << letter << endl;

  return 0;
}
