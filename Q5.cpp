#include <iostream>
#include <cmath>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
 
 
using namespace std;
 
int main() {
 
    srand(time(NULL));
    int randomVal = rand() % 1000 + 1; 
    int guess, distance, priorDistance;
    int i; //Used to simply determine weather it is the first loop iteration.
 
    //system("pause");
 
    i = 0;
    do {
        if (i == 0) //First guess, unique prompt. 
        {
            cout << "Enter your first guess: ";
            cin >> guess;
            cout << endl;
 
            distance = abs(randomVal - guess);
            priorDistance = distance; 
            i++;
 
            if (guess == randomVal)
            {
                cout << "Correct! The number was " << randomVal << "!" << endl;
                break;
            }
        }
        else //Not the first guess, different prompt than before.
        {
            cout << "Enter your next guess: ";
            cin >> guess;
 
            distance = abs(randomVal - guess);
 
            if (guess == randomVal) //Correct guess, display text and exit. 
            {
                cout << "Correct! The number was " << randomVal << "!" << endl;
                break;
            }
 
            if (distance == priorDistance) //No change in distance.
            {
                cout << "No change" << endl;
            }
 
            else if (distance > priorDistance) //New guess is further away than old guess
            {
                cout << "colder" << endl;
            }
            else if (distance < priorDistance) //New guess is closer than old guess.
            {
                cout << "Warmer" << endl;
            }
 
            priorDistance = distance;
         }
 
    } while (guess != randomVal);
 
    //system("pause");
 
    return 0;
}
