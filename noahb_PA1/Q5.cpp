//include the necessary header files for srand, rand, time, NULL, cin, cout, etc. 
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h> 
using namespace std;

int main ()
{
	//set the seed to the current time so that srand  will be more truly random
	srand (time(NULL));
	
	//random number between 0 and 499
	int answer = rand()% 500;

	//declare the first two guesses as integers
	int first_guess;
	int next_guess;	

	//Prompt the user for the first guess and initialize the variable first_guess with that input
	cout << "Enter your first guess: "; 
	cin >> first_guess; 

	if (first_guess == answer)
		{
			cout << "Correct!  The number was " << next_guess << "!" << endl;
			return 0;
		}

        //Prompt the user for guesses until he/she gets the answer
	while (next_guess != answer)
		{	
			cout << "Enter your next guess: ";
			cin >> next_guess;
			
			if (next_guess == answer)
				{
					cout << "Correct!  The number was " << next_guess << "!" << endl; 
					return 0;				
				}

			//If the user got farther away from the answer, print out "Colder" and guess again
			if (abs(first_guess - answer) < abs(next_guess - answer))
                		{
                        		cout << "Colder\n";

                        		//assign the current guess to first_guess so that you're not always comparing guesses to the very first guess
					first_guess = next_guess;
                		}
                       
			//If the user got closer to the answer, print out "Warmer" and guess again
        		else if (abs(first_guess - answer) > abs(next_guess - answer))
                		{
                        		cout << "Warmer\n";

                                        //assign the current guess to first_guess so that you're not always comparing guesses to the very first guess
                        		first_guess = next_guess;
                		}       
       			
			//If the user did not change in distance from the answer, print out "No change" and guess again
			else    
                        	{
					cout << "No change\n";

                                        //assign the current guess to first_guess so that you're not always comparing guesses to the very first guess
                        		first_guess = next_guess;
				}
		}
	
	return 0;
}
