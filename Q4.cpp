// ----------------------------------------------------------------------------
// program takes character and depending on input and offset value either changes
// character or keeps it the same
// inputs: character, offset
// outputs: newcharacter
// ----------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
  // accepts user input for character to be changed and the offset
  char character;
  int offset;
  cout << "Enter character: ";
  cin >> character;
  cout << "Offset (enter 0 to convert case): ";
  cin >> offset;

  // if offset is 0, either character goes from lower to higher or vice versa
  // or if character is punctuation or number, it stays the same
  // outputs result to user
  char newcharacter;
  if (offset == 0)
  {
    if ((isdigit(character)) || (ispunct(character)))
      newcharacter = character;
    else if (isupper(character))
      newcharacter = tolower(character);
    else if (islower(character))
      newcharacter = toupper(character);

    cout << "New character: " << newcharacter << endl;
  }

  // if offset is value, adds offset to character to produce new ASCII value
  // if out of ASCII range, returns error
  else
  {
    int newcharacter = character + offset;
    if (newcharacter > 126)
      cout << "Error. Out of range." << endl;
    else
      cout << "New character: " << static_cast<char>(newcharacter) << endl;

  }
  return 0;
}

// ---------------------------------------------------------------------------
// Enter character:
// Offset (enter 0 to convert case):
// New character:
// ---------------------------------------------------------------------------
