#include <iostream>
#include "math.h"

using namespace std;

bool isTriangle(float a, float b, float c)
{
	if(a + b > c && c + b > a && a + c > b)
		return true;
	else
		return false;
}

float computeArea(float a, float b, float c)
{
	float s = (a + b + c) / 2;
	int area = int(sqrt(s*(s-a)*(s-b)*(s-c)) * 100);
	return area/100.0;
}

int main()
{
	cout << "Enter the dimensions of the triangle:" << endl;
	float a,b,c;
	cout << "Side-1: ";
	cin >> a;
	cout << "Side-2: ";
	cin >> b;
	cout << "Side-3: ";
	cin >> c;
	if(isTriangle(a,b,c))
	{
		float area, perimeter;
		area = computeArea(a,b,c);
		perimeter = a + b + c;
		cout << "The triangle's area is " << area << " square-units, and its perimeter is " << perimeter << " units." << endl;
	}else{
		cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl;
	}
}
