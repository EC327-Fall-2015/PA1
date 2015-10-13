
//this program creates a random number and prompts the user to guess the value, returning, warmer, colder, or no change from the previous guess, until the user is able to guess the random value
#include <iostream>
#include <cstdlib>
#include "math.h"
#include "time.h"
using namespace std;
//include the necessary libraries and header files

int main()
{
	//initiate the random number generator with a seed based on the current time
	srand(time(NULL));

	//declare the variables, set the random number between 0 and 200 inclusive
	int rnd = rand() % 201;
	int g1;
	int g2;

	//prompt the user to guess a value
	cout << "Enter your first guess: ";
	cin >> g1;
	if (g1 == rnd)
	{
		cout << "Correct! The number was " << rnd << "!" << endl;
		//return a 'correct' for guessing the random number on first try
	}
	else
	{
		while (g2 != rnd)
			//continue the loop until the most recent guess matches the random number
		{
			//prompt the user for an additional guess
			cout << "Enter your next guess: ";
			cin >> g2;
			if (abs(rnd - g1) < abs(rnd - g2))
			{
				cout << "Colder" << endl;
				g1 = g2;
				//return colder if the most recent guess was further in value from the random number than the previous guess, then set the new value as the previous guess
			}
			else if (abs(rnd - g1) > abs(rnd - g2))
			{
				cout << "Warmer" << endl;
				g1 = g2;
				//return warmer if the most recent guess was closer in value to the random number than the previous guess, then set the new value as the previous guess
			}
			else if (abs(rnd - g1) == abs(rnd - g2))
			{
				cout << "No change" << endl;
				g1 = g2;
				//return 'no change' if the previous guess and most recent guess were equally as far from the random number, then set the new value as the previous guess
			}
		}
		cout << "Correct! The number was " << rnd << "!" << endl;
		//return a 'correct' when the most recent guess matches the random number
	}
	return 0;
}