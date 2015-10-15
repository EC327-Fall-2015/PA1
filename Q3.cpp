/*
ssshahin_PA1
Q3.cpp
Hamming Distance
How different two integers are in hex using Hamming distance
*/

#include <iostream>
#include <limits>
//#include <cstdlib>

using namespace std;

//declare functions
int measureHammingHex(const int& a, const int& b);
//computes Hamming distance of two ints in hex.

int power(int base, int exponent);
//calculates result of base raised to exponent, returns result. ONLY FOR POSITIVE EXPONENTS (which is all I need in this case)

bool isInt(double num);
//checks if input double is an integer

int validInputOnly();
//checks for numeric input only

//main function
int main(){
	//declare variables

	int input1, input2;
	/*
	int test = 0xFA;
	test += 0xA;
	cout<<test<<endl;
	int another1 = 36, another2 = 36;
	cout<<measureHammingHex(another1, another2)<<endl;
	*/

	cout<<"Enter two positive integers:"<<endl;
	
	input1 = validInputOnly();
	
	input2 = validInputOnly();


	cout<<"Hamming distance between "<<input1<<" and "<<input2<<" when numbers are in hex format is: "<<measureHammingHex(input1, input2)<<endl;

	return 0;
}


//computes hamming distance of two ints in hex

int measureHammingHex(const int& a, const int& b){
	int distance = 0, divA, divB, hexPow = 0;
	//distance is for the hamming distance. divA and divB are the value of the hex place in a and b, respectively
	//hexPow holds power of 16 currently on


	if (a > b){
		while (a / power(16, hexPow) >= 16 ){
			hexPow ++;
		}
	}else {
		while (b / power(16, hexPow) >= 16 ){
			hexPow ++;
		}

	}

	//for each power of 16, checks if a and b give same result. if not, then distance +1
	while (hexPow >= 0){
		//for current place, value in hex is number divided by 16^place, minus the divisions above this place
		divA = ( a / power(16, hexPow) ) - ( a / power(16, hexPow + 1 ) ) * 16;
		divB = ( b / power(16, hexPow) ) - ( b / power(16, hexPow + 1 ) ) * 16;

		if (divA != divB)
			distance ++;

		hexPow --;
	}

	return distance;
}

int power(int base, int exponent){
	int result = 1;

	//for exponent == 0, for loop doesn't run
	for(int i = 0; i < exponent; i++){
		result *= base;	
	}

	if (exponent < 0)
		result = 0;

	return result;
}

//checks if double is equivalent to an int
bool isInt(double num){
	bool check = ( (int) num == num );

	return check;
}

int validInputOnly(){
	int input;

	double rawinput;

	cin>>rawinput;

	do{
		if(cin.fail()){
			cin.clear();
			//cin.ignore is for when you type random gibberish when I want only doubles
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout<<"Please input a positive integer: ";

			cin>>rawinput;

		}else if(rawinput <= 0 || ((int) rawinput != rawinput)){
			cout<<"Please input a positive integer: ";

			cin>>rawinput;

		}
		

	} while(cin.fail() || rawinput <= 0 || ((int) rawinput != rawinput) );

	input = rawinput;

	return input;
}
