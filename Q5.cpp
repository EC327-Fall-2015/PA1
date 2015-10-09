#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	//Create random number between 1 and 500
	int random = rand() % 1000 + 1;

	//Instantiate variables for two guesses
	int guess, nextGuess;

	//Ask user for initial guess
	cout << "Enter your first guess: ";
	cin >> guess;

	//Test if number was correctly guessed on first try
	if (guess == random) {
		cout << "Correct!  The number was " << random << "!" << endl;
		return 0;
	}

	do {
		//Ask user for next guess
		cout << "Enter your next guess: ";
		cin >> nextGuess;

		if (nextGuess == random) {
			//If user guessed correctly, notify user
			cout << "Correct!  The number was " << random << "!" << endl;
			return 0;
		} else if (abs(nextGuess - random) > abs(guess - random))
			//If user was farther from answer, notify
			cout << "Colder" << endl;
		else if (abs(nextGuess - random) < abs(guess - random))
			//If user was closer to answer, notify
			cout << "Warmer" << endl;
		else 
			//Notify user he/she was the same distance from answer
			cout << "No change" << endl;

		//Replace first guess with second guess and continue loop if user has not guessed correctly
		guess = nextGuess;
	} while (guess != random);

}
