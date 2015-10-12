//Derek Kenyon
//Programming Assignment 1: Question 5
//09.26.2015

//Preprocessor directives
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <ctime>

//Namespace declaration
using namespace std;

//Main function
int main()
{
	srand(time(0)); //Records each time the program is run and ensures no pattern of randomly generated numbers is produced	
	int num = rand() % 201; //Initializes the random number with a range of 0 to 200
	//Initializes the variables to be used in the main function
	int guess1;
	int guess2;
	int diff1;
	int diff2;
	
	cout << "Enter your first guess: "; //Prompts the user for an input
	cin >> guess1;	//Stores user's input in guess1
	//The following if loop ends the program in the case of the first guess being correct
	if(guess1==num)
	{
		cout << "Correct! The number was " << num << "!" << endl;
		return 1;
	}
	
	cout << "Enter your next guess: "; //Prompts the user for a second input
	cin >> guess2; //Stores the user's input in guess2
	
	//A while loop which runs until the correct guess is made
	while(guess2!=num)
	{	
		diff1 = abs(guess1-num); //Finds the difference between guess1 and the answer
		diff2 = abs(guess2-num); //Finds the difference between guess2 and the answer

		//if loops to determine whether the second guess is better, worse, or the same
		if(diff1<diff2)
		{
			cout << "Colder" << endl;
		}
		else if(diff1>diff2)
		{
			cout << "Warmer" << endl;
		}
		else if(diff1==diff2)
		{
			cout << "No change" << endl;
		}
		
		guess1 = guess2; //Stores the value of guess2 into guess1, so a new guess2 can be initialized
		diff1 = diff2; //Stores the value of diff2 into diff1, so diff2 may be re-intialized

		cout << "Enter your next guess: "; //Prompts the user for a new guess2 value
		cin >> guess2; //Stores the user's input into guess2
	}
	cout << "Correct! The number was " << num << "!" << endl; //Outputs the answer
	return 1; //Returns an integer 1 to the main function to signal the function is complete
}
