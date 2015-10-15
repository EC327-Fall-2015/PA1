#include <iostream>
#include "math.h"

using namespace std;


int main()
{

	long input1;
	long input2;
	long n1;
	long n2;
	
	cout << "Enter two positive integers:" << endl;

	cin >> input1;
	cin >> input2;	
	
	//make copies of the inputs for manipulation
	n1 = input1;
	n2 = input2;

	int ham = 0;

	while (n1 > 0 || n2 > 0){
	//keep testing until both numbers hit 0
	
		//extract the hex digit
		int d1 = n1 % 16;
		int d2 = n2 % 16;
		
		//if the digits are the different then
		//increase hamming dist by 1
		if(d1 != d2)
		{
			ham++;
		}
		
		//replace the old numbers
		n1 = n1 / 16;
		n2 = n2 / 16;
	}

	cout << "Hamming distance between " << input1 << " and " << input2 << " when numbers are in hex format is: " << ham << endl;

	return 0;
}
