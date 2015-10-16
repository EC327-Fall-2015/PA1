#include <iostream>
using namespace std;

int main(){

    int offset;
    char in, out;

    // prompt user to enter a character and store it in in
    cout<<"Enter character: ";
    cin>>in;

    // prompt user to enter the offset or 0 and store it in offset
    cout<<"Offset (enter 0 to convert case): ";
    cin>>offset;
    
    // change cases if user enters a character, or return the input if user enters anything else
    if (offset == 0) {
        if ((int)in>=65&&(int)in<=90) {
            out = (char)(((int)in)+32);
        }
        else if((int)in>=97&&(int)in<=122){
            out = (char)(((int)in)-32);
        }
        else{
            out = in;
        }
        cout<<"New character: "<<out<<endl;
    }
    // error check if the offset is out of range, which is 126 in the ascii table
    // output wanted letter, number or symbol with the offset entered
    else{
        if ((((int)in)+offset)>126) {
            cout<<"Error. Out of range."<<endl;
        }
        else{
            out = (char)(((int)in)+offset);
            cout<<"New character: "<<out<<endl;
        }
        
    }
    
    return 0;
    

}