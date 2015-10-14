#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main() {
    string convIn;
    int convType = -6; //set it outside conditions to start
    double inputNumber;
    double result;
    int tripWire = 0;

    cout << "Celsius to Fahrenheit (enter 0)" << endl;  //info
    cout << "Celsius to Kelvin (enter 1)" << endl;
    cout << "Fahrenheit to Celsius (enter 2)" << endl;
    cout << "Fahrenheit to Kelvin (enter 3)" << endl;
    cout << "Kelvin to Celsius (enter 4)" << endl;
    cout << "Kelvin to Fahrenheit (enter 5)" << endl;
    cout << "Conversion type: ";
    cin >> convIn;
    do {




       // cout << convIn.length();

        for (int aa=0; aa<convIn.length(); aa++) // check to see if convIn is chars
            if (isdigit(convIn[aa])) {
                if (convIn.length() > 1) // check to see if convIn has more than 1 digit (the numbers we want are all single digit)
                {
                    break;
                }
                convType = stoi(convIn); //IMPORTANT. COMPILE WITH -std=c++11. THIS LINE CONVERTS STRING NUMBER TO INT.
            }


        if (convType == 0) {
            cout << "Enter the amount in Celsius: ";
            cin >> inputNumber;
            result = inputNumber * 1.8 + 32;
            cout << setprecision(3) << fixed << inputNumber << " Celsius is " << result << " Fahrenheit." << endl;
            return 0;
        }
        if (convType == 1) {
            cout << "Enter the amount in Celsius: ";
            cin >> inputNumber;
            result = inputNumber + 273.150;
            cout << setprecision(3) << fixed << inputNumber << " Celsius is " << result << " Kelvin." << endl;
            return 0;
        }
        if (convType == 2) {
            cout << "Enter the amount in Fahrenheit: ";
            cin >> inputNumber;
            result = ((inputNumber - 32) * 5 / 9);
            cout << setprecision(3) << fixed << inputNumber << " Fahrenheit is " << result << " Celsius." << endl;
            return 0;
        }
        if (convType == 3) {
            cout << "Enter the amount in Fahrenheit: ";
            cin >> inputNumber;
            result = (inputNumber + 459.67) * 5 / 9;
            cout << setprecision(3) << fixed << inputNumber << " Fahrenheit is " <<  result << " Kelvin." << endl;
            return 0;
        }
        if (convType == 4) {
            cout << "Enter the amount in Kelvin: ";
            cin >> inputNumber;
            result = inputNumber - 273.150;
            cout << setprecision(3) << fixed << inputNumber << " Kelvin is "  << result << " Celsius." << endl;
            return 0;
        }
        if (convType == 5) {
            cout << "Enter the amount in Kelvin: ";
            cin >> inputNumber;
            result = (inputNumber * 9 / 5) - 459.67;
            cout << setprecision(3) << fixed << inputNumber << " Kelvin is "  << result << " Fahrenheit." << endl;
            return 0;
        }
        else
        {
            cout << "Wrong input, try again: ";
            cin >> convIn;
        }
    } while(tripWire == 0);
}
