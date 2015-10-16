#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	float a,b,c,perimeter,area, s, z;
	
	cout<< "Enter the dimesnions of triangle: "<<endl;
	cout<< "Side-1: ";
	cin>>a;
	cout<< "Side-2: ";
	cin>>b;
	cout<< "Side-3: ";
	cin>>c;
	perimeter=(a+b+c);
	s = perimeter/2;
	z = s*(s-a)*(s-b)*(s-c);
	area=sqrt(z);
	
	if (z<0)
		cout<< "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl;
	else
		cout<< "This triangle's area is ";
		cout<< fixed << setprecision(2) << area;
		cout<< " square-units, and its perimeter is " << perimeter << " units." << endl;
	
	return 0;
}
