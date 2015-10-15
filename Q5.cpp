#include <iostream>

#include <cstdlib>

#include <cmath>

using namespace std;

int main()
{
	int g1;
	cout << "Enter your first guess: "; 
	cin >> g1;
	int g2;
	cout << "Enter your second guess: ";
	cin >> g2;
	int rnum = rand() % 1000; //generates a random number from 0 to 999
	if (g1 == rnum || g2 == rnum) // if-else statment to check if the first two guesses were correct 
	  {
	    if (g1 == rnum) // if-else statement to check and print out the correct guess
	      {
		cout << "Correct!  The number was " << g1 << "!" << endl;
	      }
	    else if (g2 == rnum)
	      {
		cout << "Correct!  The number was " << g2 << "!" << endl;
	      }
	  }
	else // moves here if the first two guesses were not correct
	  {
	    while (g2 != rnum)
	      {
		if (abs(g1 - rnum) > abs(g2 - rnum)) // if-else statment to check if the guess was warmer or colder
		  {
		    g1 = g2;
		    cout << "Warmer" << endl; 
		    cout << "Enter your next guess: ";
		    cin >> g2;
		    if (g2 == rnum)
		      {
			cout << "Correct!  The number was " << g2 << "!" << endl;
		      }
		  }
		else if (abs(g1 - rnum) < abs(g2 - rnum))
		  {
		    g1 = g2;
		    cout << "Colder" << endl;
		    cout << "Enter your next guess: ";
		    cin >> g2;
		    if (g2 == rnum)
		      {
			cout << "Correct!  The number was " << g2 << "!" << endl;
		      }
		  }
		else if (abs(g1 - rnum) == abs(g2 - rnum)) // moves here if there is no change in the difference from the random number
		  {
		    g1 = g2;
		    cout << "No Change" << endl;
		    cout << "Enter your next guess: ";
		    cin >> g2;
		    if (g2 == rnum)
		      {
			cout << "Correct!  The number was " << g2 << "!" << endl;
		      }
		  }
	      } 
	  }
	return 0;
}
