#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2, num_3, num_4, track;      //declare variable for inputs
    int rem_1, rem_2;               //declare variable for remainder
    track=0;                //track hamming distance
	cout<<"Enter two positive integers: "<<endl;  //ask for input
	cin>>num_1;
	cin>>num_2;
	num_3=num_1;        //copy num_1 and num_2 
	num_4=num_2;
	while (num_1!=0 || num_2!=0){       //devide inputs by 16 till all of them become 0
	    rem_1=num_1%16;             //if their remainders are different, meaning hamming distance plus 1
	    rem_2=num_2%16;
	    if (rem_1!=rem_2)
	        track+=1;
	    num_1/=16;
	    num_2/=16;
	}
	cout<<"Hamming distance between "<<num_3<<" and "<<num_4<<" when numbers are in hex format is: "<<track<<endl;      //display result
	return 0;
}
	