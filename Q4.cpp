#include<iostream>
#include<cmath>

using namespace std;

int main()

{

//Calculating offsets

char letter; 
int offset;
char newletter;

//Prompt user for character and numerical offset

cout << "Enter character: ";

  cin >> letter;

cout << "Offset (enter 0 to convert case): ";

  cin >> offset;

  //Define conditions of user inputs: changing cases, checking to make sure their value is in within range, and adding the offset to the original character
  //Prints the new character

  if (letter >= 65 && letter < 97 && offset==0)
    {
    newletter = letter + 32;
    cout << "New character: " << newletter << endl;
    }
  else if (letter <= 122 && letter >= 97 && offset ==0)
    {
    newletter = letter - 32;
    cout << "New character: " << newletter << endl;
    }
  else if (letter+offset > 126 || letter+offset< 33)
    {
    cout << "Error. Out of range." << endl;
    } 
 else
    {
    newletter = letter + offset;
    cout << "New character: " << newletter << endl;
    }

 return 0;


}
