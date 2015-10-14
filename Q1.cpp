#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << "Enter the dimensions of the triangle: " << endl;
    float side1;
    float side2;
    float side3;
    cout << "Side-1: ";
    cin >> side1;
    cout << "Side-2: ";
    cin >> side2;
    cout << "Side-3: ";
    cin >> side3;

    if (side1+side2<=side3 || side2+side3<=side1 || side1+side3<=side2) //check if triangle is possible
    {
        cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
        return 0;
    }
    else
    {
        float s;
        float area;
        s = (side1+side2+side3)*0.5; //formula for area
        area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        cout << "This triangle's area is "  << area << " square-units, and its perimeter is " << side1+side2+side3 << " units." << endl;
        return 0;
    }
}
