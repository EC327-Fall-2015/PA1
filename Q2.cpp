#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
using namespace std;

int get_conv_type() {
    cout << "Celsius to Fahrenheit (enter 0)\n";
    cout << "Celsius to Kelvin (enter 1)\n";
    cout << "Fahrenheit to Celsius (enter 2)\n";
    cout << "Fahrenheit to Kelvin (enter 3)\n";
    cout << "Kelvin to Celsius (enter 4)\n";
    cout << "Kelvin to Fahrenheit (enter 5)\n";
    cout << "Conversion type: ";

    int conv_type;
    //abs(conv_type - floor(conv_type)) > 0)
    cin >> conv_type;
    while ((conv_type < 0) || 
        (conv_type > 5) ||
        cin.fail()) {

        //fail case if < 0, > 5, or not an int       
        cin.clear();
        cin.ignore(100,'\n');   //ignore last 100 characters
        cout << "Wrong input, try again: ";
        cin >> conv_type;
    }

    return conv_type;
}

float get_in_temp(int conv_type) {
    float in_temp;

    if (conv_type == 0) {
        cout << "Enter the amount in Celsius: ";
        cin >> in_temp;
        while (cin.fail()) {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(100,'\n');
            cin >> in_temp;
        }
    } else if (conv_type == 1) {
        cout << "Enter the amount in Celsius: ";
        cin >> in_temp;
        while (cin.fail()) {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(100,'\n');
            cin >> in_temp;
        }    
    } else if (conv_type == 2) {
        cout << "Enter the amount in Fahrenheit: ";
        cin  >> in_temp;
        while (cin.fail()) {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(100,'\n');
            cin >> in_temp;
        }
    } else if (conv_type == 3) {
        cout << "Enter the amount in Fahrenheit: ";
        cin >> in_temp;
        while (cin.fail()) {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(100,'\n');
            cin >> in_temp;
        }    
    } else if (conv_type == 4) {
        cout << "Enter the amount in Kelvin: ";
        cin >> in_temp;
        while (cin.fail()) {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(100,'\n');
            cin >> in_temp;
        }    
    } else {
        cout << "Enter the amount in Kelvin: ";
        cin >> in_temp;
        while (cin.fail()) {
            cout << "Wrong input, try again: ";
            cin.clear();
            cin.ignore(100,'\n');
            cin >> in_temp;
        }
    }
    
    return in_temp;
}

void out_temp(int type,float in_temp) {
    //take checked input temp and conversion type,
    //calculate output temp, and print
    float out_temp;
        
    if (type == 0) {
        cout << setprecision(3) << fixed << in_temp << " Celsius is ";
        out_temp = ((in_temp * 9.0 / 5.0) + 32.0);
        cout << setprecision(3) << fixed << out_temp << " Fahrenheit.\n";    
    } else if (type == 1) {
        cout << setprecision(3) << fixed << in_temp << " Celsius is ";
        out_temp = (in_temp + 273.15);
        cout << setprecision(3) << fixed << out_temp << " Kelvin.\n";    
    } else if (type == 2) {
        cout << setprecision(3) << fixed << in_temp << " Fahrenheit is ";
        out_temp = ((in_temp - 32.0) * 5.0 / 9.0);
        cout << setprecision(3) << fixed << out_temp << " Celsius.\n";    
    } else if (type == 3) {
        cout << setprecision(3) << fixed << in_temp << " Fahrenheit is ";
        out_temp = (((in_temp - 32.0) * 5.0 / 9.0) + 273.15);
        cout << setprecision(3) << fixed << out_temp << " Kelvin.\n";    
    } else if (type == 4) {
        cout << setprecision(3) << fixed << in_temp << " Kelvin is ";
        out_temp = (in_temp - 273.15);
        cout << setprecision(3) << fixed << out_temp << " Celsius.\n";
    } else {
        cout << setprecision(3) << fixed << in_temp << " Kelvin is ";
        out_temp = (((in_temp - 273.15) * 9.0 / 5.0) + 32.0);
        cout << setprecision(3) << fixed << out_temp << " Fahrenheit.\n";
    }
}

int main() {
    //Perform temperature unit conversion
    int conv_type = get_conv_type();
    float in_temp = get_in_temp(conv_type);
    out_temp(conv_type,in_temp);
    return 0;
}
