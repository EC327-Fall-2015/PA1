#include <iostream> 
using namespace std;

int main()
{
	// Ask user to input two positive integers
	int n, m;
	
	cout << "Enter two positive integers: " << endl;
	cin >> n >> m;
	
	// Create a char array whose index = the hex number of the index
	char hexNum[] = "0123456789ABCDEF";
	int rem_m,rem_n;
	int i;
	
	// Do-while loop that converts n & m into hex code, and then increments counter i when the hex code does not match
	do
	{
		rem_n = n % 16;
		rem_m = m % 16;
		
		if (hexNum[rem_n] != hexNum[rem_m])
			i++;
		
		n = n / 16;
		m = m / 16;
		
	} while (n != 0 && m != 0);
	
	
	// Print out the hamming distance
	cout << "Hamming distance between " << n << " and " << m << " when numbers are in hex format is: " << i << endl;


	return 0;
}
