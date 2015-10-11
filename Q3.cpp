#include <iostream> 
#include <string>
using namespace std;

string hex(int dec)
{	string hex = "";

	while (dec != 0)
	{	
		int hexval = dec%16;
		char chex = (hexval <= 9 && hexval >= 0) ?
		static_cast<char>(hexval +'0'):
		static_cast<char>(hexval - 10 +'A');
		
		hex = chex +hex;
		dec = dec/16;
	}
	return hex;
}

int main()
{ 
	cout << "Enter two positive integers:" << endl;
	int dec1;
	cin >> dec1;
	int dec2;
	cin >> dec2;

	string hex1;
	string hex2;
	hex1 = hex(dec1);
	hex2 = hex(dec2);

	int len1 = hex1.length();
	int hdist = 0;
	for (int i = 0; i<len1; i++)
	{
		if (hex1[i] != hex2[i])
			hdist++;
	}
	cout << "Hamming distnce between " << dec1 << " and " << dec2 << " when numbers are in hex format is:" << hdist << endl;
return 0;
}
