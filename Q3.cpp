/*
	John Marcao
	EC327
	PA1 Q3
*/

#include <iostream>
#include <sstream>

using namespace std;

void leadingZeroFiller(string& num1, string& num2);

int main(){
	
	int num1, num2;
	stringstream stream1, stream2;
	int hammingDist = 0;
	
	cout << "Enter two positive integers:\n";
	cin >> num1; // Enter the inputs
	cin >> num2;
	
	//Load int num1 into the string stream, converting it to hex in the process
	//Then, store the string into a new variable
	stream1 << hex << num1;
	string num1Hex(stream1.str());
	
	stream2 << hex << num2; 
	string num2Hex(stream2.str());
	
	//If one of the numbers is in hex shorter than the other, pad the smaller with zeros to get accurate results
	leadingZeroFiller(num1Hex, num2Hex);
	
	//This for loop goes through each character in the two strings and comapres them
	//If they are different, increment the counter
	//Thanks to leadingZeroFiller, both are the same lenght, so I just use the lenght of num1Hex as a condition
	for (int i = 0; i < num1Hex.size(); i++){
		if(num1Hex[i] != num2Hex[i]){
			hammingDist++;
		}
	}

	cout << "Hamming Distance between " << num1 << " and " << num2 << " when numbers are in hex format is: " << hammingDist << endl;
	
	return 0;
}

//Functions
void leadingZeroFiller(string& num1, string& num2){
	int numberOfZeros;
	
	//Checks to see which string is shorter
	if (num1.size() > num2.size()){
		numberOfZeros = num1.size() - num2.size(); // Determines how many zeros are needed
		num2 = string(numberOfZeros, '0').append(num2); //Adds on the zeros to the front (so 45 -> 00045 for example)
	}
	else{
		numberOfZeros = num2.size() - num1.size();
		num1 = string(numberOfZeros, '0').append(num1);
	}
}
