#include <iostream>
using namespace std;

int main()
{
	//variables for the users input
	int one; 
	int two;
	cout << "Enter two positive integers: " << endl;
	cin >> one;
	cin >> two;

	int ham = 0; //the hamming distance
	
	//a and b are used to do the division
	int a = one;
	int b = two;

	//r1 and r2 are the remainders of the modular division
	int r1;
	int r2;
	int loop = 0;

	do{
		r1 = a % 16;
		r2 = b % 16;

		a = a / 16;
		b = b / 16;

		//if the remainders are different, hamming distance increases by one
		if (r1 != r2) 
		{
			ham++;
		}
		//this is basically a check for if the number is 0 to calculate the hamming difference
		else if (loop!=0 && ((a==0 && r1==0)&& !(b==0 && r2==0)) || ((b == 0 && r2 == 0) && !(a == 0 && r1 == 0)))
		{
			ham++;
		}

		loop++;

	} while (!(a==0 && b==0)); //this loop will run until both numbers get down to 0 

	cout << "Hamming distance between " << one << " and " 
		<< two << " when numbers are in hex format is: " << ham << endl;
	
	return 0;
}