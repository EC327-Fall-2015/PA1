#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{

  int random = rand() % 500 +1;//limited the random number to be between 1 and 500
  int guess1 = 0;
  int guess2 = 0;
  
  cout << "Enter your first guess: ";
  cin >> guess1;
    
  while (guess1 != random && guess2 != random)//keep repeating as long as the user hasn't guessed the number in his first or later guesses
  {
	cout << "Enter your next guess: ";
	cin >> guess2;
	if (guess2 != random)//if the guessed value is incorrect, respond with warmer/colder/no change
	{
		if (abs(abs(random)-abs(guess1)) < abs(abs(random)-abs(guess2)))//finding the difference between the guesses
			{cout << "Colder\n";}
		else if (abs(abs(random)-abs(guess1)) > abs(abs(random)-abs(guess2)))
			{cout << "Warmer\n";}
		else 
			{cout << "No change\n";}
		
		guess1 = guess2;//cycle guess2 to guess1 to prepare for a new guess
		}
	}
	
	cout << "Correct! The number was " << random << "!\n";
  
  return 0;
}
