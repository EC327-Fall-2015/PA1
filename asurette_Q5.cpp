#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
int num;

int guesscheck(int g)
{
  int guess;

  cout<<"Enter your next guess: ";
	 
  cin>>guess;

    if (guess==num)
    {

      cout<<"Correct! The number was "<<num<<"!"<<endl;

    }

    else if ((abs(num-guess))>(abs(num-g)))
    {

      cout<<"Colder"<<endl;

      guesscheck(guess);      
    }
      else if ((abs(num-guess))<(abs(num-g)))
    {

      cout<<"Warmer"<<endl;

      guesscheck(guess);
    }
      else if (guess==g)
    	{

      	cout<<"Guessing the same number multiple times in a row won't help you..."<<endl;

      guesscheck(guess);

    	}
}
int main()
{
  srand(time(0));
  num=rand() % 100+1;
  int guess;

  cout<<"Enter your first guess: ";

  cin>>guess;

    if (guess==num)
    {

      cout<<"Correct! The number was "<<num<<"!"<<endl;

    }
    else
    	{
      guesscheck(guess);
    }
}


