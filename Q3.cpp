#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


int main ()
{
	int count = 0;
	int num1, num2, digit1, digit2;
	cout<< "Enter two positive integers:"<<endl;
	cin >> num1;
	cin >> num2;
	
	while(num1 != 0 && num2 != 0)
		{
			digit1 = num1 % 16;
			digit2 = num2 % 16;

			if(digit1 != digit2)
			{
				count++;
			}
				
			num1 = num1/16;
			num2 = num2/16;

		}

	cout << "Hamming distance between " << num1 << "and" << num2 << "when numbers are in hex format is: " << count << endl;
	
}