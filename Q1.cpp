#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  double a,b,c;
  double area,p;
  cout<<"enter the demensions of the triangle;"<<endl;
  cout<<"Side-1: ";
  cin>>a;
  cout<<"Side-2: ";
  cin>>b;
  cout<<"Side-3: ";
  cin>>c;
  if (a+b>c&&a+c>b&&b+c>a)
	{
		p=a+b+c;
		area=sqrt((p/2)*(p/2-a)*(p/2-b)*(p/2-c));
		cout<<"This triangle’s area is "<<area<<" square-units and its perimeter is "<<p<<" units."<<endl;
	}
  else
	{
		cout<<"Dimensions "<<a<<", "<<b<<", "<<c<<"do not form a triangle."<<endl;
	}
  return 0;
}
