/*

Q5.cpp (PA1, Q5)

Warmer or Colder? (20 pts)
	- Creates a random number (answer)
	- User inputs guess
	- Computes whether new guess is warmer or colder from the 
	  last guess (|diff|)
	- Dist is same = "no change"

Name: Kiara Alberto
BUID:  U73121880
email: kikisq@bu.edu

*/


#include <iostream>
#include <ctime>	// time function
#include <cstdlib>	// srand & rand functions
using namespace std;


// Main function
int main()
{
	int secretNum, guessNum;
	
	// Initialize random seed
	srand(time(0));	// time(0) ensures seed val refreshes (pg 89)

	// Generate secretNum
	secretNum = rand() % 1001;	// secretNum between 0 & 1000
	//cout << "Secret num is " << secretNum << endl;

	// First guess
	cout << "Enter your first guess: ";
	cin >> guessNum; //firstGuess;

	if (guessNum == secretNum)
	{
		cout << "Correct!  The number was " << secretNum << "!" << endl;
	}

	else	// First guess != secret #
	{
		// Guessing loop
		do
		{
			//calc g1 & d1
			int g1 = guessNum;
			//cout << "g1 = " << g1 << endl;	
			int d1 = abs(g1 - secretNum);
			//cout << "d1 = " << d1 << endl;
			
			// Ask user to guess again
			cout << "Enter your next guess: ";
			cin >> guessNum;
		
			// Calc g2 & d2
			int g2 = guessNum;
			//cout << "g2 = " << g2 << endl;
			int d2 = abs(g2 - secretNum);
			//cout << "d2 = " << d2 << endl;
		
			if (d2 == 0)
			{
				cout << "Correct!  The number was " << secretNum << "!" << endl;
			}

			else if (d2 < d1)
			{
				cout << "Warmer" << endl;
			}
		
			else if (d2 > d1)
			{
				cout << "Colder" << endl;
			}

			else	// d2 == d1
			{
				cout << "No change" << endl;
			}
		}

		while (guessNum != secretNum);		// Keep looping until user guesses secretNum!
	}

	return 0;
}

