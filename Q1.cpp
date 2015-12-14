#include <iostream>
#include <cmath>
#include <iomanip>	

using namespace std;

//philyuan's first program ^_^

int main()
{
	float side_1;
	float side_2;
	float side_3;
	float sp; 				//sp = semiperimeter
	float perimeter;
	float area;
	
	//INPUT THE SIDES
	cout << "Enter the dimensions of the triangle:" << endl;
	cout << "Side-1: ";
	cin >> side_1;
	cout << "Side-2: ";
	cin >> side_2;
	cout << "Side-3: ";
	cin >> side_3;
	
	//IF LEGITIMATE TRIANGLE
	if (side_1>0 && side_2>0 && side_3>0 &&											//CHECK SIDES ARE POSITIVE
	   (side_1+side_2)>side_3 && (side_2+side_3)>side_1 && (side_1+side_3)>side_2)  //CHECK TRIANGLE INEQUALITIES
	{
		perimeter =  side_1 + side_2 + side_3;
		sp = 0.5 * (perimeter);
		
		area = sqrt( sp * (sp-side_1) * (sp-side_2) * (sp-side_3) );				//HERON'S FORMULA
		
		cout << fixed << setprecision(2);											//displays output up to 2 places after decimal point
		cout << "This triangle's area is " << area << " square-units, and its perimeter is " << perimeter << " units.";
	}
	
	//IF NOT LEGITIMATE TRIANGLE
	else
	{
		cout << "Dimensions " << side_1 << ", " << side_2 << ", " << side_3 << " do not form a triangle.";
	}
			
	return 0;
}


