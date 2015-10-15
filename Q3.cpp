#include <iostream>

#include <string>

using namespace std;

string decimalToHex(int num); 

string decimalToHex(int num) // function to convert decimal input to a hex output
{
  string hex = "";
  
  while (num != 0)
    {
      int hexValue = num % 16; //hex base is 16
      char hexChar = (hexValue <= 9 && hexValue >= 0) ? 
	static_cast<char>(hexValue + '0') :
	static_cast<char>(hexValue - 10 + 'A');
      hex = hexChar + hex;
      num = num / 16;
    }
  return hex;
}
int main()
{
  int inp1, inp2;
  cout << "Enter two positive integers: " << endl;
  cin >> inp1 >> inp2;
  string hinp1 = decimalToHex(inp1); //convert both inputs to hex
  string hinp2 = decimalToHex(inp2);
  int ctr = 0;
  
  if (hinp1.length() != hinp2.length()) // checking if two inputs are of unequal length after conversion
    {
      if (hinp1.length() > hinp2.length()) 
	{
	  int a = hinp1.length() - hinp2.length();
	  for (int i = 1; i <= a; i++)
	    {
	      hinp2 = '0' + hinp2; // add zeroes infront of the hex string to equalize lengths
	    }
	}
      else if (hinp1.length() < hinp2.length())
	{
	  int a = hinp2.length() - hinp1.length();
	  for (int i = 1; i <= a; i++)
	    {
	      hinp1 = '0' + hinp1; // same as above
	    }
	}
    }
  
  if (hinp1.length() == hinp2.length()) // check for hamming distance once the hex strings are equal
    {
      for (int i = 0; i <= hinp1.length(); i++) // loop to check the string character by character
	{
	  if (hinp1[i] != hinp2[i]) // add to counter if the two character at their respective location are unequal
	    {
	      ctr++;
	    }
	}
      cout << "Hamming distance between " << inp1 << " and " << inp2 << " when numbers are in hex format is: " << ctr << endl;
    }
  return 0;
}
