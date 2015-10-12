#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main()
{
    
int guess1;
int guess2; 
int result1;
int result2;
int rando;

// Generate random number using rand function
 srand(time(NULL)); // Got this from stack overflow.
 rando = rand() %200+1; // Fluctuates anywhere between 1 and 200
 cout << endl;
 cout << "For ease in grading, here is the answer: " << rando << ". Use this as a benchmark." << endl;
 cout << "Take these lines out when playing the actual game" << endl;
 cout << endl;
 //cout << rando;
 // rando = rando + 0;

cout << "Welcome, prepare to guess a number. Make your first guess. Now." << endl;

cin >> guess1;

 if (guess1 == rando) // Just in case the user somehow gets it on the first try.
{
  cout << "Wow! Nice! The answer was " << guess1 <<endl; // Program terminates
}


else 
{
  cout << "Nice, now make a second guess." << endl; // Get user second guess.
    cout << endl;
    cin >> guess2;
    
    result1 = abs(rando - guess1);  // This will judge the distance between the answer and the actual guess.
    result2 = abs(rando - guess2);


    while ((guess2 != rando) && (guess1 != rando)) // This is while the guess isn't the actual answer.
        {
    // In all of the following if else statements, result1 and result2 get swapped so that the second guess becomes
    // The first guess, and the user inputs a new second guess.

	  if (result1 > result2) // This tests it for closeness to the number
           {
            cout << "Warmer"<< endl;
	    cout << endl;
            guess1 = guess2;
            cout << "Try again, you were closer this time:" <<endl;
	    cout << endl;
            cin >> guess2;
             result1 = abs(rando - guess1);
             result2 = abs(rando - guess2);
           }
           else if (result1 < result2)
           {
            cout << "Colder" << endl;
            guess1 = guess2;
	    cout << endl;
            cout << "Try again, you were farther away this time:" << endl;
	    cout << endl;
            cin >> guess2;
             result1 = abs(rando - guess1);
             result2 = abs(rando - guess2);
           }
           else if (result1 == result2)
           {
            cout << "No change. What does that tell you?" <<endl;
	    cout << endl;
            guess1 = guess2;
            cout << "Try again. Remember what you just typed" <<endl;
	    cout << endl;
            cin >> guess2;
             result1 = abs(rando - guess1);
             result2 = abs(rando - guess2);
           }
        }   
    cout << endl;
    cout << "Great job! The answer really was " << rando <<endl;
           
}
return 0;
}
