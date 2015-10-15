#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main ()
{

  int s1;
  int s2;
  int s3;
  int p;
  float area;

  //using cmath::sqrt

  //Get input
  cout<<" Please enter the dimensions of the triangle.";

  cout<<"\n Side 1 : ";
  cin>>s1;
  cout<<"\n Side 2 : ";
  cin>>s2;
  cout<<"\n Side 3 : ";
  cin>>s3;
  


  //Validity check
  if ( !((s1)<(s2+s3) ^ (s2)<(s1+s3) ^ (s3)<(s1+s2)) )
  {
	cout<<"The dimensions " <<s1<<", " <<s2<<", " <<s3<<" "
	    <<"do not form a triangle.";
	return 0;
  }


  
  //Now calculate perimeter and area
  int hs = (s1+s2+s3)/2; //hs = Heron's s (the one in the formula)

  p = s1+s2+s3;
  area = sqrt(hs*(hs-s1)*(hs-s2)*(hs-s3));
  
  //And print the result
  cout<<" This triangle's area is "<<setprecision(2)<<area<<" square units"
      <<endl <<" and its perimeter is " <<p <<" units.";
  return 0;
  
}