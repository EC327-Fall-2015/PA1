#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    srand (time(NULL));
    int rand (void);                //get randaom number
    int v1 = rand() % 100;
    //int v1 = 154;
    int guess1;
    int guess2;
    cout << "Enter your first guess: ";
    cin >> guess1;
    if (v1 != guess1)
    {
        do {
        cout << "Enter your next guess: ";
        cin >> guess2;


            if (guess2==v1) //check if correct
            {
                cout << "Correct!  The number was " << v1 << "!" << endl;
                return 0;
            }
            if (abs(guess2 - v1) == abs(guess1 - v1)) {
                cout << "No change" << endl;
                guess1 = guess2;
            }
            if (abs(guess1 - v1) > abs(guess2 - v1)) {
                cout << "Warmer" << endl;
                guess1 = guess2;
            }
            if (abs(guess2 - v1) > abs(guess1 - v1)) {
                cout << "Colder" << endl;
                guess1 = guess2;
            }


        } while(guess2 != v1);
        }
    else
    {
        cout << "Correct!  The number was " << v1 << "!" << endl; //There is an extra space in the sample output after "Correct!"....
    }

    return 0;
}
