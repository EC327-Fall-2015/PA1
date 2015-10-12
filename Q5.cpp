#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main()
{
	int randomvalue;
	int guess1;
	int guess2;
	int difference1;
	int difference2;

	srand (time(NULL));//creates random value between 0 and 500
	randomvalue = rand() % 500 + 1;

	cout<<"Enter your first guess: ";
	cin>>guess1;


	while (guess1 != randomvalue)//loop that continues until we find the correct answer
	{
		if (guess1 > randomvalue)// finds the difference between guess 1 and the random values.
		{
			difference1 = guess1 - randomvalue;
		}

		if (guess1 < randomvalue)
		{
			difference1 = randomvalue - guess1;
		}
		
		cout<<"Enter next guess: ";
		cin>>guess2;

		if (guess2 == randomvalue)//breaks loop if guess is correct
		{
			break;
		}

		if (guess2 > randomvalue)// finds the difference between guess 2 and the random values.
		{
			difference2 = guess2 - randomvalue;
		}

		if (guess2 < randomvalue)
		{
			difference2 = randomvalue - guess2;
		}


		if (difference2 == difference1)//if difference1 and 2 are the same it outputs no change.
		{
			cout<<"No change"<<endl;
		}

		else if (difference2 < difference1)//if difference 2 is smaller than difference 1 than it outputs warmer.
		{
			cout<<"Warmer"<<endl;
		}

		else if (difference2 > difference1)//if difference 2 is bigger than differnce 1 than it will output colder
		{
			cout<<"Colder"<<endl;
		}

		guess1 = guess2;//guess2 becomes the new guess 1
		
	}

	cout<<"Correct! The number was "<<randomvalue<<"!"<<endl;//outputs a congratulation and the random value

	return 0;
}