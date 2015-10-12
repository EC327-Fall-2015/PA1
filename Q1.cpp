#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double side1;
	double side2;
	double side3;
	double perimeter;
	double area;
	double semiperimeter;

	cout << "Enter the dimension of the triangle:" <<endl;
	
	cout << "Side-1: ";
	cin >> side1;

	cout << "Side-2: ";
	cin >> side2;

	cout << "Side-3: ";
	cin >> side3;

	if ((side1+side2 <= side3) || (side1+side3 <= side2) || (side2+side3 <= side1))//sees if the dimensions given form a triangle
		{
		cout << "Dimensions "<<side1<<", "<<side2<<", "<<side3<<" do not form a triangle."<<endl;
		return 0;
		}

	semiperimeter = (side1+side2+side3)/2;//calculates semiperimeter

	perimeter = side1+side2+side3;
	
	area = sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));//calculates area according to heron's formula

	cout << "This triangle's area is "<<area<<" square-units and its perimeter is "<<perimeter<<" units."<<endl;

	return 0;
}