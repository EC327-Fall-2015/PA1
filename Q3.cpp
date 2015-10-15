#include <iostream>
#include <string> // for using strings and length()

using namespace std;

string hex(int n) 		//function that turns decimal int into hex string
{
	int remain;
	char rchar = '\0'; 
	string hex = ""; 
	while (n > 0)
	{
		remain = n % 16;
		n = n / 16;
		if (remain > 0 && remain < 10)
		{
			rchar = remain + 48;
		}
		else if (remain < 16 && remain > 9)
		{
			rchar = remain + 87; 
		}
		hex = rchar + hex;
	}
	return hex;
}


int main()
{
	int n;
	int m;
	char buffer [33];
	cout << "Enter two positive integers: " << endl;
	cin >> n;
	cin >> m; 
	string nhex;
	string mhex;
	nhex = hex(n); // converting n and m to hex
	mhex = hex(m);
	int size;
	if (nhex.length() < mhex.length()) 	// finds the size of the smaller number
	{
		size = nhex.length();
	}
	else
	{
		size = mhex.length();
	}
	int ham = 0;
	int c;
	for (c = 0; c < size; c ++ ) 	
	{
		if (nhex[c] == mhex[c])
		{
			ham = ham;
		}
		else		// adds to the number for eac number that is different
		{
			ham++;
		}
	}
	cout << "Hamming distance between " << n << " and " << m << " when numbers are in hex format is: " << ham << endl;
	return 0;
} 