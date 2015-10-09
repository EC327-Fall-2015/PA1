#include <iostream>
#include <sstream> //strings and convert string

using namespace std;

int main()
{
	
	int int1 = 0, int2 = 0, length = 0, distance = 0, hex1 = 0 , hex2 = 0; //declare variables = 0 for later use
	string alpha = "", beta = ""; //strings for when converting input integers into hex
	
	cout << "Enter two positive integers: ";
	cin >> int1 >> int2; 
	hex1 = int1; //copy integer inputs into hex1 for later printing
	hex2 = int2;

	do   							// loop until conversion is complete 
	{
		int whole = int1 / 16;		
		int rem = int1 % 16;		//corresponds to hexadecimal number

		switch (rem)				//to convert dec to hex according to the remainder 
		{
			case(10):
				alpha += 'A';
				break;

			case(11):
				alpha += 'B';
				break;

			case(12):
				alpha += 'C';
				break;

			case(13):
				alpha += 'D';
				break;

			case(14):
				alpha += 'E';
				break;

			case(15):
				alpha += 'F';
				break;
		
			default:
			
				ostringstream convert;		//converts numeric remainder < 10 into a string as that is its hex symbol
				convert << rem;
				alpha += convert.str();
				break;
		}

		int1 = whole;
	}while(int1!=0);

		do 						//same thing done for int1 now to int2
{
		int whole = int2 / 16;
		int rem = int2 % 16;
		switch (rem)
		{
			case(10):
				beta += 'A';
				break;

			case(11):
				beta += 'B';
				break;

			case(12):
				beta += 'C';
				break;

			case(13):
				beta += 'D';
				break;

			case(14):
				beta += 'E';
				break;

			case(15):
				beta += 'F';
				break;
		
			default:
			
				ostringstream convert;
				convert << rem;
				beta += convert.str();
				break;
		}

	int2 = whole;
}while(int2!=0);

length = alpha.length(); 		//find the length of string alpha in order to set for loop 

	for (int i = 0; i < beta.length(); i++)
	{
		if (alpha[i] != beta[i])		//compare the char of strings alpha and beta one by one 
			{
				distance++;				//if characters differ, the hamming distance +1
			}
	}
	cout << "Hamming distance between " << hex1 << " and " << hex2 << " when numbers are in hex format is: " << distance;

return 0;

}
