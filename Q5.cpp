#include <iostream>
#include <time.h>
#include <math.h>
#include <cstdlib>
using namespace std;


int main()
{
	srand(time(NULL)); // Without this, rand keeps returning 41.
	int randNumber = rand() % 500 + 1; // Any number between 1 and 500

	int currentGuess;

	int previousDifference;
	int currentDifference;

	// Prepare the initial conditions in the while loop
	cout << "Enter your first guess: ";
	cin >> currentGuess;
	currentDifference = randNumber - currentGuess;
	currentDifference = abs(currentDifference);

	// The loop will break before it fails the while logic. 
	// The reason this logic exists is only for the very first iteration
	while (currentDifference != 0)
	{
		cout << "Enter your next guess: ";
		cin >> currentGuess;
		previousDifference = currentDifference;
		currentDifference = randNumber - currentGuess;
		currentDifference = abs(currentDifference);
		
		if (currentDifference == 0)
		{
		        break;
		}
		else if (currentDifference > previousDifference)
		{
			cout << "Colder\n";
		}
		else if (currentDifference < previousDifference)
		{
			cout << "Warmer\n";
		}
		else
		{
			cout << "No Change\n"; 
		}
	}
	cout << "Correct!  The number was " << randNumber << "!\n";


	char wait;
	cin >> wait;
	return 0;
}
