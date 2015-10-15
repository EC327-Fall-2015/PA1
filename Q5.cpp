/*
	John Marcao
	EC327
	PA1 Q5
*/

//PPDs
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Prototype
void guessHeat(int newGuess, int oldGuess, int goalNumber);

int main(){
	int goalNumber, oldGuess, newGuess;
	srand(time(NULL)); // Set up randomness based on clock
	goalNumber = rand() % 100 + 1; // Generate a random # from 1 to 100 
	oldGuess = 0;
	newGuess = 0;
	
	//Get User Inputs
	cout << "Guess a number between 1 and 100." << endl; // I need to clarify the range so you don't guess forever
	cout << "Enter your first guess: ";
	cin >> newGuess;

	//Check if the input number is correct
	if (newGuess == goalNumber){
		cout << "Correct! The number was " << goalNumber << "!";
		return 0;
		}
		
	do{
		oldGuess = newGuess;
		// Ask for the next guess
		cout << "Enter your next guess: ";
		cin >> newGuess; // User inputs guess
		
		if (newGuess == goalNumber){
		cout << "Correct! The number was " << goalNumber << "!";
		return 0;
		}
		
		guessHeat(newGuess, oldGuess, goalNumber); // Output the heat rank
		
		//Debug aka The Cheating Code
		//Cheating is against the rules.
		//cout << "\nThe answer is " << goalNumber << endl;
		
	} while (true);
	
}

//Functions
void guessHeat(int newGuess, int oldGuess, int goalNumber){
	int newDistance = abs(newGuess - goalNumber); // How far were you before?
	int oldDistance = abs(oldGuess - goalNumber); // How far are you now?
	
	if (newDistance < oldDistance){ // If you are closer now, output warmer
		cout << "Warmer" <<endl;
	}
	else if (newDistance > oldDistance){ // If you were closer before, output colder
		cout << "Colder" << endl;
	}
	else{ 					// If your guess is not closer nor farther, say no change
		cout << "No Change" << endl;
	}
}
