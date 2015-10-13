#include <iostream>
#include <iomanip>
#include "math.h"
using namespace std;

int main()
{
// initialize variables of type double
    double side1;
    double side2;
    double side3;
    cout << "Enter the dimensions of the triangle" << endl; // prompt user input for triangle side values
    cout << "side-1:";
    cin >> side1;
    cout << "side-2:";
    cin >> side2;
    cout << "side-3:";
    cin >> side3;
    
    double perim;
    double p;
    perim = side1 + side2 + side3; //calculate perimeter
    p = perim/2;
    
    double  area;
    area = sqrt(p*(p - side1)*(p - side2)*(p - side3)); //calculate area using Heron's formula
//if statement to print triangle's area or not a trianlge  with precision 3
    if (area>0)
        cout << "This triangle's area is " << setprecision (3) << area << "square-units, and its perimeter is " << perim << "units." <<endl;

     else if (area <= 0)
        cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
       return 0;
}
