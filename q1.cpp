#include <iostream>
#include <cmath>
using namespace std;


int main ()
{	int s1;			//initialize variables
	int s2;
	int s3;
	double area;
	double per;
	int x;
	double p;
	
	cout<<"Enter side 1: "<<endl;		//prompt for sides
	cin>>s1;
	cout<<"Enter side 2: "<<endl;
	cin>>s2;
	cout<<"Enter side 3: "<<endl;
	cin>>s3;

	if ((s1+s2>s3) || (s1+s3>s2) || (s2+s3>s1))		//check if sides form a triangle
			{per=s1+s2+s3;			//calculate perimet
			p=per/2; 
			area=sqrt(p*(p-s1)*(p-s2)*(p-s3));		//calculate area
			cout<<"This triangle’s area is "<<area<<" square-units and its perimeter is "<<per<<" units."<<endl;
			}		//print results
			else
		cout<<"Dimensions "<<s1<<", "<<s2<<", "<<", "<<s3<<" do not form a triangle."<<endl; //if side do not form a triangle
 return 0;
}

