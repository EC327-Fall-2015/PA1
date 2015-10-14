#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;



int main()
{
	cout << "This program randomly generates a number.\nGuess that number" << endl;
	int nGuess;
	
	int fGuess;
	srand(time(NULL));
	int answer = rand();

	cout << "Enter your first Guess: " << endl;
	cin >> fGuess;
	
	if (fGuess == answer)
		cout << "Correct! The number was " << answer ;
	else 
	{
		cout << "Enter  your next guess: ";
		cin >> nGuess;
		int diff;
		int diff2;
		if(fGuess > answer)
			diff = fGuess - answer;
		else
			diff = answer - fGuess;
		do
		{
				
			if (nGuess > answer)
				{
				diff2 = nGuess - answer;
				}
			if (nGuess < answer)
				{
					diff2 = answer - nGuess;
				}
			if(diff == diff2)
				{
					cout << "No Change" << endl;
					diff = diff2;
				}
			if (diff2 > diff)
				{
					cout << "Colder" << endl;
					diff = diff2;
				}
			if (diff > diff2)
				{
					cout << "Warmer" << endl;
					diff = diff2;
				}
			cout << "Enter  your next guess: ";	
			cin >> nGuess;
				
			}while (nGuess != answer);
				
		cout << "Correct! The number was " << answer ;
		}
		return 0;
	}
		