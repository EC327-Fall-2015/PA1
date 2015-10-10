#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	//generating random integer
	srand(time(0));
	int number = rand() % 201;

	int guess1;
	int guess2;
	int diff1;
	int diff2;

	//Prompting user for initial 2 guesses
	cout << "Enter your first guess: ";
	cin >> guess1;
	cout << "Enter your next guess: ";
	cin >> guess2;
	
	//checks to see if either of the inital 2 guesses are correct
	if (guess1 == number || guess2 == number)
	{
		cout << "Correct! The number was " << guess1 << "!" <<endl;
	}

	//computing the difference between the random number and guess
	diff1 = abs(number - guess1);

	do //outputting correct indicator and looping through is guess is not correct
	{
		diff2 = abs(number - guess2);
		
		if (diff1 > diff2)
		{
			cout << "Warmer" << endl;
		}
		else if (diff1 < diff2)
		{
			cout << "Colder" << endl;
		}
		else
		{
			cout << "No change" << endl;
		}
		
		guess1 = guess2;
		diff1 = diff2;
		
		cout << "Enter your next guess: ";
		cin >> guess2;
	}while(guess2 != number);

	cout << "Correct! The number was " << guess2 << "!" << endl;

	return 0;
}

