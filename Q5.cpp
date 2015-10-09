#include <iostream>
#include <cmath> //for abs
#include <cstdlib> //for srand, rand
#include <stdio.h> //for (NULL)
#include <time.h>  //for time()

using namespace std;

int main()
{
	int guess, randonum; //guess and random number variables declared
	int distance1, distance2; //the old and new distances from new guess to number

	srand(time(NULL));  //generates a random integer every time program is executed
	randonum = rand()% 21; ///generates a random integer between 0 and 20

	cout << "Enter your first guess: ";
	cin >> guess;
	if (guess == randonum)
	{
		cout << "Correct! The number was " << randonum << "!";
		return 0;
	}
do
{
	distance1 = abs(guess - randonum);

	cout << "Enter your second guess: ";
	cin >> guess;
	distance2 = abs(guess - randonum);

	if (distance2 > distance1)	//compares if the 2nd guess is farther away from random number
	{
		cout << "Colder" << endl;
	}

	else 	
	{
		cout << "Warmer" << endl;
	}

}while(guess != randonum); //keep looping until user guesses the random number

cout << "Correct! The number was " << randonum << "!"; //Yay!!! :~)
return 0;

}
