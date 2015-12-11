#include<iostream>
using namespace std;

int main()
{
  int num;
  char cha;
  cout<<"Enter character: ";
  cin>>cha;
  cout<<"Offset (enter 0 to convert case): ";
  cin>> num;
  if(cha+num<127)
  {
    if(num==0)
    {
      if(cha>='a'&&cha<='z')
      {
      cha=cha-32;
      cout<<"New character: "<<cha<<endl;
      }
      else if(cha>='A'&&cha<='Z')
      {
      cha=cha+32;
      cout<<"New character: "<<cha<<endl;
      }
      else
      {
      cout<<"New character: "<<cha<<endl;
      }
    }
    else
    {
      cha+=num;
      cout<<"New character: "<<cha<<endl;
    }
  }
  else
  {
    cout<<"Error. Out of range."<<endl;
  }
}

