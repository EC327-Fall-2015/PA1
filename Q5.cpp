#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int num = rand()%10;
  int guess;
  int a;
  int b;
  cout<<"Enter your first guess: ";
  cin>>guess;
  if(guess==num)
  {
    cout<<"Correct! The number was "<<num<<"!"<<endl;
  }
  else
  {
    if(guess>num)
    {
      a=guess-num;
    }
    else
    {
      a=num-guess;
    }
    
    while(guess != num)
    {
      cout<<"Enter your next guess: ";
      cin>>guess;
      if(guess==num)
      {
        break;
      }
      else
      {
        if(guess>num)
        {
          b=guess-num;
        }
        else
        {
          b=num-guess;
        }
        if(a>b)
        {
          cout<<"Warmer"<<endl;
        }
        else if (a<b)
        {
          cout<<"Colder"<<endl;
        }
        else
        {
          cout<<"No change"<<endl;
        }
        a=b;
      }
    }
    cout<<"Correct! The number was "<<num<<"!"<<endl;
  }
}
      
      
