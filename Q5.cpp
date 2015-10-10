#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));					//changes the seed of random number generator
	int guess1;
	int nextg;
	int randomn = rand() % 200;				//generate pseudo-random integral in the range between 0 and 199; this is the number user is guessing

	cout << "Enter your first guess: ";		//prompts user to enter first guess
	cin >> guess1;

	
	if (guess1 == randomn)				//if first guess is correct, statement below is printed
		cout << "Correct! The number was " << randomn << " !" << endl;	
	
	else
		{
			cout << "Enter your next guess: ";		//prompts user for next guess
			cin >> nextg;


		while (nextg != randomn)			//goes into a while loop while user's guesses are not correct
		{
			{
				if (abs(randomn-guess1) < abs(randomn-nextg))	//when user's first guess is closer to randomn than second guess, program prints colder
					cout << "Colder" << endl;
				else if (abs(randomn-guess1) > abs(randomn-nextg))	//when user's second guess is closer to randomn than first guess, program prints warmer
					cout << "Warmer" << endl;
				else if (abs(randomn-guess1) == abs(randomn-nextg))	//when user's second guess is the same as user's first guess, program prints no change
					cout << "No change" << endl;
			}

			guess1 = nextg;			//user's second guess becomes previous guess for next round of guessing the number
			cout << "Enter your next guess: ";
			cin >> nextg;		//nextg gets value of user's next guess
		
		}
		cout << "Correct! The number was " << randomn << " !" << endl;		//program prints out statement when entered value is same as randomn and exits
		return 0;
		}
}