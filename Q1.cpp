#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	//variables for the sides
	double side1;
	double side2;
	double side3;

	//gets user input
	cout << "Enter the dimensions of the triangle:" << endl;
	cout << "Side-1: ";
	cin >> side1;
	cout << "Side-2: ";
	cin >> side2;
	cout << "Side-3: ";
	cin >> side3;

	//if the sides are valid, calculates perimeter and area
	if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2)
	{
		double per = side1 + side2 + side3;
		double s = per / 2;
		double area = sqrt(s*(s - side1)*(s - side2)*(s - side3)); //heron's formula

		//formats the output
		cout << "This triangle's area is " << setprecision(2) << fixed << area << " square-units, and its perimeter is ";
		cout.unsetf(ios_base::floatfield);
		cout << setprecision(10) << per << " units." << endl;
		return 0;
	}
	//if the sum of the sides don't add to greater than the third, it's not a triangle
	else
	{
		cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
		return 0;
	}

}