#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;

int main()
{
	int answer = rand() % 1000;
	int firstGuess, nextGuess, loopGuess;
	int diffFirst, diffNext, diffLoop;
	bool isCorrect;

	cout << "Enter your first guess: ";
	cin >> firstGuess;
	if (firstGuess != answer)
	{
		cout << "Enter your next guess: ";
		cin >> nextGuess;
		diffFirst = abs (firstGuess - answer);
		diffNext = abs (nextGuess - answer);
		if (nextGuess != answer)
		{
			if (diffFirst > diffNext)
			{
				cout << "Warmer" << endl;
			}
			else if (diffFirst < diffNext)
			{
				cout << "Colder" << endl;
			}
			else if (diffFirst == diffNext)
			{
				cout << "No change" << endl;
			}
		}
		else if (nextGuess == answer)
		{
			isCorrect = true;
		}
	}
	else if (firstGuess == answer)
	{
		isCorrect = true;
	}


	while (firstGuess != answer && nextGuess != answer)
	{
		cout << "Enter your next guess: ";
		cin >> loopGuess;
		if (loopGuess == answer) 
		{
			break;
		}
		diffNext = abs (nextGuess - answer);
		diffLoop = abs (loopGuess - answer);
		if (diffNext > diffLoop)
		{
			cout << "Warmer" << endl;
		}
		else if (diffNext < diffLoop)
		{
			cout << "Colder" << endl;
		}
		else if (diffNext == diffLoop)
		{
			cout << "No change" << endl;
		}
		nextGuess = loopGuess;
	}
	
	isCorrect = true;

	if(isCorrect)
	{
		cout << "Correct! The number was " << answer << "!" << endl;
	}


	return 0;
}

