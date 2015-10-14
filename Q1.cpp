#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>  //For precision
using namespace std;

int main()
{
	cout << "Enter the dimensions of the triangle:" << endl;
	double side1;
	double side2; 
	double side3;
	cout << "Side-1: ";
	cin >> side1 ;
	cout << "Side-2: ";
	cin >> side2 ;
	cout << "Side-3: ";
	cin >> side3 ;
	double perimeter=0 ;
	perimeter = side1 + side2 + side3;
	double half_p = perimeter * 0.5;
	double determinant;
	determinant = (half_p * (half_p - side1) *(half_p - side2) *(half_p - side3));
	
	if ( side1 <= 0 || side2<=0 || side3<=0 || determinant <= 0)
	{
		cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
	}
	
	else
	{
		double area = 0;
		area = sqrt(determinant);
		perimeter = side1 + side2 + side3;
		cout << "The area of this triangle is "<< setprecision (3) << area << endl;
		cout << "The perimeter of this triangle is " << perimeter << endl;

	}
	return 0;

}