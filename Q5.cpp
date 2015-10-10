#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int target_temp = rand() % 1001;  //rand int bw 0 and 1000
    
    int guess_1;
    int guess_2;
    cout << "Enter your first guess: ";
    cin >> guess_1;

    if (guess_1 != target_temp) {
        //if not right on first try
        cout << "Enter your next guess: ";
        cin >> guess_2;

        while (guess_2 != target_temp) {
            if (abs(target_temp - guess_2) > abs(target_temp - guess_1)) {
                cout << "Colder\n";
                cout << "Enter your next guess: ";
                guess_1 = guess_2;
                cin.clear();
                cin >> guess_2;
            } else if (abs(target_temp - guess_2) < abs(target_temp - guess_1)) {
                cout << "Hotter\n";
                cout << "Enter your next guess: ";
                guess_1 = guess_2;
                cin.clear();
                cin >> guess_2;
            } else {
                cout << "No change\n";
                cout << "Enter your next guess: ";
                guess_1 = guess_2;
                cin.clear();
                cin >> guess_2;
            }
        }
    }

    //loop exits when user guesses correctly
    cout << "Correct! The number was " << target_temp << '\n';

    return 0;
}
