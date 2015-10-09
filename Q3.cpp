#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1, num2, n1, n2, ham_dist;
	string num1_str ("");
	string num2_str ("");
	
	// Receive Input
	cout << "Enter two positive integers: " << endl;
	cin >> num1;
	cin >> num2;

	// copy nums for output
	n1 = num1;
	n2 = num2;
	
// Calculate Hamming Distance
	// Convert cin of num1,num2 to hex string
	// num1 -> hex
	for (int i = 8; i > 0; i--)
	{
	// determine rightmost digit
		switch(num1 % 16)
		{
			case 0:
				num1_str.insert(0, 1, '0');
				break;
			case 1:
				num1_str.insert(0, 1, '1');
				break;
			case 2:
				num1_str.insert(0, 1, '2');
				break;
			case 3:
				num1_str.insert(0, 1, '3');
				break;
			case 4:
				num1_str.insert(0, 1, '4');
				break;
			case 5:
				num1_str.insert(0, 1, '5');
				break;
			case 6:
				num1_str.insert(0, 1, '6');
				break;
			case 7:
				num1_str.insert(0, 1, '7');
				break;
			case 8:
				num1_str.insert(0, 1, '8');
				break;
			case 9:
				num1_str.insert(0, 1, '9');
				break;
			case 10:
				num1_str.insert(0, 1, 'a');
				break;
			case 11:
				num1_str.insert(0, 1, 'b');
				break;
			case 12:
				num1_str.insert(0, 1, 'c');
				break;
			case 13:
				num1_str.insert(0, 1, 'd');
				break;
			case 14:
				num1_str.insert(0, 1, 'e');
				break;
			case 15:
				num1_str.insert(0, 1, 'f');
				break;
		}
		// updatenum1
		num1 = (num1 - (num1 % 16))/16;
	}
	
	// num2 -> hex
	for (int i = 8; i > 0; i--)
	{
		// determine rightmost digit
		switch(num2 % 16)
		{
			case 0:
				num2_str.insert(0, 1, '0');
				break;
			case 1:
				num2_str.insert(0, 1, '1');
				break;
			case 2:
				num2_str.insert(0, 1, '2');
				break;
			case 3:
				num2_str.insert(0, 1, '3');
				break;
			case 4:
				num2_str.insert(0, 1, '4');
				break;
			case 5:
				num2_str.insert(0, 1, '5');
				break;
			case 6:
				num2_str.insert(0, 1, '6');
				break;
			case 7:
				num2_str.insert(0, 1, '7');
				break;
			case 8:
				num2_str.insert(0, 1, '8');
				break;
			case 9:
				num2_str.insert(0, 1, '9');
				break;
			case 10:
				num2_str.insert(0, 1, 'a');
				break;
			case 11:
				num2_str.insert(0, 1, 'b');
				break;
			case 12:
				num2_str.insert(0, 1, 'c');
				break;
			case 13:
				num2_str.insert(0, 1, 'd');
				break;
			case 14:
				num2_str.insert(0, 1, 'e');
				break;
			case 15:
				num2_str.insert(0, 1, 'f');
				break;
		}
		// update num2
		num2 = (num2 - (num2 % 16))/16;
	}

	// Compare strings
	for (int i = 0; i < 8; i++)
	{
		if (num1_str[i] != num2_str[i])
		{
			ham_dist++;
		}
	}
	
	// Display Results
	cout << "Hamming distance between " << n1 << " and " << n2;
	cout << " when numbers are in hex format is: " << ham_dist << endl;

	return 0;
}
