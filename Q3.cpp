#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int num1;
	int num2;
	cout << "Enter two positive integers:"<< endl;
	cin >> num1 >> num2; //user number input
int newnum = num1;
int newnum2 = num2;
int hcount=0; //counter
int rem1;
int rem2;
	
if (newnum > newnum2) //greater number will hold more digits
{
	while (newnum > 0)
	{
		rem1= newnum % 16; //remainder for hex conversion
		newnum= newnum/16; //divide first number by 16
		rem2= newnum2 % 16;
		newnum2= newnum2/16; //second number calculations

		if (rem1 != rem2) //compare both hex values
			hcount += 1;

		newnum2 = (int)floor(newnum2); //round down to lowest int
		newnum = (int)floor(newnum);
	}
}
else
{
	while (newnum2 > 0)
	{
		rem2= newnum2 % 16;
		newnum2= newnum2/16; //second number calculations
		rem1= newnum % 16; //remainder for hex conversion
		newnum= newnum/16; //divide first number by 16

		if (rem1 != rem2) //compare both hex values
			hcount += 1;

		newnum = (int)floor(newnum);
		newnum2 = (int)floor(newnum2);
	}
}


cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in hex format is: " <<  hcount << endl;
}