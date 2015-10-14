#include <iostream>
#include <math.h>		// sqrt()
#include <iomanip>		// setprecision()
#include <algorithm>	// max()

using namespace std;

int main()
{
		double side1, side2, side3, maxside;	// declares variables for the sides and the longest side
		cout << "Enter the dimensions of the triangle: " << endl << "Side-1: ";
		cin >> side1;
		cout << "Side-2: ";
		cin >> side2;
		cout << "Side-3: ";
		cin >> side3;
		maxside = max(side1, side2);	// finding the maximum side
		maxside = max(side3, maxside);	// finding the maximum side
		if (((side1 + side2 + side3) - (2 * maxside)) <= 0)	// if the sides don't form a triangle
		{
			cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
		}
		else
		{
			double semper = (side1 + side2 + side3)/2;	// always, variable for semiperimeter
			double area = sqrt(semper*(semper - side1)*(semper - side2)*(semper - side3));
			cout << "This triangle's area is " << setprecision(2) << fixed << area << " square-units, and the perimeter is ";
			std::cout.unsetf(std::ios::floatfield);
			std::cout.precision(10);
			cout << 2 * semper << " units." << endl;
		}

		return 0;
}