#include <iostream>
using namespace std;

int main()
{
	int number;		//initialize variables
	int guess;
	int guess2;
	int diff;
	number=(int)rand();	//create random number
	
	cout<<"Enter your first guess: ";		//prompt for first guess
	cin>>guess;					//prompt for second guess
	
	if (guess==number)		//if statement to check if the guessed number is the random number
              {cout<<"Correct! The number was "<<number<<endl;}		//if equal print that the user was correct
	
	while(guess!=number)		//while loop: while the guessed number is not the random number
 		{cout<<"Enter your next guess: ";	//prompt for another guess
		cin>>guess2;
		if (guess2==number)			//if statement: check is the user guessed the number
			{cout<<"Correct! The number was "<<number<<endl;}	//if yes, print that the user was correct
		else if (abs (number-guess)<abs(number-guess2))		//if not, check if the difference between the new guess and the random number is bigger than the last one. 
			{cout<<"Colder"<<endl;}		//if bigger print out colder
		else if (abs (number-guess)>abs(number-guess2))  		// check if difference is smaller
			{cout<<"Warmer"<<endl;}			//if smaller print warmer
		guess=guess2;}			//reassign value to old guess
	return 0;}

