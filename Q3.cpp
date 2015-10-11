#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;

	cout << "Enter two positive integers:\n";
	cin >> num1;
	cin >> num2;

	
	
	
	//Converting decimal to hex (for num1)
	int input1;
	int i1 = 1;
	char hexnum1[50];
	input1 = num1;

	while (input1 != 0) {
		int holder;

		holder = input1 % 16;
		
		if (holder < 10)				//This if else converts numbers to ASCII values. (nums to letters)
			holder = holder + 48; 
		else
			holder = holder + 55;
		
		hexnum1[i1] = holder;			//This puts all the characters in a string
		input1 = input1 / 16;
		i1++;

	}

	int j1 = i1 - 1;					//Since the above loop put numbers in as it divided from the left side of the number
	do {								// this flips it back to normal ---- ex) 45D becomes D54
		hexnum1[j1];			
		j1--;

	} while (j1 > 0);


	//Converting decimal to hex (for num2)
	int input2;
	int i2 = 1;
	char hexnum2[50];
	input2 = num2;

	while (input2 != 0) {
		int holder;

		holder = input2 % 16;

		if (holder < 10)				//This if else converts numbers to ASCII values. (nums to letters)
			holder = holder + 48;
		else
			holder = holder + 55;

		hexnum2[i2] = holder;			//This puts all the characters in a string
		input2 = input2 / 16;
		i2++;

	}


	int j2 = i2 - 1;					//Since the above loop put numbers in as it divided from the left side of the number
	do {								// this flips it back to normal ---- ex) 45D becomes D54
		hexnum2[j2];
		j2--;
		

	} while (j2 > 0);







	//Comparing the two hex numbers
	int counting = 1;
	int total = 0;
	
	while (counting <= (i1 - 1) || counting <= (i2 - 1))      // Will run until smallest hex number is done (digit by digit)
	{
		if (hexnum1[counting] != hexnum2[counting])			 // If hex one is not equal to hex two (digit by digit) then add one to the counter (total)
			total++;


		counting++;
	}

	cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in hex format is: " << total << endl;
	

	return 0;
}