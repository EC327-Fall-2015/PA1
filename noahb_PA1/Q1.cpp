#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/* Main function: take three input side-lengths and tell the user if they can create a triangle.
If they can, tell the user the resultant area and perimeter of that triangle. */

int main()
{
	//enter three side-lengths
	double side_1, side_2, side_3;

	cout << "Enter the dimensions of the triangle:\n" << "Side-1: ";
	cin >> side_1; 	

	cout << "Side-2: ";
	cin >> side_2;

	cout << "Side-3: "; 
	cin >> side_3; 
	
	//figure out whether the sides can make a triangle
	double sum_sides_1_2, sum_sides_1_3, sum_sides_2_3;
	sum_sides_1_2 = side_1 + side_2;
	sum_sides_1_3 = side_1 + side_3;
	sum_sides_2_3 = side_2 + side_3;

	//checking whether the sum of two sides is greater than each individual side
	if (sum_sides_1_2 > side_3 && sum_sides_1_3 > side_2 && sum_sides_2_3 > side_1)
	//if it is a triangle, then determine the perimeter and area and tell the user
	{
  		//determine perimeter
                double perimeter;
                perimeter = side_1 + side_2 + side_3;
 
                //determine area using Heron's formula
                double area;
                double half_perim = perimeter / 2; 
                area = sqrt (half_perim * (half_perim - side_1) * (half_perim - side_2) * (half_perim - side_3));

                //tell the user the area and perimeter, and end program
		cout << fixed << showpoint;
                cout << setprecision(3);
                cout << "This triangle's area is " << area << " square-units, and its perimeter is " << perimeter << " units." << endl;

                return 0;
	}

	else

	{
		//if a triangle can't be made, tell user and end program
		cout << "Dimensions " << side_1 << ", " << side_2 << ", " << side_3 << " do not form a triangle." << endl;
		return 0;
	}
}
