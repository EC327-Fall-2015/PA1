#include <iostream>
#include <cmath> //sqrt function is in this library
using namespace std;
int main() {
	double side1, side2, side3; //initialize vars for sides
	cout << "Enter the dimensions of the triangle: " << endl;
	cout << "Side-1: ";
	cin >> side1;
	cout << "Side-2: ";
	cin >> side2;
	cout << "Side-3: ";
	cin >> side3;
	//heron's formula if statement with check to see if sides form a triangle
	if (side1 < side2 + side3 && side2 < side1 + side3 && side3 < side1 + side2) {
		double per = side1 + side2 + side3;
		double hper = per / 2.0;
		double area = sqrt(hper*(hper - side1)*(hper - side2)*(hper - side3));
		cout << "The triangle's area is " << area << " square-units and its perimeter is " << per << " units." << endl;
	}
	//if sides are not compatible to form a triangle
	else {
		cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle.";
	}
	return 0;
}