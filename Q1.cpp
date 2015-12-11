#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  double a, b ,c;
  cout<<"Side-1: ";
  cin>>a;
  cout<<"Side-2: ";
  cin>>b;
  cout<<"Side-3: ";
  cin>>c;
  if(a+b>c && a+c>b && b+c>a)
  {
    double p = a+b+c;
    double q = p/2;
    double area = sqrt(q*(q-a)*(q-b)*(q-c));
    cout<<"This triangle's area is "<<area<<" square-units, and its perimeter is "<<p<<" units."<<endl;
  }
  else
  {
  cout<<"Dimensions "<<a<<", "<<b<<", "<<c<<" do not form a triangle."<<endl;
  }
}
