#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	//declare variables to hold the randomly generated number, the guess before, the new guess, the old distance between the old guess and the generated number and the new distance.
	int numToGuess;
	int guessBefore;
	int guessNow;
	int distanceBefore;
	int distanceNow;
	//srand to force change the seed of the random number generator.
	srand(clock());
	//generates a number, under 1000 for actual game, 10 for testing and 100 for harder testing.
	numToGuess=rand()%100;
	//asks user for first guess.
	cout<<"Enter your first guess: ";
	cin>>guessBefore;
	//if the first guess is correct, say so.
	if(numToGuess==guessBefore)
	{
		cout<<"Correct! The number was "<<numToGuess<<"!";
		return 0;
	}
	//if not then calculate the distance of the old numbers
	distanceBefore=abs(numToGuess-guessBefore);
	//ask for the second guess.
	cout<<"Enter your next guess: ";
	cin>>guessNow;
	//if its correct now, then say so
	if(numToGuess==guessNow)
	{
		cout<<"Correct! The number was "<<numToGuess<<"!";
		return 0;
	}
	//if not then calculate the new distance
	distanceNow=abs(numToGuess-guessNow);
	//while loop to continue to ask for a guess until they get it right
	while(numToGuess!=guessNow)
	{
		if (distanceBefore<distanceNow)
		{
			//say colder
			cout<<"Colder"<<endl;
		}
		else if(distanceBefore>distanceNow)
		{
			cout<<"Warmer"<<endl;
		}
		else
		{
			cout<<"No Change"<<endl;
		}
		//set the variables back for a new input
		distanceBefore=distanceNow;
		guessBefore=guessNow;
		//asks for a next guess
		cout<<"Enter your next guess: ";
		cin>>guessNow;
		distanceNow=abs(numToGuess-guessNow);
	}
	//we force the user to guess until they get it right or they die, so we will eventually get here. hopefully.
	cout<<"Correct! The number was "<<numToGuess<<"!"<<endl;
	return 0;
}
