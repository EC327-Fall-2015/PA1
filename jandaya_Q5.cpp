#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    time_t timer;
    srand(time(&timer));
    int rng = (rand() % 999 + 1);
    int guess1, guess2;
    cout << "Enter your first guess: ";
    cin >> guess1;

    if (guess1 == rng)
        cout << "Correct!  The number was " << rng;
    else
    {
        do
        {
            cout << "Enter your next guess: ";
            cin >> guess2;

            if ( abs(rng - guess2) == 0)
                break;
            else if ( abs(rng - guess2) > abs(rng - guess1) )
                cout << "Colder" <<endl;
            else if ( abs(rng - guess2) < abs(rng - guess1) )
                cout << "Warmer" <<endl;
            else if ( abs(rng - guess2) == abs(rng - guess1) )
                cout << "No change" <<endl;

            guess1 = guess2;

        } while (guess2 != rng);

        cout << "Correct!  The number was " << rng;
    }
}
