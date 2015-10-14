#include <iostream>
#include <stdlib.h>

using namespace std;

void calc_ham(unsigned int num_1, unsigned int num_2)
{
  double hex1[8]; // 8 is max length of a 32 bit integer in hexadecimal format

  int hex2[8];

  unsigned int result1 = num_1; // keeps running totals of decimal inputs

  unsigned int result2 = num_2;

  int hex_count1 = 0; // measures rough hexadeicmal length 

  int hex_count2 = 0; 

    do
      {	
	hex1[hex_count1] = (result1 % 16); 

	result1 = result1 / 16;
	
	hex_count1 = hex_count1 + 1;
      }
    while(result1 != 0);

    do
      {
	hex2[hex_count2] = (result2 % 16);
	
	result2 = result2 / 16;

	hex_count2 = hex_count2 + 1;
      }
    while(result2 != 0);
    
    int comp_size;
    
    int ham = abs(hex_count1 - hex_count2); // determines if length of hex values are different

    if(ham == 0) // sets comparison range if hex values are of different lengths
      comp_size = hex_count1;

    else // sets comparison range if hex values are of same lengths
      comp_size = min(hex_count1, hex_count2);
    
        
    for(int i = (comp_size - 1); i != -1; i--) // calculates hamming value
      {	
	if(hex1[i] != hex2[i])
	  {
	    ham = ham + 1;
	  }
      }
    
    cout << "Hamming distance between " << num_1 << " and " << num_2 << " when numbers are in hex format is: " << ham;
    
    return;
}

int main()
{

  unsigned int num_1;

  unsigned int num_2;

  cout << "Enter two postive integers: " << endl;

  cin >> num_1;

  cin >> num_2;

  calc_ham(num_1, num_2);

  return 0;

}
