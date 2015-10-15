#include<iostream>
using namespace std;
int main()
{
  int cnt;
  int a,b;
  int a0,b0;
  int n1,n2;
  cout<<"Enter two positive integers: "<<endl;
  cin>>a;
  cin>>b;
  n1=a;
  n2=b;
  a0=a;
  a0=b;
  while(n1 != 0 || n2 != 0)
  {
    a = n1%16;
    b = n2%16;
    n1 = n1/16;
    n2 = n2/16;
    if(a != b)
    {
      cnt+=1;
    }
  }
  cout<<"Hamming distance between "<<a0<<" and "<<b0<<" when numbers are in hex format is: "<<cnt<<endl;
}
