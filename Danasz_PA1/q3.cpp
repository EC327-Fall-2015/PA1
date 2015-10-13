#include <iostream>
using namespace std;

int main()

{int count;		//Initialize variables
int n1;
int n2;
int rem1;
int rem2;
int hex;
int num1;
int num2; 

	cout<<"Enter two posivite integers:"<<endl;		//prompt for integers
	cin>>n1;
	cin>>n2;
	count=0;	
	hex=16;
	num1=n1;
	num2=n2;	

	while (n1>0 || n2>0)			//check until no remainder
		{rem1=n1%hex;			//obtain remander number/16
		rem2=n2%hex;
		if (rem1!=rem2)			// check if remainder is the same
			{count++;}		// inc count (hamming distance
		n1=(int)n1/hex;			// store remaining value in number
		n2=(int)n2/hex;}

	cout<<"Hamming distance between "<<num1<<" and "<<num2<<"when numbers are in hex format is: "<<count<<endl;		//print hamming distance
return 0;
}
