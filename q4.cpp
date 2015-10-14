#include <iostream>

using namespace std;

int main()
{
  char input_char;

  int new_char; // allows change in characters by using integer values of the ASCII characters
  
  int offset;

  int range_check; // error checks against inputs outside of ASCII range

  cout << "Enter character: ";

  cin >> input_char;

  cout << endl;

  if(input_char < 33) // figure out how to check
    cout << "error";

  while(cin.fail()) // error checks to make sure a character was inputed, fix this too
    {
      cin.clear();

      cin.ignore(100, '\n');

      cout << "Invalid input, enter a character: ";

      cin >> input_char;
    }
  cout << "Offset (enter 0 to convert case): ";

  cin >> offset;

  cout << endl;

  range_check = static_cast<int>(input_char) + offset;

  if(range_check >= 126 || range_check <= 34) // error checks to make input doesn't put change outside of ASCII range
    {
      cout << "Error. Out of range.";

      return 0;
    }

  else if(offset == 0) // deals with all cases of offset = 0
    {
      if(static_cast<int>(input_char) <= 64 && static_cast<int>(input_char) >= 33) // input is not a letter
      {
	cout << "New character: " << input_char;
     }

      else if(static_cast<int>(input_char) >= 91 && static_cast<int>(input_char) <= 96) // input is not a letter
	{
	  cout << "New character: " << input_char;
	}

      else if(static_cast<int>(input_char) >= 123 && static_cast<int>(input_char) <= 126) // input is not a letter
	{
	  cout << "New character: " << input_char;
	}
      else if(static_cast<int>(input_char) <= 90 && static_cast<int>(input_char) >= 65) // input is an uppercase letter
	{
	  new_char = static_cast<int>(input_char) + 32;

	  input_char = static_cast<char>(new_char);

	  cout << "New character: " << input_char;
	}

      else if(static_cast<int>(input_char) <= 122 && static_cast<int>(input_char) >= 97) // input is a lowercase letter
	{
	  new_char = static_cast<int>(input_char) - 32;

	  input_char = static_cast<char>(new_char);

	  cout << "New character: " << input_char;
	}

    }

  if(offset != 0)
    {
      new_char = static_cast<int>(input_char) + offset;

      input_char = static_cast<char>(new_char);

      cout << "New character: " << input_char;
    }
  

  return 0;

}
