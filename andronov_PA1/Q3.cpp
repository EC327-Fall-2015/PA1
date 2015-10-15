#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
  int n1;
  int n2;
  int diff = 0;


  //Get the numbers
  while(1)
  {
  	cout<<" Enter two positive integers."<<endl<<" n1: ";
  	cin>>n1;
	cout<<"\n n2: ";
 	cin>>n2;

	if ( (n1<0) || (n2<0) )
	  cout<<"\n Please try again."<<endl;
	else
	  break;
  }
  

  //convert the numbers to hex strings and format them to 16bit length
  stringstream ss2,ss1;
  ss1<<hex<<n1;
  ss2<<hex<<n2;
  string hex_n1 = ss1.str();
  string hex_n2 = ss2.str();

  while(hex_n1.length()<32)
    hex_n1 = "0" + hex_n1;

  while(hex_n2.length()<32)
    hex_n2 = "0" + hex_n2;

  //count the differences;
  for (int i = 0; i<16; i++)
  {
	if (hex_n1[i]!=hex_n2[i])
	  diff++;
  }


  //print result and return
  cout<<"The hamming distance between "<<n1<<" and "<<n2
      <<" when the numbers are in hexidecamal form is "<<diff
      <<".\n";
  return 0;

}