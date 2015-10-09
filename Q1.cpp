#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  /* User inputs 3 side lengths, program determines if sides make a triangle.
     If so, the program calculates and displays the perimeter and area. */

	// Declare variables
	double side1, side2, side3, perimeter, area;
	bool isTriangle;
	
	// Decimal Precision
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	
	// Prompt User for Inputs
	cout << "Enter the dimensions of the triangle:" << endl;
	cout << "Side-1: ";
	cin >> side1;

	cout << "Side-2: ";
	cin >> side2;

	cout << "Side-3: ";
	cin >> side3;

	// Do the sides form a triangle
	// If one side is longer than the sum of the other two, they don't
	if (side1 >= (side2 + side3)
	 || side2 >= (side1 + side3)
	 || side3 >= (side1 + side2))
		{
		isTriangle = 0;
		}
	else
		{
		isTriangle = 1;
		};	

	// Calcualte Area if they do
	double s =(side1 +side2 +side3)/2;
	area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
	
	// Calculate Perimeter
	perimeter = side1 + side2 + side3;
	
	// Print Results
	if (isTriangle)
		{
		// If it is a triangle
		cout << "This triangle's area is "; 
		cout << area << " square-units,";
		cout << " and its perimeter is ";
		cout << perimeter << " units.";
		cout << endl;
		}
	else
		{
		// Not a triangle
		cout << "Dimensions " <<  side1 << ", ";
		cout << side2 << ", " << side3 << " do not form a triangle.";
		cout << endl;
		};


	return 0;
} 

