//Derek Kenyon
//Programming Assignment 1: Question 3
//09.30.2015

//Hamming Distance Function

#include <iostream>

using namespace std;	

int hamming_distance(int num1, int num2, int &dist)
{
	int q1;
	int q2;
	int r1;
	int r2;

	while(q1>16 && q2>16)
	{
		q1 = num1/16;
		q2 = num2/16;
		r1 = num1%16;
		r2 = num2%16;
		
		if(r1!=r2)
		{
			dist++;
		}
		
		num1 = q1;
		num2 = q2;
	}
	if(q1!=q2)
	{
		dist++;
	}
	return dist;
}
