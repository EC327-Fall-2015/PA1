//Emily Ubik
//Programming Assignment 1
//Question 3

#include <iostream>
#include <sstream> //This library is included to help convert the user's inputed integers into hexidecimal. 

using namespace std;

int main()
{
	int first;

	int second;

	int hamming = 0;
	
	cout << "Enter two positive integers: " << endl;

	cin >> first;

	cin >> second;

	if ( first > 0)
	{
		std::stringstream ss; // stringstream is the class used
	
		ss << std::hex << first;

		std::string hex_first ( ss.str() ); // initializing new string hex_first // str is ised to get/set content
	
		if (second > 0)
		{	
			std:: stringstream ss;
			
			ss << std::hex << second;
		
			std::string hex_second (ss.str() );
		
			int length_first = hex_first.length();
			
			int length_second = hex_second.length();

			for (int i = (length_first); i != 0; i--)		
			{				
				int k = i - 1;

				if ( hex_first.at(k) != hex_second.at(k) )
				{
					hamming = hamming + 1;
				
					if (k >= 0) //I know this is going to print multiple couts (it should print the right hamming number eventually I think). I just couldn't figure out how to print just the last one and still be correct.			
					{
						cout << "Hamming distance between " << first << " and " << second << " when numbers are in hex format is: " << hamming << endl;		
					}
				}
				

				if (i == 1 && hamming == 0)
				{
					cout << "Hamming distance between " << first << " and " << second << " when numbers are in hex format is: " << hamming << endl;  
				}	              

			}
		}
	}
 
return 0;
}


