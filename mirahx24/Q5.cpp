#include <iostream>
#include <time.h>  /* time function */
#include <stdlib.h>  /* srand and abs */
using namespace std;

int main()
{
//Generate integers from 0 to 500
        srand(time(0));
        int ans = rand() % 500;
        double guess;
        cout << "Enter your first guess: ";
        cin >> guess;  //user input the guess of the random number
// compare the guessed value and the random number. If they don't equal to each other, prompt the user for guesses and compare the difference between the later guess and the previous guess (if the later guess is stil wrong) and give hint accordingly       
        double predif, latedif, guess2, ians; //variable to store the different between the guess and the ans. guess2 is the variable for the next guess
                while (guess != ans) {      //if user didn't guess right number
                        cout << "Enter your next guess: ";
                        cin >> guess2;   //second guess user entered
                         if (guess2 != ans) {   //if user guessed wrong number
                                predif = abs (guess - ans);
                                latedif = abs (guess2 - ans);
                                if (predif > latedif) {     //if user is getting closer to the right number
                                        cout << "Warmer" << endl;
                                }
                                else if (predif < latedif) {  //if user is getting farther away from the right number
                                        cout << "Colder" << endl;
                                }
                                else if (predif == latedif) {   //if the difference between two guess to the right number is the same
                                        cout << "No change" << endl;
                                }
                        }
                guess = guess2;  //moves the value of later guess to the eariler guess variable so in the next loop, user's newest guess away get compare with the last guess
                }
                cout << "Correct! The number was " << ans << "!" << endl;
return 0;
}
