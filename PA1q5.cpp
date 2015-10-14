#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	int rnum, guess, guess1;
	// Use srand to initialize seed based on time
	srand(time(0));
	// Get a random number less than 100
	rnum  = rand() % 1000;
	// Ask user to input
	cout << "Enter your first guess: ";
	cin >> guess;
	//Keep looping till user gets it right
	while (guess != rnum)
	{
		// Ask for a new guess
		cout << "Enter your next guess: ";
		cin >> guess1;
		// If new guess is further than old one, display Colder
		if (abs(guess1 - rnum) > abs(guess - rnum))
		{
			cout << "Colder" << endl;
		}
		// If new guess is closer than old one, display Warmer
		else if ((abs(guess1 - rnum) < abs(guess - rnum)) && (guess1 - rnum != 0))
		{
			cout << "Warmer"<< endl;
		}
		// If new guess is the same distance away as the old one,
		// display No change
		else if ((abs(guess1 - rnum) == abs(guess - rnum)) && (guess1 - rnum != 0))
		{
			cout << "No change"<< endl;
		}
		guess = guess1;
	}
	cout << "Correct! The number was " << rnum << "!" << endl;
	return 0;
}