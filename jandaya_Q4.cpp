#include <iostream>

using namespace std;

int main()
{
    char chr;
    int offset, newChr;

    cout << "Enter character: ";
    cin >> chr;

    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;


    if (offset == 0)
    {
        if ((int)chr >= 65 && (int)chr <= 90)
            newChr = (int)chr + 32;
        else if ((int)chr >= 97 && (int)chr <= 122)
            newChr = (int)chr - 32;
        else
            newChr = (int)chr;
    }

    else
    {
        newChr = (int)chr + offset;
    }

    if (newChr > 127)
    {
        cout << "Error. Out of range.";
    }
    else
    {
    cout << "New character: " << (char)newChr;
    }
}
