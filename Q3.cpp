#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1, n2, store_n1, store_n2, len1, len2, length, ham;
    string x, hex1, hex2;
    x = "0123456789ABCDEF"; //16 number symbols (base 16 for hex)
    ham = 0; //initialize ham

    cout << "Enter two positive integers: \n";
    cin >> n1 >> n2;
    store_n1 = n1; //save n1 for later use
    store_n2 = n2; //save n2 for later use

    //code citation for changing decimal number to hex found on CPlusPlus website: http://www.cplusplus.com/forum/beginner/108837/
    while (n1 > 0)
    {
        hex1 = x[n1 % 16] + hex1; //hex form of n1
        n1 /= 16;
    }

    while (n2 >  0)
    {
        hex2 = x[n2 % 16] + hex2; //hex form of n2
        n2 /= 16;
    }

    len1 = hex1.length(); //length of hex1
    len2 = hex2.length(); //length of hex2

    // compute length of hex1 and hex2; longest length will be end point for the FOR loop below
    if (len1 >= len2)
    {
        length = len1;
    }
    else
    {
        length = len2;
    }

    //compute hamming distance
    for (int i=0; i < length; i++) //for each character in hex1/hex2
    {
        if (hex1[i] != hex2[i]) //if each char in the hex1 isn't equal to hex2, add increment ham by 1
        {
            ham++; //ham = hamming distance
        }
    }

    //print output
    cout << "Hamming distance between " << store_n1 << " and " << store_n2 << " when numbers are in hex format is: " << ham << endl;

    return 0;

}
