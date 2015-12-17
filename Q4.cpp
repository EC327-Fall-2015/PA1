#include <iostream>
#include <cctype>
using namespace std;
 
 
int main()
{
    int keepLooping = 0;
    do {
 
        char character;
        cout << "Please enter a character: ";
        cin >> character;
        cout << endl;
 
        int offset;
        cout << "Please enter a non-negative integer offset value: ";
        cin >> offset;
        cout << endl;
 
        int asciiVal = static_cast<int>(character);
        int changeCase = 32; // abs('A' - 'a');
 
 
        // Character --> ASCII Value
        //'0' - '9' --> 48-57
        //'A' - 'Z' --> 65 - 90
        //'a' - 'z' --> 97-122
 
         
 
        if ((asciiVal >= 32) && (asciiVal <= 64)) //Represents the non-alphabetical charecters
        {
            if (offset == 0)
            {
                cout << "New character: " << character << endl;
            }
            else if (offset > 0)
            {
                char newChar = static_cast<char>(asciiVal + offset);
                if (((asciiVal + offset) <= 31) || ((asciiVal + offset) >= 127))
                    cout << "Your offset has resulted in a invalid ascii character! Sorry." << endl;
                else
                    cout << "New character: " << newChar << endl;
            }
            else
                cout << "You entered a negative offset value! Please run again!" << endl;
        }
        else if (((asciiVal >= 65) && (asciiVal <= 90)) || ((asciiVal >= 97) && (asciiVal <= 122))) // Represents an alphabetical value
        {
            if (offset == 0)
            {
                if ((asciiVal >= 65) && (asciiVal <= 90)) //isupper(character)
                {
                    char newChar = static_cast<char>(asciiVal + changeCase);   //toupper(character)
                    cout << "New character: " << newChar << endl;
                }
                else if ((asciiVal >= 97) && (asciiVal <= 122)) //islower(character)
                {
                    char newChar = static_cast<char>(asciiVal - changeCase); //tolower(character)
                    cout << "New character: " << newChar << endl;
                }
                else
                    cout << "Logic Error! This should not happen :O" << endl;
            }
            else if (offset > 0)
            {
                char newChar = static_cast<char>(asciiVal + offset);
                if (((asciiVal + offset) <= 31) || ((asciiVal + offset) >= 127))
                    cout << "Your offset has resulted in a invalid ascii character! Sorry." << endl;
                else
                    cout << "New character: " << newChar << endl;
            }
            else
                cout << "You entered a negative offset value! Please run again!";
        }
 
        cout << "Convert another character? yes (0) no (press any number). ";
        cin >> keepLooping;
        cout << endl;
 
 
    }while (keepLooping == 0);
 
    // system("pause");
    return 0;
 
}
