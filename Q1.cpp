#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{

double x = 0, y = 0, z = 0; //the dimension of sides 1, 2, and 3 respectively 
double area, perm, s; //declare triangle's area, perimeter, and semiperimeter
	
		cout << "Enter the dimensions of the triangle:" <<endl;
		cout << "Side-1: ";
		cin >> x;

		cout << "Side-2: ";
		cin >> y;

		cout << "Side-3: ";
		cin >> z;

	if(x + y > z && x + z > y && z + y > x)	//checks if sides form a valid triangle
	{
		perm = x + y + z;
		s = (x + y + z) / 2.0;
		area = sqrt(s * (s - x) * (s - y) * (s - z));

		cout << fixed;
		cout << setprecision(2) << "This triangle's area is " << area << " square-units and its perimeter is " << perm << " units." << endl;
		return 0;
	}
	else 	//if sides do not form a valid triangle
	{
		cout << "Dimensions " << x <<", " << y << ", and " << z << " do not form a triangle." <<endl;
		return 0;
	}
}
