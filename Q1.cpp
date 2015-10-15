#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//initialize the variables
	int a=0;
	int b=1;
	int c=1;
//a should be the largest side
	while(a<=b && a<=c)
	{
		cout<<"Enter the largest side of the triangle: ";
		cin>>a;
		cout<<endl<<"Enter the second side of the triangle: ";
		cin>>b;
		cout<<endl<<"Enter the third side of the triangle: ";
		cin>>c;
	}
//make sure that the sides form a triangle
	if ((b+c)<=a)
	{
		cout<<endl<<"Dimensions"<<a<<", "<<b<<", "<<c<<" do not form a triangle"<<endl;
	}
	else if ((b+c)>a)
	{
//if sides form a triangle find perimeter
		int perimeter=a+b+c;
//find the area next using Heron's formula
		int s=(a+b+c)/2;
		int area=sqrt(s*(s-a)*(s-b)*(s-c));
//display
		cout<<endl<<"This triangle's area is "<<area<<" square-units and its perimeter is "<<perimeter<<" units."<<endl;
	}
}
