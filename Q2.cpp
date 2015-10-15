#include <iostream>

void C2F();
void C2K();
void F2C();
void F2K();
void K2C();
void K2F();

int ask();
void error();
void report(double, double, std::string, std::string);
double askval(std::string);

int main() {
    int choice = ask();
    switch(choice) {
        case 0:
            C2F();
            break;
        case 1:
            C2K();
            break;
        case 2:
            F2C();
            break;
        case 3:
            F2K();
            break;
        case 4:
            K2C();
            break;
        case 5:
            K2F();
            break;
        default:
            error();
            return main();
    }
    return 0;
}

int ask() {
    std::cout << "Celsius to Fahrenheit: (enter 0)" << std::endl;
    std::cout << "Celsius to Kelvin: (enter 1)" << std::endl;
    std::cout << "Fahrenheit to Celsius: (enter 2)" << std::endl;
    std::cout << "Fahrenheit to Kelvin: (enter 3)" << std::endl;
    std::cout << "Kelvin to Celsius: (enter 4)" << std::endl;
    std::cout << "Kelvin to Fahrenheit: (enter 5)" << std::endl;
    std::cout << "Conversion choice: ";
    int a;
    try {
        std::cin >> a;
    }catch (...){//fuck da police
        error();
    }
    return a;
}

double askval(std::string type) {
    std::cout << "Enter the amount in " << type << ": ";
    double a;
    std::cin >> a;
    return a;
}

void report(double val, double orig, std::string typeInit, std::string typeFinal) {
    std::cout << orig << " " << typeInit << " is " << val << " " << typeFinal << std::endl;
}

void error() {
    std::cout << "You made an invalid choice! Try again" << std::endl;
}

void C2F() {
    double a = askval("Celsius");
    report(1.8*a + 32, a, "Celsius", "Fahrenheit");
}

void C2K() {
    double a = askval("Celsius");
    report(a+273.15, a, "Celsius", "Kelvin");
}

void F2C() {
    double a = askval("Fahrenheit");
    report((a-32)*5/9, a, "Fahrenheit", "Celsius");
}

void F2K() {
    double a = askval("Fahrenheit");
    report(((a-32)*5/9)+273.15, a, "Fahrenheit", "Kelvin");
}

void K2C() {
    double a = askval("Kelvin");
    report(a-273.15, a, "Kelvin", "Celsius");
}

void K2F() {
    double a = askval("Kelvin");
    report(((a+273.15)*1.8)+32, a, "Kelvin", "Fahrenheit");
}