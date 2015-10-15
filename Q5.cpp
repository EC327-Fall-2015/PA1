#include <iostream>
#include <cstdlib> //use for absolute value function
using namespace std;

int main ()
{
	//create a random number ranging from 0 - 500 
	int answer = rand() % 501;
	int guess; //define the integer guess for user input
	cout << "Enter your first guess: "; //prompt the user for an input
	cin >> guess; //the user enters his/her input
	//enter the loop if the guess is not equal to the random number generated, the variable answer
	while (guess != answer)
	{
		int nextguess; //initialize the next guess so that the program can begin comparing values
		cout << "Enter your next guess: "; //prompt the user for an input
		cin >> nextguess; //the user enters his/her input
		//if the next guess is the answer, print the correct statement and end the program
		//used because the program was printing "Warmer" before the correct statement otherwise
		if (nextguess == answer)
		{
			cout << "Correct! The number was " <<answer << "!" << endl; //print the correct statement
			return 0; //end the program
		}
		//declare the variable guessdif, which is the absolute value of the difference between the value stored in the variable guess
		//and the variable answer (random number)
		//absolute value used because we are looking for the distance from the answer, sign is irrelevant
		int guessdif = abs(answer - guess);
		//declare the variable nextguessdif, which is the absolute value of the difference between the value stored in the variable
		//nextguess and the variable answer (random number)
		//absolute value used because we are looking for the distance from the answer, sign is irrelevant
		int nextguessdif = abs(answer - nextguess);
		//if the distance between the old guess and the answer is larger than the distance between the new guess and the answer
		//the program prints warmer and moves to the next line because the new guess is closer to the answer than it was before
		if (guessdif > nextguessdif)
		{
			cout << "Warmer\n"; //prints warmer, moves to next line
		}
		//otherwise if the distance between the old guess and the answer is smaller than the distance between the new guess and
		//the answer, the program prints colder and moves to the next line because the new guess is farther away from the answer than before
		else if (guessdif < nextguessdif)
		{
			cout << "Colder\n"; //prints colder, moves to next line 
		}
		//otherwise, if the distance between the old guess and the answer is the same as the distance between the new guess and the answer
		//the program prints no change, indicating that the distances are the same and the answer is directly in between the previous two guesses
		else
		{
			cout << "No Change\n"; //prints no change, moves to next line
		}
		//give guess the value of next guess to make "next guess" the old guess
		//do this because the user is going to put another value into next guess upon input
		//and you want next guess to be the previous answer used for comparison
		guess = nextguess;
	}
	cout << "Correct! The number was " << answer << "!" << endl; //print the correct answer once answer is equal to guess
	return 0; //end the program
}