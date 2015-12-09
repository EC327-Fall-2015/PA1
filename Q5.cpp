#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  //Declaring variables for user input, generated number, and the differences between.

	int answer;
	int guess;
	int difference;
	int difference1;
	//Generates random number between 1 and 600
	answer = (rand() % 600) + 1;
	cout << "Enter your first guess: ";
	cin >> guess;
	
	//Determines if the guess is equal to the generated number.
	//If not, goes through a number of comparisons to determine how far away the guess is.
	//Outputs either correct, colder, warmer
	if (guess == answer)
	{
		cout << "Correct! The number was " << answer << "!" << endl;
	}
	else
	{	
		do
		{
			difference = abs(answer - guess);
			cout << "Enter your next guess: ";
			cin >> guess;
			difference1 = abs(answer - guess);
			
			        if (answer == guess)
				{
					cout << "Correct! The number was " << answer << "!" << endl;
				}
			        else if (difference1 > difference)
				{ 
					cout << "Colder" << endl;
				}

				else if (difference1 < difference)
				{
					cout << "Warmer" << endl;
				}

				else if (difference1 == difference)
				{
					cout << "No change" << endl;
				}
			   
		} while (answer != guess);
	       
	  }
	return 0;
}
