#include <iostream>

using namespace std;

//Initialize variables

int number_1;

int number_2;

int hamming_dist;

//Comparison function compares the hexadecimal digits and increments the hamming_dist variable if digits are different

int comparison_function(int number_a,int number_b)
{
	if (number_a != number_b)
	{
		hamming_dist = (hamming_dist+1);
	}
	else
	{
		return (0);
	}
}

//Function that checks the hamming distance by using the conversion formula for decimal to hexadecimal

//The modulo operator finds the digit that is checked for hamming distance, the quotient is the reduced number, following the conversion formula

//The hamming distance function repeats itself until the two numbers can no longer be reduced

int hamming_dist_check()
{
	int hexy_check_1;
	
	int hexy_check_2;
	
	hexy_check_1 = (number_1%16);
	
	hexy_check_2 = (number_2%16);
	
	comparison_function(hexy_check_1, hexy_check_2);
	
	number_1 = (number_1/16);
	
	number_2 = (number_2/16);
	
	if (number_1+number_2==0)
	{
		return (0);
	}
	else
	{
		hamming_dist_check();
	}
}

//Main function

int main()
{
	//Requests two positive integers
	
	cout<<"Enter two positive integers: "<<endl;
	
	//Input
	
	cin>>number_1;
	
	cout<<endl;
	
	cin>>number_2;
	
	//Initialize variables for printing
	
	int for_print_num_1;
	
	int for_print_num_2;
	
	for_print_num_1 = number_1;
	
	for_print_num_2 = number_2;
	
	//Endline, runs hamming distance checker function
	
	cout<<endl;
	
	hamming_dist_check();
	
	//Prints the hamming distance
	
	cout<<"Hamming distance between "<<for_print_num_1<<" and "<<for_print_num_2<<" when numbers are in hex format is "<<hamming_dist<<"."<<endl;
	
	return (0);
}
