#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    //generate random number
    double g1, g2, num;
    num = rand();
    //TEST CODE: cout << num << endl;

    //have user guess number
    cout << "Enter your first guess: ";
    cin >> g1;

    if (g1 == num) //if first guess is correct
    {
        cout << "Correct! The number was " << num << "!" << endl;
        return 0;
    }

    while (true) //loop
    {
        if (g1 != num) //if second guess isn't equal to number
        {
            cout << "Enter your next guess: ";
            cin >> g2;

            if (abs(g2-num) == 0) //difference between previous guess and num is zero aka guess is correct
            {
                cout << "Correct! The number was " << num << "!" << endl;
                return 0;
            }

            if (abs(g2-num) <= abs(g1-num)) //difference between g2 and num is smaller than g1 and num difference; warmer
            {
                //DEBUG TEST: int a = abs(g2-num);
                //DEBUG TEST: int b = abs(g1-num);
                cout << "Warmer" << endl;
                continue;

            }

            if (abs(g2-num) >= abs(g1-num)) //difference between g2 and num is bigger than g1 and num difference; colder
            {
                cout << "Colder" << endl;
                continue;

            }

            if (abs(g2-num) == abs(g1-num)) //difference between g2 and num is equal to g1 and num difference; no change
            {
                cout << "No change" << endl;
                continue;
            }

        }
    }

    cout << "Correct! The number was " << num << "!" << endl;

    return 0;
}
