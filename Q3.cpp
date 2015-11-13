#include <iostream>

using namespace std;

int main()
{
	//declare two integer variables
	int orgnum1;
	int orgnum2;

	//user input the two integers
	cout << "Enter two positive integers: " << endl;
	cin >> orgnum1;
	cin >> orgnum2;
	
	//declaring variables for hamming distance and remainders
	int num1 = orgnum1;	
	int num2 = orgnum2;
	int hamd = 0;
	int rem1;
	int rem2;
	
	//note: when using "/" to divide integers, the result is an integer!
	do {
	    //hex from right to left for FIRST number
	    rem1 = num1 % 16;
	    num1 = num1 / 16;

	    //hex from right to left for SECOND number		
	    rem2 = num2 % 16;
	    num2 = num2 / 16;
	    
	    // if the remainders are not the same, then hamming distance is incremented
	    if (rem1 != rem2)
		hamd = hamd++;
	} while(rem1 != 0 || rem2 != 0);

	cout << "Hamming distance between " << orgnum1 << " and " << orgnum2 << " when numbers are in hex format is: " << hamd << endl;

	return 0;
}
