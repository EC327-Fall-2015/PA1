#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{

  int select;
  float in_temp;
  float answer;
  string temp_arry[] = {"Celsius", "Fahrenheit", "Kelvin"};

  using std::setprecision;


  //Print out the menu
  while(1)
  {
  	cout<<" Celsius to Fahrenheit (enter 0)"
      	  <<"\n Celsius to Kelvin (enter 1)"
      	  <<"\n Fahrenheit to Celsius (enter 2)"
      	  <<"\n Fahrenheit to Kelvin (enter 3)"
      	  <<"\n Kelvin to Fahrenheit (enter 4)"
     	  <<"\n Kelvin to Celsius(enter 5)"
	  <<"\n Conversion type: ";
  	cin>>select;

  	//check selection
  	if (0<=select && select<=5)
  	{ break;}
	else
	{cout<<"\n Incorrect input. Please try again."<<endl<<endl;}
  }

  cout<<"\n\n select is "<<select<<endl<<endl;

  //Get the input
  string temp_type0 = temp_arry[select/2];
  cout<<" Enter the temperature in "<<temp_type0<<" : ";
  cin>>in_temp;


  //convert
  string temp_type1;

  switch(select)
  {
	case 0:
	  answer = 32+(in_temp*5/9);
	  temp_type1 = temp_arry[1];

	case 1:
	  answer = in_temp + 273.15;
	  temp_type1 = temp_arry[2];

	case 2:
	  answer = (9/5)*(in_temp -32);
	  temp_type1 = temp_arry[0];
	
	case 3:
	  answer = (9/5)*(in_temp -32) +273.15;
	  temp_type1 = temp_arry[2];

	case 4:
	  answer = (5/9)*(in_temp - 273.15) + 32;
	  temp_type1 = temp_arry[1];

	case 5:
  	  answer = in_temp - 273.15;
	  temp_type1 = temp_arry[0];
	
	default:
	  ;
  }

  cout<<"\n\n the values of type arrary are"
      <<temp_arry[0]
      <<temp_arry[1]
      <<temp_arry[2]
      <<"\n and the new temp type is "<<temp_type1<<endl<<endl;

  //Now to output the answer
  cout<<"\n "<<setprecision(3)<<in_temp<<" "<<temp_type0<<" is "
      <<setprecision(3)<<answer<<" in " <<temp_type1<<"."<<endl;

  return 0;
}