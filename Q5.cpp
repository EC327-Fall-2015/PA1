//Srilalitha Kumaresan Q5 PA1

//Preprocessor directives
#include <iostream>
#include <cstdlib>// used for absolute value and rand()

using namespace std;

int main()
{
    /*This main function sets and random integer for the user to guess.
     The user is given colder and warmer clues until the number has been correctly guessed*/
    
    int num1 = rand();// random number generated (integer)
    int guess;// holds user input
    int nextGuess;
    
    // Prompt user
    cout<<" Enter your first guess: " <<endl;
    cin>>guess;
    
    while (guess != num1)// while guess is not correct, compare next guess and give clue
    {
        cout<< " Enter your next guess: " <<endl;
        cin >> nextGuess;
        
        if (nextGuess == num1)
            guess = nextGuess;
        else if (abs(num1 - nextGuess) <abs(num1 - guess))// if guess is better than previous guess
        {
            cout<<" Warmer" <<endl;
            guess = nextGuess;
        }
        else if (abs(num1 - nextGuess) > abs(num1 - guess))// if guess is worse than previous guess
        {
            cout<<" Colder"<<endl;
            guess = nextGuess;
        
        }
        else
        {
            cout<< "No change"<<endl;// if guess is no better or worse than previous guess
            guess = nextGuess;
        }
    }
    cout<<" Correct ! The number was " <<num1<<" !"<<endl;// If guess is correct
    
    return 0;
}

