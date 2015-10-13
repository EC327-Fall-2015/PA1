#include <iostream>
#include <cmath>

using namespace std;

int main () {
    //Declare variables.
    char char_1, char_case, new_char;
    int offset_1, char_to, int_char_1, int_char_case, int_offset, int_new_char;
    
    //Prompt the user for a character.
    cout << "Enter character: ";
    cin >> char_1;
    
    //Only works if cin is a character.
    if (cin.fail()) {
        cout << "Not a character" << endl;
    }
    else {
        
        int_char_1 = int(char_1);
        
        //The ASCII value of the character:
        //cout << "ASCII value of " << char_1 << " is " << int_char_1 << endl;
        
        //Prompt for the offset.
        cout << "Offset (enter 0 to convert case): ";
        cin >> offset_1;
        
        //If offset is 0, change the case of the character, given they are letters.
        if (offset_1 == 0) {
            
            if ((int_char_1 >= 97) && (int_char_1 <= 122)){
                int_char_case = int_char_1 - 32;
                char_case = char(int_char_case);
                cout << char_case << endl;
            }
            else if((int_char_1 >= 65) && (int_char_1 <= 90)){
                int_char_case = int_char_1 + 32;
                char_case = char(int_char_case);
                cout << "New character: " << char_case << endl;
            }
            else {
                cout << "New character: " << char_1 << endl;
            }
            
        }
        
        //If offset is not 0, add or subtract to get another character.
        
        else if (offset_1 > 0){
            
            //Add the integer value of the character and the given offset.
            int_new_char = int_char_1 + offset_1;
            
            //The total integer value.
            //cout << "New Character(int): " << int_new_char << endl;
            
            //Used 255 as the limit because ASCII extended table was referenced.
            if (int_new_char > 255){
                cout << "Error. Out of range." << endl;
            }
            
            else {
                //This is the final answer.
                cout << "New Character: " << char(int_new_char) << endl;
            }
        }
    }
}