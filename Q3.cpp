#include <iostream>//these provide function that speed up the process such as int to hex converter and string streams
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;



int main()
{
	int input1;
	int input2;
	int hamming_distance;
	int hex1length;
	int hex2length;


	cout<<"Enter two positive integers: "<<endl;//user input
	cin>>input1;
	cin>>input2;

	stringstream stream1;//creates a stream: stream1
	stream1 << hex << input1;//saves input1 in hexdecimal format into stream1
	string hex1(stream1.str());//turns stream1 into a string called hex1


	stringstream stream2;//same as above but with different variables
	stream2 << hex << input2;
	string hex2(stream2.str());

	hex1length = hex1.size();//measures the length of the hexes
	hex2length = hex2.size();

	if (hex1length >= hex2length)//see if hex1 is longer or equal length than hex2
	{
		hamming_distance = hex1length - hex2length;//sets an origin for the hamming distance
		
		for (int n = 0; n < hex2length; n++)//calculates hamming distance using a for loop of length of the smallest hex length and adds it to origin
		{
			if (hex1[n] != hex2[n])
			{
				hamming_distance += 1;
			}
		}
	}
	
	else if (hex2length > hex1length)//does the same thing as above but with hex2 as the larger hex length
	{
		hamming_distance = hex2length - hex1length;
		
		for (int n = 0; n < hex1length; n++)
		{
			if (hex1[n] != hex2[n])
			{
				hamming_distance += 1;
			}
		}
	}
	
	cout<<"Hamming distance between "<<input1<<" and "<<input2<<" when numbers are in hex format is: "<<hamming_distance<<endl;//output
	return 0;

}