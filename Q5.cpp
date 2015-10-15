
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;


int main(){

  int answer = 0;
  int guess = 0;
  int lastGuess = 0;
  int difference = 0;
  int lastDifference = 0;  

  // Generate random number
  srand(time(0)); // Found this in the textbook, 3.9 - Changes seed to the time in seconds elapsed since the birth of Unix to ensure a different sequence of random numbers every time program is run
  answer = rand() % 500;
  

  // Prompt user to enter guess
  cout << "Enter your first guess: ";
  cin >> guess;

  // Compare guess to number, prompt user for next guess until user guesses correctly
  while (guess != answer){
    lastGuess = guess;

    cout << "Enter your next guess: ";
    cin >> guess;
      
    difference = abs(guess - answer);
    lastDifference = abs(lastGuess - answer);

   
    // if the new guess and the previous guest are equidistant from the number of interest, display "no change"
    if (difference == lastDifference){
      cout << "No change" << endl;
    }
    
    // if the new guess is closer to the number of interest than the previous guess, display "warmer" 
    else if (difference < lastDifference && difference != 0) {
      cout << "Warmer" << endl;
    }
    
    // if the new guess is further from the number of interest than the previous guess, display "colder"
    else if (difference > lastDifference){
      cout << "Colder" << endl;    
    }
    

  }
  
  // if guess is correct, display congratulatory message and number
  cout << "Correct!  The number was " << guess << "!" << endl; // in the sample output, there are two spaces between Correct! and The. This has been changed to reflect that output. 


  return 0;

}
