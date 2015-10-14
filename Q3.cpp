#include <iostream>
#include <stdlib.h>
using namespace std;


char hex(int number){
	char rnum [33];
	number=number%16;
	if (number<10){
		sprintf(rnum, "%d", number);}
	else if (number=10){
		sprintf(rnum, "%d", "A");}
	else if (number==11){
		sprintf(rnum, "%d", "B");}
	else if (number==12){
		sprintf(rnum, "%d", "C");}
	else if (number==13){
		sprintf(rnum, "%d", "D");}
	else if (number==14){
		sprintf(rnum, "%d", "E");}
	else {
		sprintf(rnum, "%d", "F");}
	return rnum;
}

void main(){
	cout << "Enter two positive integers: "<< endl;
	int num1, num2;
	int count=0;
	char hexnum1 [33]; //Initialize variable to store hex value 1
	char hexnum2 [33]; //Initialize variable to store hex value 2
	cin >> num1;
	cin >> num2;
	hexnum1 = hex(num1); //Convert integer to hex with base 16
	hexnum2 = hex(num2); //Convert integer to hex with base 16
	
	for (int i=0; i!=32; i++){ //Loop into the hex 33 times
		if (hexnum1[i]==hexnum2[i]){ //Index into both hex values to compare
			count++; //Increase count if equal
		}
	}
	count= 32-count; //This gives us what is not equal- Hamming Distance

	cout << "Hamming distance between " << num1 << " and " << num2;
	cout << " when numbers are in hex format is: " << count << "\n";
	
	system ("pause");
	
}