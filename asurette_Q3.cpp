#include <iostream>
using namespace std;
int total;
int num1,num2,a,b,c,d,firstnum,secondnum;
int num1arr[16];
int num2arr[16];
int main()
{

  cout<<"Enter Two positive intergers: "<<endl;
  cin>>num1;
  cin>>num2;
  firstnum=num1;
  secondnum=num2;
  for(int i=16;i>0;i--)
	{
  	int j=i-1;
  	a=num1/i;
  	b=num2/i;
 	 
  	if ((num1%i)<16 && ((num1%i)!=j))
    {
    	num1arr[j]=0;
    }
  	else if ((num1%i)==j)
    {
      num1arr[j]=1;
     }
  	else if (a>16)
  		 {   	 
      num1arr[j]=num1%i;
    }
	 
	 
  	if ((num2%i)<16 && ((num2%i)!=j))
    {
    	num2arr[j]=0;
    }
  	else if ((num2%i)==j)
    {
      num2arr[j]=1;
    	}
  	else if (b>16)
    {
      	num2arr[j]=num2%i;
    }
  	num1=num1-(a*i);
  	num2=num2-(b*i);

	}
  for (int k=0;k<16;k++)
	{
   	if (num1arr[k]!=num2arr[k])
     {
     total++;
     }
	 
     }
   cout<<"Hamming distance between "<<firstnum<<" and "<<secondnum<<" when the numbers are in hex format is: "<<total<<endl;;

}


