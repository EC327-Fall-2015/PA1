#include <iostream>

using namespace std;

int main() {
    char charIn;
    char charOut;
    int offset;
    cout << "Enter character: " ;
    cin >> charIn;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;



    if (offset == 0 && (int) charIn > 64 && (int) charIn < 91) //case conversion to lowercase
    {
        charOut = (int) charIn + 32;
        cout << "New character: " << charOut << endl;
        return 0;
    }
    if (offset == 0 && (int) charIn > 96 && (int) charIn < 123) //case conversion to lowercase
    {
        charOut = (int) charIn - 32;
        cout << "New character: " << charOut << endl;
        return 0;
    }
    if (charIn + offset > 127) //ASCII limit
    {
        cout << "Error. Out of range." << endl;
        return 0;
    }
    else //for non letter conversion
    {
        charOut = (int) charIn + offset;
        cout << "New character: " << charOut << endl;
        return 0;
    }


    
}
