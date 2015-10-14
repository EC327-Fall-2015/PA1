#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    stringstream sstream1;
    stringstream sstream2;
    unsigned long integer1;
    string intHex1;
    string intHex2;
    unsigned long integer2;
    int hammingCount = 0;
    cout << "Enter two positive integers: " << endl;
    cin >> integer1;
    cin >> integer2;
    sstream1 << hex << integer1;//convert to hex. kind of a hack
    sstream2 << hex << integer2;
    intHex1 = sstream1.str();
    intHex2 = sstream2.str();
    //cout << intHex1 << intHex2;
    if (intHex1.length() < intHex2.length()) //add junk to shorter integers
    {
        for (int jj = intHex1.length(); jj < intHex2.length(); jj++)
        {
            intHex1.append("g");                                    //g is not in hex, so it's a junk char
           // cout << intHex1 << endl;
        }
    }
    if (intHex2.length() < intHex1.length()) //add junk to shorter integers
    {
        for (int jj = intHex2.length(); jj < intHex1.length(); jj++)
        {
            intHex2.append("g");
            //cout << intHex2 << endl;
        }
    }
    for(int ii = 0; ii < intHex1.length(); ii++) //calculate hamming distance
    {
        if (intHex1.at(ii)!=intHex2.at(ii))
        {
            hammingCount = hammingCount + 1;

        }
    }
    cout << "Hamming distance between " << integer1 << " and " << integer2 << " when numbers are in hex format is: " << hammingCount << endl ;
    return 0;
}
