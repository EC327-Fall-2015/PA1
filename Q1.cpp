	
#include <iostream>
#include <math.h> 
#include <cstdlib> //used for system("pause"), not needed on lab computers
using namespace std;
 
int main()
{
 
    double side1, side2, side3;
 
    cout << "Enter the dimensions of the triangle:" << endl;
    cout << "Side-1: ";
    cin >> side1;
    cout << endl;
    cout << "Side-2: ";
    cin >> side2;
    cout << endl;
    cout << "Side-3: ";
    cin >> side3;
    cout << endl;
 
    if ( ((side1 + side2) > side3) && ((side1 + side3) > side2) && ((side2 + side3) > side1) )
    {
        double perimeter = side1 + side2 + side3;
        double semiperimeter = (side1 + side2 + side3) / 2;
        double area = sqrt(semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter - side3));
 
        cout << "The triangle's area is " << area << " square-units and its perimeter is " << perimeter << " units." << endl;
    }
    else
    {
        cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
    }
 
    // system("pause"); 
    return 0;
}
