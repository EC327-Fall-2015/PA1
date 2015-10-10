#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    //Declaring variables.
    int quotient_1, quotient_2, remainder_1, remainder_2, integer_1, integer_2, counter, the_count_1, the_count_2;
    
    //Prompting the user to enter the two integers.
    cout << "Please enter two positive integers: ";
    cin >> integer_1;
    cin >> integer_2;
    
    int hex_val_1[] = {0, 0, 0, 0, 0, 0, 0, 0};
    int hex_val_2[] = {0, 0, 0, 0, 0, 0, 0, 0};
    counter = 0;
    the_count_1 = 0;
    the_count_2 = 0;
    //For integer 1.
    quotient_1 = integer_1;
    
    while (quotient_1 != 0) {
        the_count_1++;
        for (int n =7; n >= 0; n--) {
            remainder_1 = quotient_1 % 16;
            quotient_1 = quotient_1/16;
            //cout << "Quotient_1: " << quotient_1 << endl;
            //cout << "Remainder_1: " << remainder_1 <<endl;
            hex_val_1[n] = remainder_1;
                cout << hex_val_1[n] << " ";
            }
        cout << endl;

        //Need to figure out loop.
    }
    
    //For integer 2.
    quotient_2 = integer_2;
    
    while (quotient_2 != 0) {
        the_count_2++;
        for (int i =7; i >= 0; i--) {
            remainder_2 = quotient_2 % 16;
            quotient_2 = quotient_2/16;
            //cout << "Quotient_1: " << quotient_1 << endl;
            //cout << "Remainder_1: " << remainder_1 <<endl;
            hex_val_1[i] = remainder_2;
            cout << hex_val_1[i] << " ";
        }

        cout << endl;
     }
    counter = 0;
    for (int k = 0; k < 8; k++) {
        if(hex_val_1[k] != hex_val_2[k]) {
            ++counter;
        }
        else {
            counter = counter;
        }
    }
    
            
    cout << "Hamming distance between " << integer_1 << " and " << integer_2 << " when numbers are in hex format is: " << counter << "." << endl;
    
    
}