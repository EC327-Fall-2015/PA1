
//this program takes the three sides of a triangle and returns the area and the perimeter of the triangle, or an error if a triangle could not be formed
#include <iostream>
#include "math.h"
#include <iomanip>
using namespace std;
//include necessary libraries and header files

int main() {
	//declare variables
	int a;
	int b;
	int c;
	int s;
	double area;
	int area1;
	double per;

	//prompt user to define the three side lengths
	cout << "Enter the dimensions of the triangle:" << endl;
	cout << "Side-1: ";
		cin >> a;
		cout << "Side-2: ";
		cin >> b;
		cout << "Side-3: ";
		cin >> c;

		//if statements to determine if the triangle can be made
		if (a + b > c && b + c > a && a + c > b)
		{
			s = (a + b + c) / 2;
			area = sqrt(s*(s - a)*(s - b)*(s - c));
			area1 = area;
			per = a + b + c;
			//if statement to determine if the area is an integer or if two decimal places need to be printed
			if (area == area1)
			{
				cout << "This triangle's area is " <<  area1 << " square-units, and it's perimeter is " << per << " units." << endl;
				//the calculation for triangle area and perimeter, followed by a print out of the values
			}
			else
			{
				cout << "This triangle's area is " << fixed << setprecision(2) << area << " square-units, and it's perimeter is " << fixed << setprecision(1) << per << " units." << endl;
				//the calculation for triangle area and perimeter, followed by a print out of the values
			}
		}
		else
		{
			cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl;
			//an error message if the triangle cannot be formed
		}
		return 0;
}