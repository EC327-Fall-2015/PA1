#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Declare variables
    double side1, side2, side3, area, perimeter, s;
    
    //Prompt the user for the sides of the traingle
	cout << "Enter the dimensions of the triangle: "<< endl;
    cout << "Side-1: ";
    cin >> side1;
    cout << "Side-2: ";
    cin >> side2;
    cout << "Side-3: ";
    cin >> side3;
    
    // The sum of any two sides of a triangle must be greater than the third side.
    //Calculate the sums first.
    
    double side12 = side1 + side2;
    double side23 = side2 + side3;
    double side13 = side1 + side3;
    
    //If it is a triangle, use Heron's formula to calcutate the area and console output the results.
    if ((side12 > side3) && (side23 > side1) && (side13 > side2)) {
        perimeter = side1 + side2 + side3;
        s = perimeter/2;
        area = sqrt((s) * (s - side1) * (s - side2) * (s - side3));
        cout << "This triangle's area is " << area << " square-units and its perimeter is " << perimeter << " units." << endl;
    }
    //If the dimensions don't make a traingle then console out that the user did not enter correct dimensions.
    else {
        cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
    }
    return 0;
}
