#include <iostream>
#include <cmath>
// random number generator was looked up on http://www.cplusplus.com/reference/cstdlib/rand/

#include <stdio.h> // for NULL
#include <stdlib.h> // for srand() and rand()
#include <time.h> // for time()

using namespace std;


int main()
{
	srand(time(NULL)); // seeds the "random" number generator depending on current time
	
	int guessMe = rand() % 500 + 1; // range of 1-500 to match samples

	int guess, prevGuess ; // declare guesses as integer variables
	
	cout << "Enter your first guess: " ;
	cin >> prevGuess ;
	
	if ( prevGuess == guessMe ) //if the first guess is right
	{
		guess = guessMe; // make the second guess right to skip the while loop below
	}
	else // if the first guess is wrong
	{
		cout << "Enter your next guess: " ; 
		cin >> guess ; // enter the second guess
	}
	

	
	while ( guess != guessMe ) // if the guess isn't correct, keep going; the loop checks if colder, warmer, or no change
	{
		if( abs(guessMe - prevGuess) < abs(guessMe - guess) ) 
		{
			cout << "Colder" << endl ;
			prevGuess = guess;
			cout << "Enter your next guess: " ;
			cin >> guess;
		}
		else if( abs(guessMe - prevGuess) > abs(guessMe - guess) )
		{	
			cout << "Warmer" << endl ;
			prevGuess = guess;
			cout << "Enter your next guess: " ;
			cin >> guess;
		}
		else if( abs(guessMe - prevGuess) == abs(guessMe - guess) )
		{	
			cout << "No change" << endl ;
			prevGuess = guess;
			cout << "Enter your next guess: " ;
			cin >> guess;
		}
	}
	
	cout << "Correct! The number was " << guessMe << "!" << endl; // when guess is equal to the answer
	
	return 0;
}