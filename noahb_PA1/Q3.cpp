#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//Declare variables as integers
	int number_1, number_2, hex_1, hex_2, hamming_distance, largest_hex_place_1, largest_hex_place_2;

	//Prompt user to enter two positive integers and initialize number_1 and number_2 with them
	cout << "Enter two positive integers:" << endl;
	cin >> number_1 >> number_2;
 
	//Determine the largest power of 16 that goes into number_1 and store this in largest_hex_place_1
	for (int i = 0; (number_1 / int(pow(16, i))) > 0; i++)
		{
			largest_hex_place_1 = i; 
		}

        //Determine the largest power of 16 that goes into number_2 and store this in largest_hex_place_2
        for (int j = 0; (number_2 / int(pow(16, j))) > 0; j++)
                {
                        largest_hex_place_2 = j;
                }
	
	//without this, the code skips over the next for loop
	max(largest_hex_place_1, largest_hex_place_2);
	
	/* For each number in the hex place, add one to hamming_distance if the two numbers are unequal (for reference, the first hex_1 will be the
	 value in the largest place in hex) */

	for (int k = max(largest_hex_place_1, largest_hex_place_2); k >= 1; k--)
		{
			hex_1 = (number_1 / int(pow(16, k))) % 16;
			hex_2 = (number_2 / int(pow(16, k))) % 16;
 
			if (hex_1 != hex_2)
				{
					hamming_distance++;
				}
		}	
	
	//check the last digit of hex
	if ((number_1 % 16) != (number_2 % 16))
		{
			hamming_distance++;
		}
	
	//Relay to the user the Hamming distance
	cout << "Hamming distance between " << number_1 << " and " << number_2 << " when numbers are in hex format is: " << hamming_distance << endl;

	return 0;
}
