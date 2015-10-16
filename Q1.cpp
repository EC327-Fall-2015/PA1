#include <iostream>
#include <cmath>

using namespace std;
 
 /** The programs checks whether the given dimensions forms a triangle. If the three given side-lengths constitute a triangle,
  then the program prints the area and perimeter.  Otherwise, the program prints a message saying the dimensions do not make a triangle. **/

int main()
{
	//initiate all variables to be used
	double side_a=0; //side 1
	double side_b=0; //side 2
	double side_c=0; //side 3
	double p;	//p used in Heron's formula
	double area; //area of the triangle
	double perimeter; //perimeter of the triangle

//load the 3 sides of the variables
	cout << "Enter the dimensions of the triangle" << endl;
	cout << "Side-1:" << endl;
	cin >> side_a;
	cout << "Side-2:" << endl;
	cin >> side_b;
	cout << "Side-3:" << endl;
	cin >> side_c;
//perimeter = sum of sides
	perimeter = (side_a+side_b+side_c);

//p in heron's formula is given by the perimeter/2
	p = perimeter/2;

//calculate area
// Checking sides by the Triangle Inequality Theorem. If the test fails, then error is displayed. Otherwise, the perimeter and area are printed.
	area = sqrt(p*(p-side_a)*(p-side_b)*(p-side_c));
	if (side_a+side_c<=side_b)
		{
			cout << "Dimensions " << side_a <<", " << side_b << ", " << side_c << " do not form a triangle." << endl;
		}
	else if (side_a+side_b<=side_c)
		{
			cout << "Dimensions " << side_a <<", " << side_b << ", " << side_c << " do not form a triangle." << endl;
		}
	else if (side_b+side_c<=side_a)
		{
			cout << "Dimensions " << side_a <<", " << side_b << ", " << side_c << " do not form a triangle." << endl;
		}
	else
		cout << "This triangle's area is "<< area << " square-units and its perimeter is " << perimeter << " units" << endl;


	return 0;
}
