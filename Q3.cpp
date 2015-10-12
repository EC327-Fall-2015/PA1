#include <iostream>
using namespace std;

int hexCalc1(int num1, int num2) // compares all the single characters of both hex codes
{
	int hexCount = 1;
	int hamCount = 0;
	
	while (num1 != 0) // until one number is 0, keep going
	{
		hexCount = hexCount * 16; // used modulate operator and subtraction to model hexcode without having to actually find the code
		int a = num1 % hexCount;
		int b = num2 % hexCount;
		
		if (a != b)
		{
			hamCount += 1; // each time both numbers were different from each other, add a count
		}
		
		num1 -= a;
		num2 -= b;
	}	
	
	return hamCount;
}

int hexCalc2(int num1, int num2) // reversed the code of hexCalc1 because if one number reached 0, the loop would stop before comparison was over
{
	int hexCount = 1;
	int hamCount = 0;
	
	while (num2 != 0)
	{
		hexCount = hexCount * 16;
		int a = num1 % hexCount;
		int b = num2 % hexCount;
		
		if (a != b)
		{
			hamCount += 1;
		}
		
		num1 -= a;
		num2 -= b;
	}	
	
	return hamCount;
}

int main()
{
	int ent1;
	int ent2;
	int ham1;
	int ham2;
	
	cout << "Enter two positive integers: " << endl ;
	cin >> ent1 ;
	cin >> ent2 ;
	
	ham1 = hexCalc1(ent1, ent2); // called functions
	ham2 = hexCalc2(ent1, ent2);
	
	if (ham1 > ham2) // took higher value of the two functions
	{
		cout << "Hamming distance between " << ent1 << " and " << ent2 << " when numbers are in hex format is: " << ham1 << endl;
	}
	
	if (ham2 > ham1)
	{
			cout << "Hamming distance between " << ent1 << " and " << ent2 << " when numbers are in hex format is: " << ham2 << endl;
	}
	
	if (ham2 == ham1)
	{
			cout << "Hamming distance between " << ent1 << " and " << ent2 << " when numbers are in hex format is: " << ham2 << endl;
	}
	
	return 0;
}