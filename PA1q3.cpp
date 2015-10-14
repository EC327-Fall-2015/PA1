#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int in1;
	int in2;
	cout << "Enter two positive integers: " << endl ;
	// Ask the user to enter two integers to compare
	cin >> in1 >> in2;
    // Create two temporary stringstream objects
	stringstream temp1;
	stringstream temp2;
	// Convert them from int to a string in hex
	temp1 << hex << in1;
	temp2 << hex << in2;
	// Store the conversions in string variables
	string str1 = temp1.str(); 
	string str2 = temp2.str();
	int count = 0;
	// Use a for loop to loop through the strings and a counter
	// to store the Hamming Distance (when values at the same index don't match up)
	for (int i = 0; i < str1.length(); ++i)
	{
		if (str1[i] != str2[i])
			count++;
	}
	cout << "Hamming distance between " << in1 << " and " 
		 << in2 << " when numbers are in hex format is: " << count << endl;
	return 0;
}