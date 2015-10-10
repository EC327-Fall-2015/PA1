#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int in_integer_1;
    int in_integer_2;

    cout << "Enter two positive integers:\n";
    cin >> in_integer_1;
    cin >> in_integer_2;

    stringstream temp_1;
    temp_1 << hex << in_integer_1;
    string hex_1 = temp_1.str();

    stringstream temp_2;
    temp_2 << hex << in_integer_2;
    string hex_2 = temp_2.str();

    int dist_counter = 0;  //count indices that don't match

    for (int a = 0; a < hex_1.length(); a++) {
        //loop through length of hex_1
        //increment if indices not equal
        if (hex_1[a] != hex_2[a]) {
            dist_counter++;
       }
    }

    cout << "Hamming distance between " << in_integer_1 << " and ";
    cout << in_integer_2 << "when numbers are in hex format is: " << dist_counter << "\n";
    return 0;
}
