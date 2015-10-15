#include <iostream>
#include <string.h>

using namespace std;
string a;
string b;

//function prototyping
int compareHam(int,int);
string convertIntHex(int);

int main()
{
	//declare the two numbers
	int ham1;
	int ham2;
	cout<<"Enter two positive integers: "<<endl;
	cin>>ham1>>ham2;
	//calls function compareHam to determine the hamming distance
	int answer=compareHam(ham1,ham2);
	//prints out in desired format
	cout<<"Hamming distance between "<<ham1<<" and "<<ham2<<" when numbers are in hex format is: "<<answer<<endl;
	
}
//compareHam takes in two ints, converts them to hex and determines the hamming distance.
int compareHam(int firstN, int secondN)
{
	//calls convertIntHex to change the input ints to hex in forms of strings.
	a=convertIntHex(firstN);
	b=convertIntHex(secondN);
	//declare a hammingDis variable as a hamming distance counter
	int hammingDis=0;
	//determine which hex form is longer or shorter
	int lenA;
	lenA = strlen(a.c_str());
	int lenB;
	lenB = strlen(b.c_str());
	int i;
	//if the first hex string is longer than the second, or equal to
	if (lenA>=lenB)
	{
		//iterates through each string, comparing each char with its respective char in the other string.
		for(i=0;i<lenB;i++)
		{
			if (a[i]!=b[i])
			{
				//add to the hammingDis counter whenever its not equal
				hammingDis+=1;
			}
		}
		//accounts for the number of digits that the first hex is longer than second one
		hammingDis=hammingDis+(lenA-lenB);
	}
	//if the second hex string is longer than the second.
	else if (lenA<lenB)
	{
		//iterates the same way as above.
		for (i=0;i<lenA;i++)
		{
			if(a[i]!=b[i])
			{
				//add to hammingDis counter whenever its not equal.
				hammingDis+=1;
			}
		}
		//accounts for the difference in length and adds to hammingDis.
		hammingDis=hammingDis+(lenB-lenA);
	}
	return hammingDis;
	

}
//this function converts an int to its hex value.
string convertIntHex(int inputt)
{
	int dNum=inputt;
	string returnThis;
	//continues doing this until the result becomes zero
	while (dNum!=0)
	{
		//basically divides int by 16 and takes its remainder
		switch(dNum%16)
		{
			//in all cases, adds the current letter or number to the front of the string to be returned
			case 10:
				returnThis='A'+returnThis;
				break;
			case 11:
				returnThis='B'+returnThis;
				break;
			case 12:
				returnThis='C'+returnThis;
				break;
			case 13:
				returnThis='D'+returnThis;
				break;
			case 14:
				returnThis='E'+returnThis;
				break;
			case 15:
				returnThis='F'+returnThis;
				break;
			default:
				char temp=((dNum%16)+'0');
				returnThis=temp+returnThis;
		}
		//set dNum to the next number that needs to be divided
		dNum=dNum/16;
	}	
	return returnThis;
}
