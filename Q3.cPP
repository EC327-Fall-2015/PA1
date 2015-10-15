/*
Hamming distance between two sequences of equal length is the number of positions at which the corresponding symbols are different. 
Put another way, it measures the minimum number of substitutions required to change one string into the other, 
or the number of errors that transform one string into the other. 

Examples:
The Hamming distance between:
 	"toned" and "roses" is 3.
	1011101 and 1001001 is 2.
	2173896 and 2233796 is 3.
*/

#include <iostream>
using namespace std;
int main()
{
		//inputs will be strings
        string a, b;

        cout << "Enter two positive integers:" << endl;

        cin >> a >> b;

		// sets initial distance as zero
        int dist = 0;

		//tuns length of a into an integer
        int lengthA= a.length();

        for(int i=0; i<lengthA; i++)
        {
			
				//if index of both strings is the ame do't change the distance
                if(a[i] == b[i])
                {
                        dist+=0;
                }
				
				//if not increment the distance by one
                else
                {
                        dist++ ;
                }
        }
        cout << "Hamming distance between " << a << " and " << b << " when numbers are in hex format is: " << dist << endl;
}

