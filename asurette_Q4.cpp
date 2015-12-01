#include <iostream>
#include <math.h>
using namespace std;

int main(){
  char c;
 
 int offset;
 
 cout<<"Enter a character: ";//setting up the varaibles and questions
 
 cin>>c;
 
 cout<<"Offset (enter 0 to convert case): ";
 
 cin>>offset;

//captials are 65 to 90, lowercase are 97-122, the difference between them is always 32
  if (offset==0)
	{
  	if (c>=65 && c<=90)//captial letters fall in this range
    {

      c=c+32;

      cout<<c<<endl;

    }	 
	 
  	else if (c>=97 && c<=122)//lowercase letters fall in this range
    {

      c=c-32;
      
      cout<<c<<endl;

    }
	 
  	else
    {
      
      cout<<c<<endl;

    }
	}
   else if ((offset+c)>255)//ascii only goes up to 255
	{
    cout<<"ERROR out of range."<<endl;
	}
   else
	{
  	c=c+offset;

  	cout<<c<<endl;    
 	}
return 0;
}


