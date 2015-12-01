#include <iostream>
#include <math.h>
using namespace std;
  float ans;
int restart()
{
  int x;
  float temp;

  cout<<"Conversion type: ";

  cin>>x;//x will be used for a switch statment

  switch (x+1)//cases must start at 1 so increment x by 1 so that they match with the instructions
	{
	case 1://C to F
	 
  	cout<<"Enter the amount in Celsius: ";

  	cin>>temp;

  	ans=temp*(9/5)+32;

  	cout<<ans<<endl;

  	break;

	case 2://C to K
 	 
  	cout<<"Enter the amount in Celsius: ";
 	 
  	cin>>temp;

  	ans=temp+273.15;

  	cout<<ans<<endl;
 	 
  	break;
    
	case 3://F to C
    
  	cout<<"Enter the amount in Fahrenheit: ";

  	cin>>temp;

  	ans=(temp-32)*(5/9);

  	cout<<ans<<endl;

  	break;

	case 4://F to K

  	cout<<"Enter the amount in Fahrenheit: ";

  	cin>>temp;

  	ans=((temp-32)*(5/9))+273.15;

  	cout<<ans<<endl;

  	break;

	case 5://K to C

  	cout<<"Enter the amount in Kelvin: ";

  	cin>>temp;

  	ans=temp-273.15;

  	cout<<ans<<endl;

  	break;
 
	case 6://K ot F

  	cout<<"Enter the amount in Kelvin: ";

  	cin>>temp;

  	ans=(temp-273.15)*(9/5)+32;

  	cout<<ans<<endl;

  	break;

	default ://if not 0-5 restart the function to restart the switch statement

  	cout<<"ERROR! try again please."<<endl;

  	restart();//calls this function again to restart the switch statement
	}
}
int main()
{
  cout<<"Celsius to Fahrenheit (enter 0)"<<endl;

  cout<<"Celsius to Kelvin (enter 1)"<<endl;

  cout<<"Fahrenheit to Celsius (enter 2)"<<endl;

  cout<<"Fahrenheit to Kelvin (enter 3)"<<endl;

  cout<<"Kelvin to Celsius (enter 4)"<<endl;

  cout<<"Kelvin to Fahrenheit (enter 5)"<<endl;

  restart();//calls teh function that does the conversions

return 0;

}


