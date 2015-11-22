#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

int main()
{
	int decimalOne, decimalTwo;
	cout << "Enter length for the first decimal value: ";
	cin >> decimalOne;
	cout << "Enter length for the second decimal value: ";
	cin >> decimalTwo;


	int diff = decimalOne^decimalTwo;
	unsigned low4bits = diff & 0xF;
	int weight;
	
	for(int i=0; i<32; i+=4)
	{
		int shifted = diff >> i;
		low4bits = shifted & 0xF;
		if (low4bits != 0)
		{
			weight++;
		}
	}

	cout << "Hamming distance between " << decimalOne << " and " << decimalTwo << " when numbers are in hex format is: " << weight << "."; 

	return 0;
}

