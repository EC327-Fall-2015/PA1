//
//  main.cpp
//  PA1-Q5
//
//  Created by Michaela Moynihan on 9/30/15.
//  Copyright © 2015 Michaela Moynihan. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    //Declare variables and types
    srand((time(0)));
          int answer = rand() % 20;
          int guess;
          int next_guess=0;
          
          //Ask for first guess
          cout<< "Enter your first guess: ";
          cin >> guess;
          
          
          //Checks to see if first guess was correct
          if (guess == answer)
          {
              cout << "Correct! The number was " << answer << endl;
          }
          
          
          //Takes next guess, compares it to the preceding guess, and gives result "warmer, colder"
          while (guess != answer && next_guess != answer)
          {
              cout << "Enter your next guess: ";
              cin >> next_guess;
              
              if (abs(answer-next_guess) > abs(answer-guess))
              {
                  cout << "Colder" << endl;
                  guess = next_guess;
              }
              else if (abs(answer-guess)> abs(answer- next_guess))
              {
                  cout << "Warmer" << endl;
                  guess = next_guess;
                  
              }
              
          }
          
          //If the last guess is equal to the answer, it returns correct.
          if (next_guess == answer)
          {
              cout << "Correct! The number was " << answer << endl;
          }
          
          
          
          return 0;
          
          }