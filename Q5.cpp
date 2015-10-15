#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int answer, guess, track_i, track_x, track_y;   //declare variables for answer and guess
	answer=rand()%100;          //get a random number as the answer
	track_i=1;              //for infinite loop
	while (track_i){        //looping till find the answer
		if (track_i==1){            //ask for the first guess, break the loop if guess correctly
			cout<<"Enter your first guess: ";
			cin>>guess;
			if (answer==guess)
				break;
			else{
				track_x=abs(answer-guess);      //keep track of the difference between answer and guess
				track_i++;
			}
		}
		if (track_i>1){         //second guess or beyond
			cout<<"Enter your next guess: ";
			cin>>guess;
			if (answer==guess)
				break;
			else if (answer!=guess){
				track_y=abs(answer-guess);  //keep track of the difference between answer and guess
				if (track_x>track_y)        //compare the difference with previous one
					cout<<"Warmer"<<endl;       //if closer to answer, say warmer, if farther, say colder; if guess correctly, break the loop
				else if (track_x<track_y)
					cout<<"Colder"<<endl;
				else if (track_x==track_y)
					cout<<"No change"<<endl;
				track_x=track_y;            //set track_x equal track_y so that y can be used to store next difference
		        }
		}
	}
	cout<<"Correct! The number was "<<answer<<"!"<<endl<<"[Program Exits]"<<endl;       //display when correctly guessing
	return 0;
}