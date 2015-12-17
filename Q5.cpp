#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdlib.h>

using namespace std;

int main()
{
  srand(time(0));
  int number = rand()%101;
	while (true)
	  {
	    cout<<"Enter your first guess: " ;
	    int guess1;
	    cin >> guess1;
	    cout<<"Enter your next guess: ";
	    int guess2;
	    cin >> guess2;
	      if ((guess2 == number)||(guess1 == number))
	      {
		cout<<"Correct! The number was "<< number<< "!"<< endl;
	        break;
	      }
	    else 
	      {
		int diff1;
		diff1 = abs(guess1 - number);
		int diff2;
		diff2 = abs(guess2 - number);
		if (diff1 > diff2)
		  {
		    cout << "Colder" << endl;
		    continue;
		  }
		if (diff1 < diff2) 
		  {
		    cout<< "Warmer"<< endl;
		    continue;
		  }
		else
		  {
		    cout << "No change" << endl;
		    continue;
		  }
	      }
	  }
	    return 0;
	  }
	    
