#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

  double a;
  double b;
  double c;    // a,b and c are the three sides of a triangle
  double area;
  double perimeter;

  cout << "Enter the dimensions of the triangle: " << endl;

  cout << "Side-1: " ;
  cin >> a;   // read in one side of the triangle

  cout << "Side-2: " ;
  cin >> b;

  cout << "Side-3: " ;
  cin >> c;

  if((a+b>c) && (a+c>b) && (b+c>a)) // if the given dimensions form a triangle, then calculate and print the area and perimeter
    {
      perimeter = a+b+c;
      double p = (a + b + c)/2;
      area = sqrt(p*(p-a)*(p-b)*(p-c));
      cout << "This triangle's area is " << fixed << setprecision(2) << area << " square-units and its perimeter is " << fixed << setprecision(2) << perimeter << " units." << endl;
    }

  else {

    cout << "Dimensions " << a << ", " << b << ", " << c << " do not form a triangle." << endl;  // error message
  }

  return 0;

}
