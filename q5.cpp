#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

  int true_number;

   // comp_guess will always last guess to avoid complicated alternation of variable values
  
  int comp_guess;

  int guess;

  // Makes sure first guess is only prompted for once  

  int c;

  //Generates a true random number so program can be used multiple times
  //on a single machine

  srand(time(0));

  true_number = rand() % 501;

  cout << true_number << endl;
  
  cout << "The range of numbers in this game are 0 to 500" << endl;
 
 
  while(guess != true_number || comp_guess != true_number)
    {
      c= c + 1;
      
      if(c == 1)
	{
	  cout << "Enter your first guess: ";

	  cin >> guess;

	  if(guess == true_number)
	    break;

	  else
	   {
	      comp_guess = guess;

	      continue;
	   }
	  
	}

      //Main section, used after first number is selected
      
	  cout << "Enter your next guess: ";

	  cin >> guess;

	  if(guess == true_number)      
	      break;
	    
	  else
	    {
	      if (abs(true_number - guess) < abs(true_number - comp_guess))
		{
		  cout << "Warmer" << endl;

		  comp_guess = guess;

		  continue;
		}

	      else if (abs(true_number - guess) > abs(true_number - comp_guess))
		{
		  cout << "Colder" << endl;

		  comp_guess = guess;

		  continue;
		}

	      //No need to change variables when there is no change in the guess
	      
	      else 
		{
		  cout << "No change" << endl;

		  continue;
		}
	    }
	      	 
    }

  cout << "Correct!  The number was " << true_number << "!";

  return 0;
}
