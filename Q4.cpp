#include <iostream>
#include <ctype.h> //used to make characters lowercase
#include <stdio.h>

using namespace std;

int main()
{
    double offset;
    char answer, letter;

    //Write code that asks the user to enter a character.
    cout << "Enter character: ";
    cin >> letter;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;

    //conversion of cases
    if (offset == 0) //if offset is equal to zero
    {
        if (isalpha(letter)) //if letter is an alphabet value
        {
            if (islower(letter)) //check if letter is lowercase
            {
                letter = toupper(letter); //letter is now uppercase
                cout << "New character: " << letter << endl;
            }

            else if (isupper(letter)) //check if letter is uppercase
            {
                letter = tolower(letter); //letter is now lowercase
                cout << "New character: " << letter << endl;
            }
        }

        else //if letter is not a letter
        {
            cout << "New character: " << letter << endl;
        }
    }

    //computing new aschii value
    else
    {
        int aschii = int(letter) + offset;
        if (aschii > 94)
        {
            cout << "Error. Out of range." << endl;
        }
        else if (aschii < 94)
        {
            answer = char(aschii);
            cout << "New character: " << answer << endl;
        }
    }


    return 0;
}
