#include <iostream>
#include <vector>
#include <string>

//Q2 solution
// Made by Timothy Chong

using namespace std;

template <typename T>
void get_num(T & num) {
    num = -1;
    cin >> num;
    while (cin.fail()) {
        cout << "Wrong input, try again: ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> num;
    }
}

int main() {

    string units[6][2];
    units[0][0] = "Celsius";
    units[1][0] = "Celsius";
    units[2][0] = "Fahrenheit";
    units[3][0] = "Fahrenheit";
    units[4][0] = "Kelvin";
    units[5][0] = "Kelvin";

    units[0][1] = "Fahrenheit";
    units[1][1] = "Kelvin";
    units[2][1] = "Celsius";
    units[3][1] = "Kelvin";
    units[4][1] = "Celsius";
    units[5][1] = "Fahrenheit";

    //Printing options
    for(int i = 0; i < 6; i++ ){
        printf("%s to %s (enter %d)\n", units[i][0].c_str(), units[i][1].c_str(), i);
    }

    //Getting input for type
    cout << "Conversion type: ";
    int type = -1;
    get_num(type);
    while (type < 0 || type > 5) {
        cout << "Wrong input, try again: ";
        get_num(type);
    }

    cout << "Enter the amount in " << units[type][0] << ": ";
    double input = -1;
    get_num(input);
    double output = -1;
    switch(type){
        case 0 : output = input * 9 / 5 + 32; break;
        case 1 : output = input + 273.15; break;
        case 2 : output = ( input - 32 ) * 5 / 9; break;
        case 3 : output = (input - 32) * 5 / 9 + 273.15; break;
        case 4 : output = input - 273.15; break;
        case 5 : output = (input - 273.15) * 9 / 5 + 32; break;
        default: cout << "Fatal error" << endl; exit(0);
    }
    printf("%.3f %s is %.3f %s.\n", input, units[type][0].c_str(), output, units[type][1].c_str());
}
