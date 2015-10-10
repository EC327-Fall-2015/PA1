#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main() {
    //Declare variables.
    int first_guess, next_guess_1, last_guess, secret_ans, difference, difference_1;
    
    //Create a random number, i.e, the answer.
    srand(time(NULL));
    secret_ans = rand() % 100 ;
    
    //Remove
    cout << "Answer is: " << secret_ans << endl;
    
    
    //Prompt the user to guess.
        cout << "Please enter your first guess: ";
        cin >> first_guess;
    
    //If the user gets it right, the first time.
        if (first_guess == secret_ans) {
            cout << "Correct! The number was " << first_guess << "!" << endl;
        }
    
        else {
            //Loop to keep guessing.
            while (last_guess != secret_ans) {
                
                cout << "Please enter your next guess: ";
                cin >> last_guess;
                //Show the previous guess.
                cout << "Previous guess: " << first_guess << endl;
                
                //Difference between the previous guess and the secret answer.
                difference = abs(first_guess - secret_ans);
                cout << "Difference between first guess and secret answer: " << difference << endl;
                
                // Difference between the most recent guess and the secret number.
                
                difference_1 = abs(last_guess - secret_ans);
                cout << "The difference between next guesses and secret number: " << difference_1 <<endl;
            
                if ((difference_1 > difference) && (difference_1 != 0)) {
                    first_guess = last_guess;
                    cout << "Colder" << endl;
                }
                
                else if ((difference_1 < difference) && (difference_1 != 0)) {
                    first_guess = last_guess;
                    cout << "Warmer" << endl;
                  
                }
                else if (difference == difference_1){
                    cout << "No Change" <<endl;
                }
                else if (last_guess == secret_ans) {
                    cout << "Correct! The number was " << last_guess << "!" << endl;
                }
        }
    }
       return 0;
}