#include <iostream>
#include <sstream>
#include <locale>
#include <string>
#include <algorithm>
 using namespace std;
 
 
 int main()
 {
	 int first;
	 cout << "Please Enter the first number: ";
	 cin >> first;
	 int second;
	 int input2;
	 cout << "Please Enter the second number: ";
	 cin >> input2;
	 int remainder;
	 string hex1;
	 string fin1;
	 string fin2;
	 string hex2;
	 int distance = 0;
	 while ( first != 0 )
	 {
		 remainder = first % 16;
		 second = first/16 ;
		 if (remainder == 10) //Letter should be A
		 {
			 hex1 = 'A';
			 fin1 += hex1;
			 
		 }
		 else if (remainder == 11) // Letter should be B
		{
			hex1 = 'B';
			fin1 += hex1;
			
		}
		 else if (remainder == 12) // Letter should be C
		 {
			 hex1 = 'C';
			 fin1 += hex1;
		 }
		 else if (remainder == 13) // Letter should be D
		 {
			 hex1 = 'D';
			 fin1 += hex1;
			 
		 }
		 else if (remainder == 14) // Letter should be E
		{
			hex1 = 'E';
			fin1 += hex1;
		}
		 else if (remainder == 15) // Letter should be F
		{
			hex1 = 'F' ;
			fin1 += hex1;
		}	
		else 
		{
			ostringstream convert;
			convert << remainder ;
			fin1 += convert.str();
		}
		first = second;		
	 } 
	 
	 // Input #2
	 
	  while ( input2 != 0 )
	 {
		 remainder = input2 % 16;
		 second = input2/16 ;
		 if (remainder == 10) //Letter should be A
		 {
			 hex2 = 'A';
			 fin2 += hex2;
			 
		 }
		 else if (remainder == 11) // Letter should be B
		{
			hex2 = 'B';
			fin2 += hex2;
			
		}
		 else if (remainder == 12) // Letter should be C
		 {
			 hex2 = 'C';
			 fin2 += hex2;
		 }
		 else if (remainder == 13) // Letter should be D
		 {
			 hex2 = 'D';
			 fin2 += hex2;
			 
		 }
		 else if (remainder == 14) // Letter should be E
		{
			hex2 = 'E';
			fin2 += hex2;
		}
		 else if (remainder == 15) // Letter should be F
		{
			hex2 = 'F' ;
			fin2 += hex2;
		}	
		else 
		{
			ostringstream convert;
			convert << remainder ;
			fin2 += convert.str();
		}
		input2 = second;		
	 } 
	 reverse (fin1.begin(),
	 fin1.end());
	 reverse (fin2.begin(),
	 fin2.end());
	 cout << "The first number in hexadecimal is: " << fin1 << endl;
	 cout << "The second number in hexadecimal is: " << fin2 << endl;
	 
	 //Hamming Distnace
	 int length = fin1.length();
	 int i;
	 for (i=0 ; i < length ; i++)
	 {
		 if (fin1[i] != fin2[i])
			 distance ++;
	 }
	 cout << "The Hamming Distance is: " << distance << endl;
	
	 return 0;
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 }