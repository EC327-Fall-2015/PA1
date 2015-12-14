//philyuan

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int answer;							//random answer to be guessed		
	int guess_1;						//user's inputted guess storage #1
	int guess_2;						//user's inputted guess storage #2
	int diff_1;							//absolute difference: |answer-guess_1|
	int diff_2;							//absolute difference: |answer-guess_2|
	
	//GENERATE RANDOM ANSWER
	srand (time(NULL));
	answer = rand()%500+1;				//generates an integer answer in interval [1,500] for user to guess
	
	//FIRST GUESS
	cout << "Enter your first guess: ";							//input first guess
	cin >> guess_1;
	if (guess_1 == answer)										//if you're the luckiest (wo)man on earth (go buy a lottery ticket!)
	{
	  cout << "Correct!  The number was " << answer << "!" << endl;
		return 0;												//stop the main function, no need to go through while loop below
	}
	
	//SUBSEQUENT GUESSES
	while (1)													//infinite loop, breaks if guess is answer (see below if statement)
	{
		cout << "Enter your next guess: ";
		cin >> guess_2;

		//CHECK GUESS TO ANSWER
		if (guess_2 == answer)									//if correct, stop the while loop
		{
		  cout << "Correct!  The number was " << answer << "!" << endl;
		break;													
		}		
		
		//ABSOLUTE DIFFERENCE COMPARISONS	
		diff_1 = abs(answer - guess_1);							//compute absolute differences of each guess
		diff_2 = abs(answer - guess_2);

		if (diff_1 > diff_2)									//if the abs difference from previous guess is greater than the one for new guess
		{
			cout << "Warmer" << endl;							//you are closer to answer
		}
		
		else if (diff_1 < diff_2)								//if the abs difference from previous guess is lesser than the one for new guess
		{
			cout << "Colder" << endl;							//you are farther from answer
		}
		
		else if (diff_1 == diff_2)								//if the abs difference from previous guess is equal to the one for new guess
		{
			cout << "No change" << endl;						//no change
		}
		
		guess_1 = guess_2;										//moves the old guess 'up' so we can get a new guess

	}
	
	return 0;
}
	
	
	
