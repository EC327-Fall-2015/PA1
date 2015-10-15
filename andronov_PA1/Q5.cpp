#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
  int usr_gs;
  int new_gs;
  int d1;
  int d2;
  int answer = rand()%100;

  cout<<"Enter your first guess: ";
  cin>>usr_gs;

  if(usr_gs == answer)
  {
	cout<<"Correct! The number was "<<answer<<"!\n";
	return 0;
  }

  
  while(usr_gs != answer)
  {
  	cout<<"Enter your next guess: ";
	cin>>new_gs;
	d1 = abs(new_gs - answer); //this is the distance of the new guess from the answer
	d2 = abs(usr_gs - answer); //this is the distance of the old guess from the answer
	usr_gs = new_gs;	  //the new guess gets put in the old guess that becomes the old guess next iteration

	if (d1<d2)
	  cout<<"Warmer"<<endl;	
	else if(d1>d2)
	  cout<<"Colder"<<endl;
	else
	  break;
  }

  cout<<"Correct! The number was "<<answer<<"!\n";

  return 0;
}
  