//
//  main.cpp
//  PA1_Q5
//
//  Created by veronica celine on 9/23/15.
//  Copyright © 2015 veronica celine. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    //Reset the randomize seed every time the program runs
    srand(time(0));
    
    //Randomize the answer to be from 0 to 100
    int answer = rand() % 101;
    
    //Intitialize variables
    int first, guess;
    int dif1;
    int dif2;
    
    
    
    // Ask user for first guess
    cout << "Enter your first guess: ";
    cin >> first;
    
    
    
    //Ask user for second guess
    if (first == answer)
    {
        cout << "Correct! The number was " << answer << "!" << endl;
    }
    else
    {
        cout << "Enter your next guess: ";
        cin >> guess;
    }
    
    
    
    //Give user hints, until gets to the right answer
    while (true)
    {
        dif1 = std::abs(first - answer);
        dif2 = std::abs(guess - answer);
        if (guess == answer)
        {
            cout << "Correct! The number was " << answer << "!" << endl;
            break;
        }
        else if (dif1 > dif2)
        {
            cout << "Warmer" << endl;
            first = guess;
            cout << "Enter your next guess: ";
            cin >> guess;
        }
        else if (dif1 < dif2)
        {
            cout << "Colder" << endl;
            first = guess;
            cout << "Enter your next guess: ";
            cin >> guess;
        }
        
    }
    
    //END GAME
    return 0;
}








