#include <iostream> 
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
	int randnum; //declare variable
	srand(time(0)); //reset random counter
	randnum = rand() % 500; //generate random number
	int guess1;
	int guess2;
	int difference1;
	int difference2;
	int lastguess;
	cout << "Enter your first guess: "; //prompt user for first guess
	cin >> guess1;
	lastguess= guess1;//last guess holds guess made before to compare
	

	do //loop until guess is correct
	{
	  if (guess1 == randnum) 
		{
		  break; //if user enters correct first guess
		}	
	cout << "Enter your next guess: ";
	cin >> guess2;
	difference1= abs(lastguess-randnum); //difference between numbers
	difference2= abs(guess2-randnum);

	if (difference2 < difference1) //closer to real number
		{
			cout << "Warmer" << endl;
		}
	else if (difference2 > difference1) //farther from real number
		{
			cout << "Colder" << endl;
		}
	else //same distance away
		{
			cout <<"No change" << endl;
		}
	lastguess= guess2; //stores last guess to compare
	}
	while (guess2 != randnum);

	cout << "Correct!  The number was "<< randnum << "!" << endl; //return correct value

return 0;
}

