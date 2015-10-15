#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
//prompt user for integers
	cout<<"Enter a positive integer:";
	int num1;
	cin>>num1;
	cout<<endl<<"Enter another positive integer:";
	int num2;
	cin>>num2;
	int a=num1;
	int b=num2;
//convert to hex with two separate while loops
//initialize hex variables first
	string hex1="";
	string hex2="";
	while (num1!=0)
	{
		int hexvalue=num1 % 16;
		char hexchar=(hexvalue<=9 && hexvalue>=0) ?
		static_cast<char>(hexvalue+'0') :
		static_cast<char>(hexvalue-10+'A');
		hex1=hexchar+hex1;
		num1=num1/16;
	}
	while (num2!=0)
	{
		int hexvalue2=num2 % 16;
		char hexchar=(hexvalue2<=9 && hexvalue2>=0) ?
		static_cast<char>(hexvalue2+'0') :
		static_cast<char>(hexvalue2-10+'A');
		hex2=hexchar+hex2;
		num2=num2/16;
	}
//convert strings to character matrices
	char*chex1=new char [hex1.length()+1];
	std::strcpy (chex1, hex1.c_str());
	char*chex2=new char [hex2.length()+1];
	std::strcpy (chex2, hex2.c_str());
//compare the character matrices
	int c=0;
	int mynum=0;
	while (c<strlen(chex1))
	{
		mynum=mynum+(chex1[c]!=chex2[c]);
		c=c+1;
	}
	cout<<"Hamming distance between "<<a<<" and "<<b<<" when the numbers are in hex format is "<<mynum<<endl;
}

