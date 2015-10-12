#include <iostream> 
#include <cmath>
#include <iomanip> 
using namespace std; 

int main ()
{	
	double a, b, c, perimeter, s, area;

	cout << "Enter the dimensions of the triangle: " << endl;
	cout <<"Side-1: ";
	cin >> a;
	cout << "Side-2: ";
	cin >> b;
	cout << "Side-3: ";
	cin >> c;
	
	perimeter = a + b + c;
	s = perimeter/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c)); 			// Heron's formula 
	
	if ((a + b > c) && (a + c > b) && (b + c > a)) // if sum of two sides is greater than third
		cout << fixed << setprecision(2) << "This triangle's area is " << area << " square-units, and its perimeter is " << perimeter << " units." << endl; 
	else 
		cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl; 

	return (0);
}
