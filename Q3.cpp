#include<iostream>
using namespace std;

int main()
{
  int count = 0;
  int count1;
  int count2;
  int num1;
  int num2;
  int a;
  int b;
  cout<<"Enter two positive integers: "<<endl;
  cin>>a;
  cin>>b;
  num1=a;
  num2=b;
  int ans1=a;
  int ans2=b;
  while(num1 != 0 || num2 != 0)
  {
    count1 = num1%16;
    count2 = num2%16;
    num1 = num1/16;
    num2 = num2/16;
    if(count1 != count2)
    {
      count = count + 1;
    }
  }
  cout<<"Hamming distance between "<<ans1<<" and "<<ans2<<" when numbers are in hex format is: "<<count<<endl; 
}
