#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);               //set precision to 2 decimal
	double s_one, s_two, s_three, peri;     //declare variable for sides and perimeter
	double area, s, peri_i;         //declare variable for area and s
	cout<<"Enter the dimensions of the triangle:"<<endl;  //ask for input
	cout<<"Side-1: ";
	cin>>s_one;
	cout<<"Side-2: ";
	cin>>s_two;
	cout<<"Side-3: ";
	cin>>s_three;
	if (s_one+s_two<s_three || s_one+s_three<s_two || s_two+s_three<s_one)   //if does not form a triagle, show message, then exit the program
	{	cout<<"Dimensions "<<s_one<<", "<<s_two<<", "<<s_three<<" do not form a triangle."<<endl;
		return 0;
	}
	int one=(int)s_one;     //convert doubles to ints, if it is integer, the final result should display the sum of integer instead of double, i.e. peri_i
	int two=(int)s_two;
	int three=(int)s_three;
	s=(s_one+s_two+s_three)/2;    //find out s
	area=sqrt(s*(s-s_one)*(s-s_two)*(s-s_three));  //determine area
	peri=s_one+s_two+s_three;
	peri_i=one+two+three;
	if (peri==peri_i){
		cout<<"This triangle's area is "<<area<<" square-unit and its perimeter is "<<peri_i<<" units."<<endl;
		return 0;
	}
	else if (peri!=peri_i){
		cout<<"This triangle's area is "<<area<<" square-unit and its perimeter is ";  //stdas
		cout.precision(0);
		cout<<peri<<" units."<<endl;
		return 0;
	}
}