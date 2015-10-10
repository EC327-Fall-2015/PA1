#include <iostream>
#include <cmath>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main()
{
    int firstguess;     //Initializes first user input
    int nextguess;    //Initializes next user input
    string closeness;
    srand(0);
    int correctanswer = rand();
    
    cout << "Enter your first guess: "; //User inputs first guess
    cin >> firstguess;
    //Prints correct and quits program if user enters correct answer on first try
    if (firstguess == correctanswer){
        cout << "Correct! The number was " << correctanswer << endl;
        return 0;
    }
    cout << "Enter your next guess: "; //User inputs second guess
    cin >> nextguess;
    
//Loops while the user input for next guess isn't the correct answer
    while (nextguess!=correctanswer)
      {
        if (abs(int(nextguess - correctanswer)) < abs(int(firstguess - correctanswer))) //If nextguess is closer to the correct answer then it prints warmer
            closeness = "Warmer";
        else if (abs(int(nextguess - correctanswer)) == abs(int(firstguess - correctanswer))){
            closeness = "No Change"; //If the distance from the correct answer does not change then it prints no change
        }
        else if (abs(int(nextguess - correctanswer)) > abs(int(firstguess - correctanswer))){
            closeness = "Colder"; //If nextguess is farther away from the correct answer then it prints colder
        }
          
      cout << closeness << endl;
      firstguess = nextguess;
      cout << "Enter your next guess: "; //Prompts the user again
      cin >> nextguess;
          
      }
    //Prints that the user guessed the right answer after playing the game
    cout << "Correct! The number was " << correctanswer << "!" << endl;
    
    return 0;
    
}