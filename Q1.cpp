#include <iostream>
#include <iomanip> //for the decimal places
#include <cmath> //for the square root
using namespace std;

int main() {
	double a; //side1
	double b; //side2
	double c; //side3
	cout << "Enter the dimesnisons of a triangle: " << endl
		<< "Side-1: ";
	cin >> a;
	cout << "Side-2: ";
	cin >> b;
	cout << "Side-3: ";
	cin >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a)) { //check to make sure sides can compose triangle
		double perimeter = a + b + c; //finds perimeter
		double half = perimeter / 2; //find half of perimter for Heron's formula
		double area = sqrt(half*(half - a)*(half - b)*(half - c)); //heron's formula
		cout << "This triangle's area is " << setprecision(2) << fixed << area << " square-units, and its perimeter is " << setprecision(2) << fixed << perimeter << " units."<< endl;
		return 0;
	}
	else { //if sides are not a triangle
		cout << "Dimensions " <<  a << ", " << b << ", " << c << " do not form a triangle."<< endl;
		
		return 0;
	}
}