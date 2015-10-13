#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Declaring the variables.
    int convert_to;
    double temp_celcius, temp_fahrenheit, temp_kelvin;
    
    //Prompt the user for the desired conversion type.
    cout << "Celcius to Fahrenheit (enter 0)" << endl;
    cout << "Celcius to Kelvin (enter 1)" << endl;
    cout << "Fahrenheit to Celcius (enter 2)" << endl;
    cout << "Fahrenheit to Kelvin (enter 3)" << endl;
    cout << "Kelvin to Celcius (enter 4)" << endl;
    cout << "Kelvin to Fahrenheit (enter 5)" << endl;
    cout << "Conversion type: ";
    cin >> convert_to;
    while ((convert_to >= 6) || (convert_to <= 0)) {
        cout << "The number you entered was not a valid conversion type." << endl;
        cout << "Conversion type: ";
        cin >> convert_to;
    }
    if (cin.fail()){
        cout << "Please enter an integer." << endl;
    }
    else {
        switch (convert_to) {
                
                //Celcius to Fahrenheit.
            case 0:
                cout << "Enter the amount in Celsius: ";
                cin >> temp_celcius;
                temp_fahrenheit = temp_celcius * (1.8 + 32);
                cout << temp_celcius << " Celcius is " << temp_fahrenheit << " Fahrenheit." << endl;
                break;
                
                //Celcius to Kelvin.
            case 1:
                cout << "Enter the amount in Celsius: ";
                cin >> temp_celcius;
                temp_kelvin = temp_celcius + 273.15;
                cout << temp_celcius << " Celsius is " << temp_kelvin << " Kelvin." << endl;
                break;
                
                //Fahrenheit to Celcius.
            case 2:
                cout << "Enter the amount in Fahrenheit: ";
                cin >> temp_fahrenheit;
                temp_celcius = ((temp_fahrenheit - 32) / 1.8);
                cout << temp_fahrenheit << " Fahrenheit is " << temp_celcius << " Celcius." << endl;
                break;
                
                //Fahrenheit to Kelvin.
            case 3:
                cout << "Enter the amount in Fahrenheit: ";
                cin >> temp_fahrenheit;
                temp_kelvin = ((temp_fahrenheit + 459.67) * (1/1.8));
                cout << temp_fahrenheit << " Fahrenheit is " << temp_kelvin << " Kelvin." << endl;
                break;
                
                //Kelvin to Celcius.
            case 4:
                cout << "Enter the amount in Kelvin: ";
                cin >> temp_kelvin;
                temp_celcius = temp_kelvin - 273.15;
                cout << temp_kelvin << " Kelvin is " << temp_celcius << " Celcius." << endl;
                break;
                
                //Kelvin to Fahrenheit.
            case 5:
                cout << "Enter the amount in Kelvin: ";
                cin >> temp_kelvin;
                temp_fahrenheit = ((temp_kelvin * 1.8) - 459.67);
                cout << temp_kelvin << " Kelvin is " << temp_fahrenheit << " Fahrenheit." << endl;
                break;
                
                //Default Case. Not required in this case.
            default:
                cout << "Please enter a valid conversion type" << endl;
                cout << "Conversion Type: ";
                cin >> convert_to;
        }

    }
}