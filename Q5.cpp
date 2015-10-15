/*
Write a program to help you guess an integer number. 
Initially the program should create a random number (i.e. the answer). 
Then the user should input a guess. 
After the first guess, the computer should say whether the new guess is warmer (closer) or colder (farther) from the last guess (absolute value of the difference). 
In the event that the distance is the same it should say “No change”.

Example:
Enter your first guess: <100> <enter> 
Enter your next guess: <90> <enter> Colder
Enter your next guess: <170> <enter> Colder
Enter your next guess: <110> <enter> Warmer
Enter your next guess: <120> <enter> Correct! The number was 120! [Program Exits]
*/

#include <iostream>
#include <cstdlib> //needed for srand() and rand()
#include <cmath> //needed for abs()

using namespace std;

int main()
{
        int guess, guess2;
        srand(time(0));	//different random number each time
        int number = rand() % 400; //random number won't be greater than 400
        cout << "Enter your first guess: " << endl;
        cin >> guess;


        if (guess!=number)
        {
                cout << "Enter your next guess: " << endl;
                cin >> guess2;
                do {
                        if (abs(number-guess) < abs(number-guess2))
                        {
                                cout << "Colder" << endl;
                                guess2 = guess;
                                cin >> guess2;
                        }

                        else if(abs(number-guess) > abs(number-guess2))
                        {
                                cout << "Warmer" << endl;
                                guess2 = guess;
                                cin >> guess2;
                        }

                        else if (abs(number-guess) == abs(number-guess2))
                        {
                                cout << "No change." << endl;
                                guess2 = guess;
                                cin >> guess2;
                        }

                } while (guess2!=number);
                cout << "Correct! The number was " << number << " !" << endl;
        }
        else
                cout << "Correct! The number was " << number << " !" << endl;
}