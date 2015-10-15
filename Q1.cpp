#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	cout<< "Enter the dimensions of the triangle:" << endl; //First prompt
	double a;  //Declare double type
	double b;
	double c;
		cout<< "Side-1: " ; //user input of values
		cin>> a;
		cout<< "Side-2: " ;
		cin>> b;
		cout<< "Side-3: " ;
		cin>> c;

	if (a + b > c && a + c > b && b + c > a) // check if triangle
	{
	  double s= (a+b+c)/2; //calculate s to be used in Heron's formula
		int A= (sqrt(s*(s-a)*(s-b)*(s-c)))*100; //Heron's formula to find area, multiply by 100 and cast as int to only include two more digits
		double P= a+b+c; // Perimter calculation
		double Are=A/100.0; // divide to get only two values after decimal points
		cout<< "This triangle\'s area is "<< Are <<" square-units, and its perimeter is " <<  P << " units." <<endl;

	}
	else // if triangle requirements aren't met 
	{
		cout <<"Dimensions " << a << ", "<< b << ", " << c << " do not form a triangle." << endl;
	}

















	return 0;
}
