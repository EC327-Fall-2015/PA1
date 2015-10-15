#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

string convertHex();

int main()
{
    char s1 [15];
    char s2 [15];
    int num1, num2;
    int ans = 0;

    cout<<"Enter two positive integers: ";
    cin>>num1;
    cin>>num2;

    int i = 0;
    while (i < 16)
    {
        s1[i] = 0;
        s2[i] = 0;
        i += 1;
    }

    itoa(num1, s1, 16);
    itoa(num2, s2, 16);

    int j = 0;
    while (j < 15)
    {
        if (!(s1[j]==s2[j]))
        {
            ans += 1;
        }

        j++;
    }
    cout<<"Hamming distance between "<<num1<<" and "<<num2<<" when numbers are in hex format is: "<<ans<<endl;
    return 0;
}
