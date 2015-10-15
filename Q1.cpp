#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()
{
	double a;
	cout << "Enter the dimensions of a triangle: " << endl; // receive dimension of triangle from user
	cout << "Side-1: ";
	cin >> a;
	double b;
	cout << "Side-2: ";
	cin >> b;
	double c;
	cout << "Side-3: ";
	cin >> c;

	if ((a + b <= c) || (b + c <= a) || (c + a <= b)) // checking if the inputs can form a triangle 
	{
		cout << "Dimensions " << a << ", " <<  b << ", " << c <<" do not form a triangle." << endl;
	}
	else
	{
	  double perimeter = a + b + c; // performing calculations to find perimeter and area
	  double s = perimeter / 2;
	  double area = sqrt((s*(s - a)*(s - b)*(s - c)));
	  if (area < 1) // setting precision to 2 if area is less than 1
	    {
	      cout << "The triangle's area is " << setprecision(2) <<  area << " square units, and its perimeter is " << perimeter << " units." << endl;
	    }
	  else // setting precision to 3 if area is greater than 1
	    {
	      cout << "The triangle's area is " << setprecision(3) <<  area << " square units, and its perimeter is " << perimeter << " units." << endl;
	    }
	}
	return 0;
}
