#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath> 

using namespace std;

int main()
{
    //creating the random number
    srand (time(NULL));
    int randnum = rand() % 500 + 1;

    //declaring guess variables
    int guess1;
    int guessn;

    //entering first guess
    cout << "Enter your first guess: ";
    cin >> guess1;
   
    do { //comparing the distances of the guesses
    	if (guess1 == randnum)
    		break;
		cout << "Enter your next guess: ";
		cin >> guessn;
		if ( abs(randnum - guessn) < abs(randnum - guess1) ) //the most recent guess is closer
	  	  {
			cout << "Warmer" << endl;
			guess1 = guessn;
	   	  }
		else if ( abs(randnum - guessn) > abs(randnum - guess1)) // the previous guess was closer
		  {
			cout << "Colder" << endl;
			guess1 = guessn;
	  	  }
		else if ( abs(randnum - guessn) == abs(randnum - guess1)) // the guesses are equidistant
	      {
			cout << "No change" << endl;
			guess1 = guessn;
	      }
    } while(guessn != randnum); //while the guess isn't the answer

    cout << "Correct! The number was " << randnum << "!" << endl;

    return 0;
}
