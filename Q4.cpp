#include<iostream>
using namespace std;
int main()
{
  char ch;
  int os,max;
  cout<<"Enter character: ";
  cin>>ch;
  cout<<"Offset (enter 0 to convert case):";
  cin>>os;
  max=ch+os;
  if (os!=0)
  {
	if (max<=127)
	{
		ch+=os;
		cout<<"New character: "<<ch<<endl;  
	}
	else
	{
		cout<<"Error: Out of range!"<<endl;	
	}
  }
  else if (os==0)
  {
	if (ch>='A'&&ch<='Z')
	{
		ch=ch+32;
		cout<<"New character: "<<ch<<endl;
	}
	
	else if (ch>='a'&&ch<='z')
	{
		ch=ch-32;
		cout<<"New character: "<<ch<<endl;
	}
	else
	{
		cout<<"New character: "<<ch<<endl;
	}
  }
}
