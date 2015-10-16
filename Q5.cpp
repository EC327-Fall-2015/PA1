//Emily Ubik
//Programming Assignment 1
//Question 5

#include <iostream>

#include <cmath>

#include <ctime>

#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	
	int answer = rand() % 501;

	int guess;

	cout << "Enter your first guess: ";

	cin >> guess;

	int diff = abs( guess - answer);

	int guess2;

	int diff2;

if ( guess != answer)
{
  do 
  {
	cout << "Enter your next guess: ";

        cin >> guess2;

	diff2  = abs( guess2 - answer);

	if (guess2  == answer)
        {
                cout << "Correct! The number was " << answer << "!" << endl;
                return 0;
        }

	if (diff > diff2)
	{
		cout << "Warmer" << endl;
	}

	if (diff < diff2)
	{
		cout << "Colder" << endl;
	}
	
	if (diff == diff2) 
	{
		cout << "No change" << endl;
	}

     diff = diff2;
  }
     while (guess2 != answer);    
}

else
{
	cout << "Correct! The number was " << answer << "!" << endl;
}

return 0;
}			 	
