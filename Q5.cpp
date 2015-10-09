// Luke Osborne
// losborne@bu.edu
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
  int number, guess, diff1, diff2;
  
  // RNG
  number = rand() % 400;

  // Get first guess
  cout << "Enter your first guess: ";
  cin >> guess;

  // Guessing Loop
  diff1 = abs(number - guess);  
while (diff1 != 0) // haven't guessed yet
    {
      // Get next guess
      cout << "Enter your next guess: ";
      cin >> guess;
	if (guess == number)
	{
	  cout << "Correct!  The number was " << number << "!" << endl;
	  return 0;
	} 

      // Update diff2
      diff2 = abs(number - guess);

      // Colder/Warmer
      if (diff1 < diff2)
	{
	  cout << "Colder" << endl;
	}
      else if (diff2 < diff1)
	{
	  cout << "Warmer" << endl;
	}
      else
	{
	  cout << "No change" << endl;
	}
     
      // Update Diff1
      diff1 = diff2;
    }
  
  return 0;
}
