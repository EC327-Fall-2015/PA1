#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

// Reference Note: I came across this conversion from decimal to a hex string in Chapter 5 of Liang while doing the assigned reading. I adapted it to a function that I call in my main function.
string decToHexStr (int decInt){

  string hexStr = "";
  
  while (decInt != 0){
    int hexMod = decInt % 16;

    char hexDig = (hexMod >= 0 && hexMod <= 9) ?
      static_cast<char>(hexMod + '0'):
      static_cast<char>(hexMod + 'A');

    hexStr = hexDig + hexStr;
    decInt /= 16;

  }
  
  
  return hexStr;
}



int main(){
  
  int integer1;
  int integer2;
  
  // prompt user to enter integer values
  cout << "Enter two positive integers:" << endl;
  cin >> integer1;
  cin >> integer2;

  
  string hexOne = decToHexStr (integer1); //convert integers to hex string; declare and define variables as the hex strings
  string hexTwo = decToHexStr (integer2);  
  int hexOneLength = hexOne.length(); // declare and define variables equal to the lengths of the hex strings respectively
  int hexTwoLength = hexTwo.length();
  int hammingDistance = abs(hexOneLength - hexTwoLength); // declare and define initial hamming distance value as the absolute value of the difference in string lengths between the two hex numbers


  // decrement the string length variables
  hexOneLength--;
  hexTwoLength--;


  // first, check if the two numbers are equal, in which case the hamming distance is zero
  if (hexOne == hexTwo){
    hammingDistance = 0;
  }
  

  /* if they are not equal, compute hamming distance using an if statement within a while loop: The if statement compares respective characters from the hex strings. If the characters are !=, hamming distance is increase by one, if not, the step is skipped.
     Both length values decrement with each iteration until one of them becomes less than zero and while loop is terminated. */
  else {
    while (hexOneLength >= 0 && hexTwoLength >= 0){

      if (hexOne[hexOneLength] != hexTwo[hexTwoLength]){
	hammingDistance += 1;
      }
      
      hexOneLength--;
      hexTwoLength--;
    }


  }


  // display the final results

  cout << "Hamming distance between " << integer1 << " and " << integer2 << " when numbers are in hex format is: " << hammingDistance << endl;

  


  return 0;
}
