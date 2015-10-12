#include <iostream> 
using namespace std; 
int main() 

{ 
unsigned int A; 
unsigned int B; 
int count1 = 0; 
int count2 = 0; 
int remA = 0; 
int remB = 0; 
int Aorig; 
int Borig; 
// Get user input for the two integers. Make sure they are positive.
// Negative and decimal numbers are horrific in hex and binary.
cout << "Enter an unsigned integer: " << endl; 
cin >> A; 
cout << "Cool. Enter another unsigned integer: " << endl; 
cin >> B; 

Aorig= A; 
Borig= B; 

// Now things get crazy. 
// Luckily, we're finding the hamming distance between hex numbers.
// Therefore, we don't care what the numbers translate to,
// We just care about how different they are.

while (((16 ^ count2) < Aorig) && ((16 ^ count2) < Borig)) 
  // In hex, everything revolves around 16 (letters 0 through F)
  // We will keep exponentiating 16 until both numbers are smaller than 16 ^ n.

  { 
    remA = ( A )  % 16; 
    remB = ( B ) % 16; 
    // Get the remainder of the input numbers when divided by 16.
    // This is crucial; this gives the hex value at this moment in time.

    A =( A - remA ) / 16; 
    B =( B - remB ) / 16; 
    // Here, we change the original number so that it  cleanly divides by 16. This
    // sets it up for another round of finding its hex value.

    if ( remA != remB ) 
      { 
	count1 = count1 + 1; 
      } 
    // If the remainders are not the same, this means they don't have the same hex value.
    // Hence, this is a difference. This will add one to the hamming distance.

    else 
      { 
	count1 = count1; 
      } 
    // If the remainders are the same, they have the same hex value. Thus hamming distance doesn't add.

    count2 = count2 + 1; // This raises the exponent we are raising n to. 
    
  } 
 cout << "The Hemming distance between " << Aorig << " and " << Borig << " when they are converted to hex format is: " << count1 << endl; 
 return 0; 
} 
// Note: This code was very easy because we didn't have to string together the hexadecimal equivalent of the numbers.
// The program doesn't know what the hex numbers are; it just knows what's different about them. 
