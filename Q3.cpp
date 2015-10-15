#include<iostream>
#include<cmath>

using namespace std;

//Hamming distance between two integers

int main()
{

  int dec1; 
  int dec2; 
  int hold1;
  int hold2;

  //Prompt user for two inputs

  cout << "Enter two positive integers: " <<endl;

  cin >> dec1;
  cin >> dec2; 

  //Store original values

  hold1 = dec1;
  hold2 = dec2;


  //Convert decimal numbers to hex

  string hex = "";
  
  while (dec1 !=0)
    {
      int hexValue = dec1 % 16;

      char hexChar = (hexValue <=9 && hexValue >=0) ?
	static_cast<char>(hexValue + '0'):
	static_cast<char>(hexValue - 10 + 'A');

      hex = hexChar+hex;
      dec1=dec1/16;
    }



  string hex2 = "";

  while (dec2 !=0)
    {
      int hexValue2 = dec2 % 16;

      char hexChar2 = (hexValue2 <=9 && hexValue2 >=0) ?
        static_cast<char>(hexValue2 + '0'):
        static_cast<char>(hexValue2 - 10 + 'A');
      
      hex2 = hexChar2+hex2;
      dec2=dec2/16;
    }
  
  int ham;

  // Compare the two hex values and take the absolute value to find the hamming distance

  ham = abs(hex.compare(hex2));



//Let the user know what's up

cout << "Hamming distance between " << hold1 << " and " << hold2 << " when numbers are in hex format is: " << ham << endl;


 return 0;


}
