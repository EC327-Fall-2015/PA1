#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
	{
	cout<<"Enter your first guess: ";
	//initialize variables
	int mynum=rand() % 100;
	int guess;
	int guess2;
	int guessdif;
	int guessdif2;
	//first guess
	cin>>guess;
	//if first guess is correct display Correct
	if (guess==mynum)
		{
		cout<<"Correct! The number was "<<mynum<<" !"<<endl; 
		}
	//if first guess is incorrect keep guessing until you reach the correct number
	while (guess!=mynum)
		{
		cout<<"Enter your next guess: ";
		cin>>guess2;
		//find the differences between first and second guess
		guessdif=abs(mynum-guess);
		guessdif2=abs(mynum-guess2);
		if ((guessdif2!=0) && guessdif>guessdif2)
			//if second guess is closer display warmer
			{
			cout<<endl<<"warmer"<<endl;
			}
		//if second guess is farther display colder
		else if ((guessdif2!=0) && (guessdif<guessdif2))
			{
			cout<<endl<<"colder"<<endl;
			}
		else if (guessdif2==0)
			{
			cout<<"Correct! The number was "<<mynum<<" !"<<endl;
			}
		//move guess 2 to guess 1 and guess again
		guess=guess2;
		}		
}
