#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>      // std::setprecision

int main() {

	double a;
	double b;
	double c;
	double perim;
	double area;
	double p;
	
	cout.setf(ios::fixed); // Fixed output decimal 
	cout.precision(2); // Set output digit length

	cout << "Enter the dimensions of the triangle:\n";
	cout << "Side-1: ";
	cin >> a;

	cout << "Side-2: ";
	cin >> b;
		
	cout << "Side-3: ";
	cin >> c;


	if (a + b <= c || a + c <= b || b + c <= a) //Checks if it's a triangle
	{
		cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle.\n";
		return 0;
	}
	
	if (a <= 0 || b <= 0 || c <= 0) //Checks if input values are less than or equal to 0
	{
		cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle.\n";
		return 0;
	}
	
	
	//This block of code finds the area and perimeter of triangle
	perim = a + b + c;
	p = (a + b + c) / 2.0; // half the perimeter
	area = sqrt(p*(p - a)*(p - b)*(p - c));             
	
	cout << "This triangle's area is " << area << " square-units, and its perimeter is " << perim << " units. \n";


		
	return 0;
}
