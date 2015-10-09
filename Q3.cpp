// ----------------------------------------------------------------------------
// program calculates the hamming distance between 2 values in their equivalent
// hex format
// inputs: inputValue1, inputValue2
// output: hammingdistance
// ----------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

string hex(int value);

int main()
{
  // takes in two positive values to compare
  int inputValue1, inputValue2;
  cout << "Enter two positive integers: " << endl;
  cin >> inputValue1;
  cin >> inputValue2;

  // calls hex function (see below) to calculate equivalent hex value of
  // decimal value
  int hammingdistance;
  string hexvalue1 = hex(inputValue1);
  string hexvalue2 = hex(inputValue2);

  // checks if the two hexvalue's are the same length
  // if not, adds 0 to the shorter one to make them equal in length
  if (hexvalue1.length() != hexvalue2.length())
  {
    while (hexvalue1.length() < hexvalue2.length())
      hexvalue1 += '0';
    while (hexvalue2.length() < hexvalue1.length())
      hexvalue2 += '0';
  }

  // calculates hamming distance by checking repspective indexes of both strings
  // outputs result to user
  for (int i; i < hexvalue1.length(); i++)
  {
    if (hexvalue1[i] != hexvalue2[i])
      hammingdistance += 1;
  }

  cout << "Hamming distance between " << inputValue1 << " and " << inputValue2 <<
    " when numbers are in hex format is: " << hammingdistance << endl;
  return 0;
}

// function that converts value from decimal to hex and returns it as a string
string hex(int value)
{
  char hex[] = "0123456789ABCDEF";
  string(hexvalue);

  while (value > 15)
  {
      int remain = value % 16;
      hexvalue += hex[remain];
      value /= 16;

      if (value < 15)
        hexvalue += hex[value];
  }
  return string(hexvalue);
}

// ----------------------------------------------------------------------------
// Enter two positive integers:
//
//
// Hamming distance between ____ and ____ when numbers are in hex format: __.
