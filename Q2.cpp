#include<iostream>
using namespace std;
int main()
{
  string a;
  double tmp, cvt;
  cout<<"Celsius to Fahrenheit (enter 0)"<<endl;  
  cout<<"Celsius to Kelvin (enter 1)"<<endl;
  cout<<"Fahrenheit to Celsius (enter 2)"<<endl;
  cout<<"Fahrenheit to Kelvin (enter 3)"<<endl;
  cout<<"Kelvin to Celsius (enter 4)"<<endl;
  cout<<"Kelvin to Fahrenheit (enter 5)"<<endl;
  cin>>a;

  while (a!="0"&&a!="1"&&a!="2"&&a!="3"&&a!="4"&&a!="5")
  {
    cout<<"Wrong input, try again:";
    cin>>a;
  }
  


  if (a==“0”)
    {
      cout<<"Enter the amount in Celsius: ";
      cin>>tmp;
      cvt=tmp*1.5+32;
      cout<<tmp<<" Celsius is "<<cvt<<" Fahrenheit."<<endl;
    }
  else if (a==“1”)
    {
      cout<<"Enter the amount in Celsius: ";
      cin>>tmp;
      cvt=tmp+273.15;
      cout<<tmp<<" Celsius is "<<cvt<<" Kelvin."<<endl;
    }
  else if (a==“2”)
    {
      cout<<"Enter the amount in Fahrenheit: ";
      cin>>tmp;
      cvt=(tmp-32)/1.8;
      cout<<tmp<<" Fahrenheit is "<<cvt<<" Celsius."<<endl;
    }
  else if (a==“3”)
    {
      cout<<"Enter the amount in Fahrenheit: ";
      cin>>tmp;
      cvt=((tmp-32)/1.8)+273.15;
      cout<<tmp<<" Fahrenheit is "<<cvt<<" Kelvin."<<endl;
    }
  else if (a==“4”)
    {
      cout<<"Enter the amount in Kelvin: ";
      cin>>tmp;
      cvt=tmp-273.15;
      cout<<tmp<<" Kelvin is "<<cvt<<" Celsius."<<endl;
    }
  else if (a==“5”)
    {
      cout<<"Enter the amount in Kelvin: ";
      cin>>tmp;
      cvt=(tmp-273.15)*1.8+32;
      cout<<tmp<<" Kelvin is "<<cvt<<" Fahrenheit."<<endl;
    }
}


