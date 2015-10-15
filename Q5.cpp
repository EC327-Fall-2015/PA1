#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int abs(int input);

int main()
{
    int ans, guess, guess2;

    srand (time(NULL));
    ans = rand() % 1000;

    cout<<"Enter your first guess: ";
    cin>>guess;
    if (ans == guess)
    {
        cout<<"Correct! The number was "<<ans<<"!"<<endl;
        return 0;
    }
    while(true)
    {
        cout<<"Enter your next guess: ";
        guess = guess2;
        cin>>guess2;

        if (guess2 == ans)
        {
            cout<<"Correct! The number was "<<ans<<"!"<<endl;
            return 0;
        }
        else if (abs(guess2 - ans) > abs(guess - ans))
        {
            cout<<"Colder"<<endl;
        }
        else if (abs(guess2 - ans) < abs(guess - ans))
        {
            cout<<"Warmer"<<endl;
        }
        else
            cout<<"No Change"<<endl;

    }
    //while()
    return 0;
}

int abs(int input)
{
    if (input > 0)
        return input;
    else
        return -input;
}
