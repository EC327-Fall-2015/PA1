#include <iostream> 
#include <math.h> 

using namespace std; 

int main()
{	
	int power = 1, hamcount = 0, first, second, first1, second1;	

	cout << "Enter two positive integers: " << endl; 
	cin >> first;
	cin >> second;
	
	first1 = first; 
	second1 = second; 
	
	int value1, value2;
	
	while ((value1 !=0 ) || (value2 != 0))	// run loop until last digit 
	{	
		value1 = first1 % (int)(pow (16,power)); 	// first hex value 
		
		value2 = second1 % (int)(pow (16,power));
		
		if (value1 != value2)			// if digits are not the same 
			hamcount += 1;				// inc hamcount -- (difference counter)
			
		first1 -= value1;				// subtract remainder from each 
		second1 -= value2;
		power += 1;						// inc power of 16
	}
	
	if (value1 != value2)				// comparing final end digit 
		hamcount += 1;
	
	cout << "Hamming distance between "  << first << " and " 
	<< second << " when numbers are in hex format is: " << hamcount << endl;		
}
