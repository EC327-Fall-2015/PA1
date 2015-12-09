#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{     
  //Outputs prompts for side 1, side 2, and side 3.
  //Relays user input to determine whether or not the 3 sides can form a triangle.

	cout << "Enter the dimensions of the triangle: " << endl;
	cout << "Side-1: ";
	double side1;
	cin >> side1;
	cout << "Side-2: ";
	double side2;
	cin >> side2;
	double side3;
	cout << "Side-3: ";
	cin >> side3;
	float area;
	float half;

	//Equations for half the perimeter and the area.
	    
	    half = (.5) * (side1 + side2 + side3);
	    area = sqrt(half * (half - side1) * (half - side2) * (half - side3));
	
	//Checking to make sure sides form triangles and that the area doesn't equal 0
	if(side1 + side2 < side3 || side1 + side3 < side2 || side2 + side3 < side1)
	  {
	   cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
	  }
        else if(area == 0)
	  {
	   cout << "Dimensions " << side1 << ", " << side2 << ", " << side3 << " do not form a triangle." << endl;
	  }
	else
	  {
	    //Calculates area and perimeter and outputs into statement.
	    half = (.5) * (side1 + side2 + side3);
	    area = sqrt(half * (half - side1) * (half - side2) * (half - side3));
	    cout << "This triangle's area is " << setprecision(5) << area << " square-units and its perimeter is " << 2 * half << " units." << endl;
	  }
	return 0;
}
