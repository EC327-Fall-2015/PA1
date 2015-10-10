#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    char in_char;
    cout << "Enter characer: ";
    cin >> in_char;

    int offset;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;

    if (((int) in_char + offset) > 127) {
        cout << "Error. Out of range.\n";
    } else if (offset == 0) {
        if (isupper(in_char)) {  //if is lower case letter
            int begin = (int) in_char;
            int out = begin + 32;  //move 32 ascii values up
            char out_char = (char) out;
            cout << "New character: " << out_char << '\n';
        } else if (islower(in_char)) {  //if is lower case letter
            int begin = (int) in_char;
            int out = begin - 32;  //move 32 ascii values down
            char out_char = (char) out;
            cout << "New character: " << out_char << '\n';
        }
    } else {
        int begin = (int) in_char;
        int out = begin + offset;
        char out_char = (char) out;
        cout << "New character: " << out_char << '\n';
    }
    
    return 0;
}
