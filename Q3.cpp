#include <iostream>
using namespace std;
int main() {
	cout << "Enter two positive integers: " << endl;
	int num1 = 0, place1 = 0; //place1,place2 just placeholders to print original number at end of program
	//cout << "Number 1: ";
	cin >> num1;
	place1 = num1;
	//cout << "Number 2: ";
	int num2 = 0, place2 = 0;
	cin >> num2;
	place2 = num2;
	int hamDist = 0;
	/*'converts' to hex, compares remainder which stands in place of hex value, then uses 
	divided number and repeats until one of the numbers is sufficiently small enough*/
	while (num1 > 0 && num2 > 0) {
		int mod1 = num1 % 16;
		int mod2 = num2 % 16;
		// if loop increments hamDist
		if (mod1 != mod2) {
			hamDist++;
			}
		num1 = num1 / 16;
		num2 = num2 / 16;
	}
	//this is for if one digit is longer than the last, each additional hex value adds one to hamDist
	while (num1 > 0 || num2 > 0) {
		num1 = num1 / 16;
		num2 = num2 / 16;
		hamDist++;
	}
	cout << "Hamming distance between " << place1 << " and " << place2 << " when numbers are in hex format is: " << hamDist << endl;
	return 0;
}
