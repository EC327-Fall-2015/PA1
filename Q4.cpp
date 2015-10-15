
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// function called when offset equals zero
char changeCase(char character){
 
  int change;
  char newCharacter; 
  
  // if the character is an upper case letter, add 32 (the difference between the two cases for the same letter) to change it to lower case.
  if (character < 91 && character > 64){
    change = character + 32;
  } 
  // if the character is a lower case letter, subtract 32 to change it to upper case.
  else if (character > 96 && character < 123){
    change = character - 32;
  }

  // if the character is not a letter, return the same character
  else {
    change = character;
  }
 
  // cast the new value back into a character to return its ASCII symbol.
  newCharacter = static_cast<char>(change);


  return newCharacter;
}


int main(){

  
  char character;
  int offSet;
  int shift;

  // prompt user to enter a character
  cout << "Enter character: "; 
  cin >> character;


  // prompt user to enter offset value
  cout << "Offset (enter 0 to convert case): ";
  cin >> offSet;
  
  shift = character + offSet;
  
  // if the sum character and the offset value are greater than 126, display error message (126 is the highest character value on the ASCII table) 
  if (shift > 126){
    cout << "Error. Out of range." << endl;
  }
  
  // if 0 is entered for the offset, call the change case function
  else if (offSet == 0){
    //newCharacter = changeCase(character);  
    cout << "New character: " << changeCase(character) << endl;
  }

  // if the offset is not zero, display the ASCII character equivalent to the value of the original character added to the offset number
  else{
    cout << "New character: " << static_cast<char>(shift) << endl;
  }

  return 0;
}
