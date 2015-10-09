#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int number1, number2, rm1, rm2, counter = 1, ham = 0;

    cout << "Enter two positive integers:" <<endl;
    cin >> number1;
    cin >> number2;

    int copy1 = number1;
    int copy2 = number2;

    while (rm1 != 0 || rm2 != 0)
    {
         rm1 = number1 % (int)(pow(16, counter));
         rm2 = number2 % (int)(pow(16, counter));

         if (rm1 != rm2)
            ham += 1;

         number1 -= rm1;
         number2 -= rm2;

         counter += 1;
    }

    if (number1 != number2)
        ham += 1;

    cout << "Hamming distance between " << copy1 << " and "
         << copy2 << " when numbers are in hex format is: " << ham;
}
