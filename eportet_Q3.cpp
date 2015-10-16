#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
	long int num1, num2, remainder1, remainder2, quotient1, quotient2;
	int i1=1, i2 = 1, j1, j2, temp1, temp2, x = 0;
	char hex1[100], hex2[100];
	string str1[100], str2[100];

	cout<< "Enter two positive integers:"<<endl;
	cin>> num1;
	cin>> num2;

	// converting num1 to hex into str1
	quotient1 = num1;
	while(quotient1!=0) {
		
		temp1 = quotient1 % 16;

		//To convert integer into character
		if ( temp1 < 10)
		temp1 = temp1 + 48;
		else
		temp1 = temp1 + 55;

		hex1[i1++]= temp1;
		quotient1 = quotient1 / 16;
	}

	for(j1 = i1 -1 ;j1> 0;j1--)
		str1[j1] += hex1[j1];


	// converting num2 to hex into str2
	quotient2 = num2;
	while(quotient2!=0) {
		
		temp2 = quotient2 % 16;

		//To convert integer into character
		if ( temp2 < 10)
		temp2 = temp2 + 48;
		else
		temp2 = temp2 + 55;

		hex2[i2++]= temp2;
		quotient2 = quotient2 / 16;
	}

	for(j2 = i2 -1 ;j2> 0;j2--)
		str2[j2] += hex2[j2];

	// comparing str1 and str2
	for(j1 = i1 -1 ;j1> 0;j1--) {
		if (str1[j1] != str2[j1]) {
			x++;
		}
	}

	cout << "Hamming distance between "<<num1<<" and "<<num2<<" when numbers are in hex format is: "<<x<<endl;


}
