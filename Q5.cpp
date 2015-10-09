#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	//sets up the random number
	srand(time(NULL));
	int randNum = rand() % 500;

	cout << "Enter your first guess: ";
	int guess;
	cin >> guess;
	//if the first guess is correct, inform user and exit
	if (randNum == guess)
	{
		cout << "Correct! The number was " << randNum << "!" << endl;
		return 0;
	}

	//variable for second guess
	int guess2;

	while (guess != randNum)
	{
		cout << "Enter your next guess: ";
		cin >> guess2;

		//if guess 2 is the number, inform and exit
		if (guess2 == randNum)
		{
			cout << "Correct! The number was " << randNum << "!" << endl;
			return 0;
		}

		//if the difference between the first guess and random number is greater, they are getting closer
		//therefore, they are "warmer"
		else if (abs(randNum - guess) > abs(randNum - guess2))//&& abs(randNum-guess2)
		{
			guess = guess2;
			cout << "Warmer" << endl;
		}
		else if (abs(randNum - guess) < abs(randNum - guess2))
		{
			guess = guess2;
			cout << "Colder" << endl;
		}
		else
		{
			guess = guess2;
			cout << "No change" << endl;
		}
	}
	
	return 0;
}