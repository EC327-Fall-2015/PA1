#include <iostream>
#include <iomanip> 		// for precision function
#include <math.h> 		// for sqrt function
using namespace std;

int main() 
{
	std::cout << std :: fixed;
	std::cout << std :: setprecision(2);	//output will print to 2 decimal places
	double side1;
	double side2;
	double side3;
	cout << "Enter the dimensions of the triangle: " << endl; 
	cout << "Side-1: ";
	cin >> side1;
	cout << "Side-2: ";
	cin >> side2;
	cout << "Side-3: ";
	cin >> side3;
	double a;
	double b;
	double c; 
	if (side1 > side2 and side1 > side3) {		// finding the largest side
		c = side1;
	}
	else if (side2 > side1 and side2 > side3) {
		c = side2;
	}
	else if (side3 > side1 and side3 > side2) {
		c = side3;
	}
	else {
		c = side1;
	}
	if (side1 == c) {				//establishing new variables for the other sides
		a = side2;
		b = side3;
	}
	else if (side2 == c) {
		a = side1;
		b = side3;
	}
	else {
		a = side1;
		b = side2; 
	}
	if (a + b > c and a + c > b and b + c >a) {	//checks if triangle exists
		double area;
		double perimeter;
		double s;
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		perimeter = a + b + c;
		cout << "This triangle's area is " << area << " square-units and its perimeter is " << perimeter << " units." << endl;
	}
	else { 
		cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;		//if not a triangle
	}
	
	return 0;
}
