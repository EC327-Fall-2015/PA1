#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
#include <cmath> // for abs 
using namespace std;

int main()
{
	int answer;
	int guess1;
	int guess2;
	srand(time(0));
	answer = rand() % 100;	// gets a random number
	cout << "Enter your first guess: ";
	cin >> guess1;
	guess2 = 0;
	while (guess1 != answer and guess2 != answer) //while the guesses are not the answer
	{
		cout << "Enter your next guess: ";
		cin >> guess2;
		if ( abs(guess2 - answer) < abs(guess1 - answer)) //checks the distance from the guesses to the answer
		{
			cout << "Warmer" << endl;
		}
		else
		{
			cout << "Colder" << endl;
		}
		guess1 = guess2;	//sets the new guess to the old guess
	}
	cout << "Correct! The number was " << answer << "!" << endl;
	return 0; 
}