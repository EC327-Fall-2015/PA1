#include <iostream>
#include <cmath>
#include <stdlib.h> 
#include <time.h>
using namespace std;

int main()
{
	// Generate a random number between 1 and 500
	srand (time(NULL));
	int randomNumber = ( rand() % 500 ) + 1;

	// Instantiate other variables
	int newGuess;
	int lastGuess;
	int lastDiff;
	int newDiff;

	// Get first guesses
	cout << "Enter your first guess: ";
	cin >> lastGuess;

	// Check if first guess is not right
	if(lastGuess != randomNumber)
	{
		cout << "Enter your next guess: ";
		cin >> newGuess;

		do
		{
			// Check whether the newGuess or the lastGuess is closer to the randomNumber
			lastDiff = abs( randomNumber - lastGuess );
			newDiff  = abs( randomNumber - newGuess );

			if(newDiff == 0)
			{
				// The very first guess was right, break out of the loop
				break;
			}
			else if(lastDiff > newDiff)
			{	
				// newGuess was closer than lastGuess
				cout << "Warmer" << endl;
			}
			else if(newDiff > lastDiff)
			{
				// newGuess was farther off than lastGuess
				cout << "Colder" << endl;
			}
			else
			{
				// Values are equal
				cout << "No change" << endl;
			}

			// Reset the lastDiff variable in preparation of the next loop
			lastGuess = newGuess;

			// Let them pick a new number
			cout << "Enter your next guess: ";
			cin >> newGuess;

		} while(newGuess != randomNumber);

	}

	// Once they are out of the loop, they must have guessed the correct number
	cout << "Correct!  The number was " << randomNumber << "!" << endl;

	return 0;
}