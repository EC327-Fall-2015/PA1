//
//  main.cpp
//  Q5_warmer_colder
//
//  Created by Tess Gauthier on 9/23/15.
//  Copyright © 2015 Tess Gauthier. All rights reserved.
//  User guesses random number based on warmer/colder feedback

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    
    // Generates random number in range from 0-500
    
    int randnum;
    randnum = rand() % 500;
    
    int originalguess;
    cout << "Enter your first guess: ";
    cin >> originalguess;
    
    int nextguess;
    
    // Compares consecutive guesses and tells user whether they are warmer, closer, or no change
    
    while (originalguess != randnum)
    {
        cout << "Enter your next guess: ";
        cin >> nextguess;
        
        if (nextguess != randnum)
        {
            if ((abs(randnum - nextguess)) > (abs(randnum - originalguess)))
            {
                cout << "Colder" << endl;
            }
        
            if ((abs(randnum - nextguess)) < (abs(randnum - originalguess)))
            {
                cout << "Warmer" << endl;
            }
            
            if ((abs(randnum - nextguess) == (abs(randnum - originalguess))))
                {
                    cout << "No change" << endl;
                }
        }
        
        originalguess = nextguess;
    }
    
    cout << "Correct!  The number was " << randnum << "!" << endl;
    
    return 0;
}
