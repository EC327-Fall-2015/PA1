#include <iostream>
using namespace std;

int main()
{
  //Declaring variables
  int num1;
  int num2;
  int hex1;
  int hex2;
  int remainder1;
  int remainder2;
  int compare;
  int firstnum;
  int secondnum;
  //Setting compare to zero to use as a counter for later
  //User inputs numbers below
	compare = 0;
	cout << "Enter two positive integers: " << endl;
	cin >> num1;
	cin >> num2;
	firstnum = num1;
	secondnum = num2;
	//Turns decimal numbers user input to hex by dividing by 16 and using the remainder to determine the hex value
	//Then compares the first number to the second number
	//The counter determines the number of differences between the 2 numbers
	do
	{
	
		remainder1 = num1 % 16;
		num1 = num1 / 16;
			if(remainder1 < 10)
				{ 
				  hex1 = remainder1;
				}
			else if(remainder1 == 10)
				{
				  hex1 = 'A';
				}
			else if(remainder1 == 11)
				{
				  hex1 = 'B';
				}
			else if(remainder1 == 12)
				{
				  hex1 = 'C';
				}
			else if(remainder1 == 13)
				{
				  hex1 = 'D';
				}
			else if(remainder1 == 14)
				{
				  hex1 = 'E';
				}
			else if(remainder1 == 15)
				{
				  hex1 = 'F';
				}
		
			
		
		remainder2 = num2 % 16;
		num2 = num2 / 16;
			if(remainder2 < 10)
				{ 
				  hex2 = remainder2;
				}
			else if(remainder2 == 10)
				{
				  hex2 = 'A';
				}
			else if(remainder2 == 11)
				{
				  hex2 = 'B'; 
				}
			else if(remainder2 == 12)
				{
				  hex2 = 'C';
				}
			else if(remainder2 == 13)
				{
				  hex2 = 'D';
				}
			else if(remainder2 == 14)
				{
				  hex2 = 'E';
				}
			else if(remainder2 == 15)
				{
				  hex2 = 'F';
				}
			
	         if(hex1 != hex2)
		   {
		     compare = compare++; //Increments compare to determine final hamming difference
		   }
	} while(remainder1 != 0 || remainder2 != 0);
	//Final output statement that prints the hamming distance
	cout << "Hamming distance between " << firstnum << " and " << secondnum << " when numbers are in hex format is: " << compare << endl;
	
	

return 0;

	
}
