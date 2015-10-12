#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double s;
	double area;
	double perim;
	double caseNeg;
	
	cout.precision(2);
	
	cout << "Enter the dimensions of the triangle:" << endl;
	cout << "Side-1: ";
	cin >> a;
	
	cout << "Side-2: ";
	cin >> b;
	
	cout << "Side-3: ";
	cin >> c;
	
	perim = (a + b + c);
	
	s = (perim) * (0.5);
	
	caseNeg = (s) * (s - a) * (s - b) * (s - c); // if this is negative or 0, the sides do not form a triangle
	area = sqrt( (s) * (s - a) * (s - b) * (s - c) ) ; // Heron's formula
	
	if (caseNeg == 0 || caseNeg < 0)
	{
		cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl; // if negative or 0, will not form triangle
	}
	else
	{
		cout << "This triangle's area is " << fixed << area << " square-units, and its perimeter is " << fixed << perim << " units." << endl; // if not, send triang'es area and perimeter
	}
	
	return 0;
}