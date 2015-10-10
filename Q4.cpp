#include <iostream>

using namespace std;

int main()
{
    //Initializes character as a letter type and offset as a number
    char usercharacter;
    int offset;
    int usernum;
    cout << "Enter character: "; //User inputs character
    cin >> usercharacter;
//User inputs 0 to convert character to uppercase or lowercase
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;
    
//If user enters 0 for offset and if input for character is a letter it converts to whatever case it isn't (uppercase or lowercase)
    if (usercharacter + offset <= 127){
        if (offset==0 && isalpha(usercharacter))
        {
            char newcharacter;
            if (usercharacter >= 'a' && usercharacter <= 'z') //If character is lowercase, it will convert to uppercase
            {
                newcharacter = usercharacter-('a'-'A');
                cout << "New character: " << newcharacter << endl;
            }
            else if (usercharacter >= 'A' && usercharacter <= 'Z'){ //If character is anything else, it will convert to lowercase
                newcharacter = usercharacter-('A'-'a');
            cout << "New character: " << newcharacter << endl;
            }
        }
        //If user does not enter offset as 0, the offset value is added to the ASCII value of the character
        else if (offset!=0 && isalpha(usercharacter))
        {
            usernum = (int) usercharacter;
            usernum += offset;
            cout << "New character: " << (char)usernum << endl;
        }
        
        //If user fails to enter a letter for a character, it prints what the user inputted
        else if (!isalpha(usercharacter) && offset==0)
        {
            cout << "New character: " << (char)usercharacter<< endl;
        }
        //If user fails to enter a letter and 0 for offset, it will add the offset value to the ASCII value of the input entered
        else if (!isalpha(usercharacter) && offset!=0)
        {
            usernum = (int) usercharacter;
            usernum += offset;
            cout << "New character: " << (char)usernum << endl;
        }
        
    }
    //If offset and usercharacter are out of ASCII range (greater than 127)
    else{
        cout << "Error. Out of range." << endl;
    }
    
    return 0;
    
}