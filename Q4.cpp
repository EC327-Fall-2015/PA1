#include <iostream>

using namespace std;

int main()
{
    char input;
    int offset;
    cout<<"Enter Character: ";
    cin>>input;
    cout<<"Offset (enter 0 to convert case): ";
    cin>>offset;
    if (input + offset >= 128)
    {
        cout<<"Error. Out of range."<<endl;
        return 0;
    }
    else if (input >= 65 && input <= 90 && offset == 0)
    {
        input += 32;
    }
    else if(input >= 97 && input <= 122 && offset ==0)
    {
        input -= 32;
    }
    else
        input += offset;

    cout<<"New character: "<<input;
    return 0;
}
