//
//  main.cpp
//  Q5
//
//  Created by Tiffany Wu on 9/23/15.
//  Copyright © 2015 Tiffany Wu. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // This is to have a random integer every time the program runs that depends on the time
    
    srand ( (unsigned int) time(NULL));
    
    // The below code has the user input their first guess
    
    int guess1, guess2, difference, answer, comparision;
    answer = rand() % 500 + 1;
    cout << "Enter your first guess: ";
    cin >> guess1;
    
    /* The while loop checks to see if the guess the user inputs equal the answer. If not, it calculates the difference between the first guess and the answer and then the second guess and the answer.
     */
    
    while (guess1 != answer)
    {
        difference = abs (guess1 - answer);
        cout << "Enter your next guess: ";
        cin >> guess2;
        comparision = abs (guess2 - answer);
        guess1 = guess2;
        
        /* The if statement compares the guess with the answer first to break the loop if the answer = the guess. If the answer does not equal the guess, then the code compares the difference between the first guess and the answer and then compares it to the difference between the second guess and the answer. If the difference of the second guess is less than the first guess, you are closer to the answer so the code outputs "warmer." If it is the other way around, the code outputs "colder." If the difference is equal, the code outputs "no change."
         */
        
        if (guess1 == answer)
        {
            break;
        }
        else if (difference > comparision)
        {
            cout << "Warmer" << endl;
        }
        else if (difference == comparision)
        {
            cout << "No change" << endl;
        }
        else
        {
            cout << "Colder" << endl;
        }
    }
    
    // Outputs the correct number
    
    cout << "Correct! The number was "<< guess1 << "!" << endl;
    
    return 0;
}
