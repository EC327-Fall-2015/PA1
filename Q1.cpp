#include <iostream>

#include <cmath> 									//needed for square root

using namespace std;

int main()

{
	
	float a, b, c, area, perimeter, sp;

	cout << "Enter the dimensions of the triangle:" << endl;

	cin >> a >> b >> c;
	
	if (a+b > c && a+c > b && b+c > a)				//if the sum of two sides is always greater than the third side
	{
		sp= (a+b+c)/2.0;							//semiperimeter formula
		area = (sqrt)(sp*(sp-a)*(sp-b)*(sp-c)); 	//area formula
		perimeter = 2.0*sp; 						//perimeter formula

		cout << "Side-1: " << a << endl;
		cout << "Side-2: " << b << endl;
		cout << "Side-3: " << c << endl;
		cout <<  "This triangle's area is " << area << " square-units, and its perimeter is " <<  perimeter << " units." << endl;
	}

	
	else											//if the sum of two sides is not always greater than the third side
	{
		cout << "Dimensions " << a << "," <<  b << "," << c <<  " do not form a triangle." << endl;
	}
		
}
