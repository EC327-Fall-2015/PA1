#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int main()
{
  srand(time(NULL));
  int a;
  a=rand()%10;
  int g;
  int d1,d2;
  cout<<"Enter your first guess: ";
  cin>>g;
  if (g==a)
  {
    cout<<"Correct! The number was: "<<a<<"!"<<endl;
  }
  else
  {
    if (a>g)
	{
	  d1=a-g;
	}  
    else
	{
	  d1=g-a;
	}
    while (g!=a)
	{
		cout<<"Enter your next guess: ";
		cin>>g;
		if (g==a)
			{break;}
		else

	  	{
			if (a>g)
			  {
				d2=a-g;
			  }  
		    	else
		 	 {
				d2=g-a;
			 }

			if (d1>d2)
			{
				cout<<"Warmer"<<endl;
			}
			else if (d1<d2)
		  	{
				cout<<"Colder"<<endl;
		  	}
			else
		  	{
				cout<<"No change"<<endl;
		  	}
		}
		d1=d2;
	}
    cout<<"Correct! The number was: "<<a<<"!"<<endl;
  }
}
