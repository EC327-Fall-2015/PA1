

#include <iostream>
#include <cstdlib>     // to use rand() and srand()
#include <ctime>       // to use time
#include <cmath>       // to use abs()
using namespace std;

int main()
{
    srand(time(0));               // randomizes the seed for rand() to always be random order
    int guess;
    cout <<"Enter first guess: ";
    cin >> guess;
    int answer = rand() % 501;   // makes answer a random integer from 0 to 500
    int difference = abs(answer - guess); // difference becomes positive difference between answer and guess
    while (difference != 0) // while user has not guessed the answer
    {
        int prevdif = difference; // store previous difference as prevdif
        cout <<"Enter your next guess: ";
        cin >> guess;
        difference = abs(answer - guess);
        if (prevdif > difference) //warmer if new guess is closer
        {
            cout << "Warmer"<<endl;
            
        }
        else if (prevdif < difference) // colder if new guess is farther away
        {
            cout << "Colder"<<endl;
        }
        else if (prevdif == difference) // no change if new guess is same distance away as old guess
        {
            cout <<"No Change"<<endl;
        }
        
    }
    // answer has been guessed once while loop has been ended so next statement will have the answer

    cout <<"Correct! The number was "<< answer <<"!"<<endl;
    return 0;
}
