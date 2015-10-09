#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//Define variables for three sides and ask user to input values for each side.
	double side1, side2, side3;
	cout << "Enter the dimensions of the triangle:" << endl;
	
	cout << "Side-1: ";
	cin >> side1;
	cout << "Side-2: ";
	cin >> side2;
	cout << "Side-3: ";
	cin >> side3;

	// Check if sides are valid (the sum of the lengths of any two sides of a triangle should be greater than the length of the third)
	if (side1 + side2 > side3 && 
		side2 + side3 > side1 &&
		side3 + side1 > side2 ) {

		// Calculate the triangle's perimeter if valid triangle
		double perimeter = side1 + side2 + side3;
		// Use Heron's formula to calculate a triangle's area and output results
		double s = (perimeter) / 2.0;
		int area = sqrt(s * (s-side1) * (s-side2) * (s-side3)) * 100;
		// Round to two decimal places
		double decimalArea = area / 100.0;
		cout << "This triangle's area is " << decimalArea << " square-units, and its perimeter is " << perimeter <<" units." << endl;

	} else {

		// Inform user that given sides to form a triangle.
		cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
	}
	return 0;
} 