#include <iostream>
#include <stdlib.h>		// srand, rand
#include <cmath>		// abs()
#include <stdio.h>      // NULL
#include <time.h>       // time

using namespace std;

int main()
{
	srand(time(NULL));						// initialize random seed
	int randnum = rand() % 1000 + 1;		// generate the random number
	int guess, olddiff, newdiff;

	cout << "Enter your first guess: ";
	cin >> guess;

	newdiff = abs(randnum - guess);

	while (guess != randnum)
	{
		cout << "Enter your next guess: ";
		cin >> guess;
		olddiff = newdiff;
		newdiff = abs(randnum - guess);
		if (newdiff == olddiff)
		{
			cout << "No change" << endl;
		}
		else if (newdiff > olddiff)
		{
			cout << "Colder" << endl;
		}
		else if (newdiff < olddiff && guess != randnum)
		{
			cout << "Warmer" << endl;
		}
	}

	cout << "Correct!  The number was " << randnum << "!" << endl;

	return 0;
}
