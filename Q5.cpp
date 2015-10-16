#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{

    int guess;
    int target = rand();
    int max = 100;
    target = (target % 100) + 1;
    cout << target << endl;

    cout << "Enter your first guess: ";
    cin >> guess;

    while (guess != target)
    {
        int secondGuess;
        cout << "Enter your next guess: ";
        cin >> secondGuess;
        int difference = target - guess;
        if (difference < 0)
            difference = -difference;

        int secondDifference = target - secondGuess;
        if (secondDifference = 0)
        {
            cout << "Correct! The number was " << target << "!";
            return 0;    
        }
        
        if (secondDifference < 0)
            secondDifference = -secondDifference;

        cout << "difference: " << difference;
        cout << "second difference: " << secondDifference;

        if (secondDifference > difference)
            cout << "Colder" << endl;
        else if (secondDifference < difference)
            cout << "Warmer" << endl;
        else
            cout << "No change" << endl;

        guess = secondGuess;

    }

    cout << "Correct! The number was " << target << "!";
    return 0;
}
