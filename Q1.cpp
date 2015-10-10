#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	//prompt user to enter dimensions of a triangle
	double side1;
	double side2;
	double side3;

	cout << "Enter the dimensions of the triangle:" << endl;
	cout << "Side-1: ";
	cin >> side1;
	cout << "Side-2: ";
	cin >> side2;
	cout << "Side-3: ";
	cin >> side3;
	
	double perimeter;
	double area;
	double s;
	//Determine whether or not the given dimenions form a triangle
	cout << fixed << setprecision(2);
	if (((side1 + side2) > side3) && ((side1 + side3) > side2)
	 && ((side2 + side3) > side1))
	{
		//calculating perimeter and area
		perimeter = side1 + side2 + side3;		
		s = perimeter / 2;
		area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
		cout << "This triangle's area is " << area
		<< " square-units, and its perimeter is " 
		<< perimeter << " units." << endl;
	}
	else	
	{
		//outputting that the dimensions do not form a triangle
		cout << "Dimensions " << side1 << ", " << side2
		<< ", " << side3 << " do not form a triangle."<< endl;
	}

	return 0;
}	
