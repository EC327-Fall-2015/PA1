#include <iostream>
using namespace std;

int main() {
	int base = 16; //hex base value
	int divisor1; //first positive number
	int divisor2; //second positive number
	int input1; //user input for first number + to save for final output
	int input2; //user input for first number + to save for final output
	int difference = 0; //hamming distance
	cout << "Enter two positve integers: " << endl;
	cin >> input1;
	cin >> input2;
	divisor1 = input1;
	divisor2 = input2;	
	

	while ((divisor1 != 0) && (divisor2 != 0)) { //when both are 0 haming distance is calculated
		int remainder1 = (divisor1 % 16);       //create remainder to find decimal to hex value of first number
		divisor1 = divisor1 / 16;				//this is for the loop to divde the next number and to check for 0
		int remainder2 = (divisor2 % 16);		//create remainder to find decimal to hex value of second number
		divisor2 = divisor2 / 16;				//this is for the loop to divde the next number and to check for 0
		if (remainder1 != remainder2) {         //if decimal to hex value is different, difference goes up 
			difference = difference + 1;
		}
		while ((divisor1 == 0) && (divisor2 > 0)) { //process if one divisor hits 0 before the other
			difference = difference + 1;
			remainder2 = (divisor2 % 16);
			divisor2 = divisor2 / 16;
		}
		while ((divisor1 > 0) && (divisor2 == 0)) { //process if one divisor hits 0 before the other
			difference = difference + 1;
			remainder1 = (divisor1 % 16);
			divisor1 = divisor1 / 16;
		}
	}
	cout << "Hamming distance between " << input1 << " and "<< input2 << " when numbers are in hex format is: " << difference << endl;
	return 0;
}

