#include <iostream>
using namespace std;

int main()
{
    int offset;
    char character; //define as char since only characters entered
    cout<<"Enter character: ";
    cin >> character; //input stored as character
    cout << "Offset (Enter 0 to change case): ";
    cin >> offset;
    int newchar; //newchar will be the changed character value
    
    if (offset != 0) //separates zero and nonzero offset entry
    {
        newchar = character + offset; // if not  0, just adds offset  
    }
   

    else
    {
        if (((character >= 0) && (character < 65)) || ((character > 90) && (character < 97)) || ((character > 122) && (character <= 127)))
// checking to make sure character is a valid nonletter character
        {
            newchar = character; //stays the same if nonletter
        }
        else if (character >= 65 && character <= 90)
        {
            newchar = character + 32; //adds 32 to change case to lower
        }
        else if (character >= 97 && character <= 122)
        {
            newchar = character - 32; // subtracts 32 to change case to upper
        }
        else if (character >127) //invalid input if above ASCII 127
        {
            cout <<"Error. Out of range."<<endl;
        }
        
    }
    if (static_cast<int>(newchar) >127) //converts to integer and compares
    {
        cout << "Error. Out of range."<<endl; //makes sure newchar is valid
    }
    else //valid newchar is less than ASCII 128
    {
        cout << "New character: "<< static_cast<char>(newchar)<<endl;
 //returns final result
   }

    return 0;
}
