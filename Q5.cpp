#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int target, guess, diff;
    
    // initialize random seed:
    srand (time(NULL));
    
    // generate random number between 1 and 400
    target = rand() % 400+1;
    
    // prompt user for the first guess
    cout<<"Enter your first guess: ";
    cin>>guess;
    diff = abs( guess - target);
    
    // output message and end program if user guesses right on the first try
    if (guess == target) {
        cout<<"Correct! The number was "<<target<<"!"<<endl;
    }
    // compare the new difference to the previous one and give hints to the user if the guess is closer to the target
    // output message and end program if user guesses right
    else{
        cout<<"Enter your next guess: ";
        cin>>guess;
        while (diff != 0) {
            if (guess == target) {
                diff = 0;
                cout<<"Correct! The number was "<<target<<"!"<<endl;
            }
            else if(abs(guess-target)>diff){
                diff = abs(guess - target);
                cout<<"Colder\nEnter your next guess: ";
                cin>>guess;
            }
            else if(abs(guess-target)<diff){
                diff = abs(guess - target);
                cout<<"Warmer\nEnter your next guess: ";
                cin>>guess;
            }
            else{
                cout<<"No change\nEnter your next guess: ";
                cin>>guess;
            }
        }
    }

    return 0;

}