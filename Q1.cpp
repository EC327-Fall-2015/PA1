#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double side1; //Initializing variables for user input
    double side2;
    double side3;
    cout << "Enter the dimensions of the triangle:";
    cout << "\nSide-1: "; //User inputs number for side1 (a)
    cin >> side1;
    cout << "Side-2: "; //User inputs number for side2 (b)
    cin >> side2;
    cout << "Side-3: "; //User inputs number for side3 (c)
    cin >> side3;
    
    if (side1+side2>side3 && side2+side3>side1 && side1+side3>side2) //Determines if numbers form a triangle
    {
        double area;
        double perimeter;
        double semiperimeter;
        perimeter = side1+side2+side3; //Calculates perimeter of triangle
        semiperimeter = perimeter/2; //Calculates semiperimeter of triangle for area
        //Next line calculates area using Heron's formula
        area = sqrt(semiperimeter*((semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3)));
        //Next line prints perimeter and area of triangle
        cout << "This triangle's area is " << std::fixed << std::setprecision(2) << area << " square-units and its perimeter is " << std::setprecision(2) << perimeter << " units.";
    }
    //If one of the sides is bigger than the sum of the other two sides, user is told sides don't form a triangle and program quits
    else
        cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle.";
    return 0; //Exits program
}