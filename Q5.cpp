//Q5
//Warmer or Colder?

#include <iostream>
#include <cmath> 		//For abs
#include <cstdlib> 		//For srand and rand
#include <ctime> 		//For time for srand


using namespace std;

//////////////////////
//		Main 		//
//////////////////////

int main()
{
	srand(time(NULL));								//Sets seed to current clock time to be used for rand.
	int answer = rand() % 200 + 1;					//Produces random number.
	int guess, lastGuess;

	cout << "Enter your first guess: ";
	cin >> guess;									//Take user input for first guess

	do
	{												//Until user guesses answer, they will keep putting in numbers.	
		lastGuess = guess;
		cout << "Enter your next guess: ";
		cin >> guess;

		float diffLast = lastGuess - answer;		//Error: call of overloaded 'abs(int&)' is ambiguous
		float diffNew = guess - answer;				//abs() takes doubles, floats, or long doubles, so I had to switch the data type.

		if (guess == answer)						//First check if answer is right.
		{
			cout << "Correct! The number was " << answer << "!" << endl;
		}
		else if (abs(diffLast) > abs(diffNew))		//Then check if warmer or colder
		{
			cout << "Warmer" << endl;
		}
		else if (abs(diffLast) < abs(diffNew))
		{
			cout << "Colder" << endl;
		}
		else										//If none of the above, no change in distance.
		{
			cout << "No change" << endl;
		}


	} while (guess != answer);						//Loop ends once answer has been guessed.

	return 0;										//main needs to return an int.
}