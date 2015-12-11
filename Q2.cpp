#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Celsius to Fahrenheit (enter 0)"<<endl;
  cout<<"Celsius to Kelvin (enter 1)"<<endl;
  cout<<"Fahrenheit to Celsius (enter 2)"<<endl;
  cout<<"Fahrenheit to Kelvin (enter 3)"<<endl;
  cout<<"Kelvin to Celsius (enter 4)"<<endl;
  cout<<"Kelvin to Fahrenheit (enter 5)"<<endl;
  cout<<"Conversion type: ";
  cin>>n;
 
  while(n<0 || n>5)
  {
    cout<<"Wrong input, try again: ";
    cin>>n;
  }

  if(n==0)
  {
    double Cel1;
    cout<<"Enter the amout in Celcius: ";
    cin>>Cel1;
    double a=Cel1*9/5+32;
    cout<<Cel1<<" Celsius is "<<a<<" Fahrenheit.";
  }
  else if(n==1)
  {
    double Cel2;
    cout<<"Enter the amount in Celsius: ";
    cin>>Cel2;
    double b=Cel2+273.15;
    cout<<Cel2<<" CElsius is "<<b<<" Kelvin.";
  }
  else if(n==3)
  {
    double Fah1;
    cout<<"Enter the amount in Fahrenheit: ";
    cin>>Fah1;
    double c=(Fah1+459.67)*5/9;
    cout<<Fah1<<" Fahrenheit is "<<c<<" Kelvin.";
  }
  else if(n==2)
  {
    double Fah2;
    cout<<"Enter the amount in Fahrenheit: ";
    cin>>Fah2;
    double d=(Fah2-32)*5/9;
    cout<<Fah2<<" Fahrenheit is "<<d<<" Celsius.";
  }
  else if(n==4)
  {
    double Kel1;
    cout<<"Enter the amount in Kelvin: ";
    cin>>Kel1;
    double e=Kel1-271.15;
    cout<<Kel1<<" Kelvin is "<<e<<" Celsius.";
  }
  else if (n==5)
  {
    double Kel2;
    cout<<"Enter the amount in Kelvin: ";
    cin>>Kel2;
    double f=(Kel2-273.15)*1.8+32.0;
    cout<<Kel2<<" Kelvin is "<<f<<" Fahrenheit.";
  }
}
