#include <iostream> 
#include <cmath>
#include <iomanip> 
using namespace std;

int main()
{
	double a, b, c;
	double area;
	
	// Asks the user for dimensions of the triangle
	cout << "Enter the dimensions of the triangle: " << endl;
	cout << "Side-1: ";
	cin >> a;
	cout << "Side-2: ";
	cin >> b;
	cout << "Side-3: ";
	cin >> c;
	
	// Calculates the area of the triangle using Heron's formula
	area = 0.25*sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));
	
	// If the area is greater than 0, it is assumed that it is a valid triangle
	
	if (area > 0)
	{
		// Prints the area of the triangle and the perimeter
		cout << "This triangle's area is " << setprecision(2) << fixed << area << " square-units,";
		cout << " and its perimeter is " << setprecision(1) << fixed << a+b+c << " units." << endl;
	}
	else // If the area is either 0 or NaN, then it is assumed inputted dimensions do not form a triangle
	{ 
		cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl;
	}

	return 0;
}
