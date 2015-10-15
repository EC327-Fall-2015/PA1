#include <iostream>
#include <cmath>//needed for sqrt
using namespace std;

int main()
{
  double s1 = 0;
  double s2 = 0;
  double s3 = 0;
  double sp = 0;//semiperimeter
  double a = 0;//area
  
  cout << "Enter the dimensions of the triangle: \n";
  cout << "Side 1: ";
  cin >> s1;
  cout << "Side 2: ";
  cin >> s2;
  cout << "Side 3: ";
  cin >> s3;
  
  if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) //checking that the sides can form a triangle
    {
      sp = (s1+s2+s3)/2;//finding the semiperimeter used in Heron's Formula
      
      a = sqrt(sp * (sp - s1) * (sp - s2) * (sp - s3));//Heron's formula

      cout << "This triangle's area is " << a << " square-units and its perimeter is "<< sp * 2 << " units.\n";
    }
  else
    cout << "Dimensions " << s1 << ", " << s2 << ", " << s3 << " do not form a triangle.\n";
  return 0;
}
