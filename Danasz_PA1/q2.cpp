#include <iostream>
using namespace std;

int main()
{
        int units;		//initialize variables
        double num;
        double newNum;
	int i;
cout<<"Celsius to Fahrenheit (enter 0)"<<endl<<"Celsius to Kelvin (enter 1)"<<endl<<"Fahrenheit to Celsius (enter 2)"<<endl<<"Fahrenheit to Kelvin (enter 3)"<<endl<<"Kelvin to Celsius (enter 4)"<<endl<<"Kelvin to Fahrenheit (enter 5)"<<endl;

cin>>units;		//prompt for type of units conversion

	while (cin.fail()) 			//check it type of input variable is correct
	{cin.clear();
	cout<<"Wrong input, try again:";
        cin>>units;}

	do{				//do while statement to keep prompting until valid value 
	i=2;
        switch ((int)units)		//switch statement for the different types of conversions
        {				//for each case calculate the respective value in new units and print result
                case 0:{cout<<"Enter the amount in Celsius:"<<endl;
                        cin>>num;
                                newNum=num* 1.8 + 32;		
                        cout<<num<<" Celsius is "<<newNum<<" Fahrenheit "<<endl;
                        break;}
case 1:{cout<<"Enter the amount in Celsius:"<<endl;
                        cin>>num;

                        newNum=num+ 273.15;
                        cout<<num<<" Celsius is "<<newNum<<" Kelvin "<<endl;
                        break;}
                case 2:{cout<<"Enter the amount in Fahrenheit:"<<endl;
                        cin>>num;

newNum=(num- 32) / 1.8;
                        cout<<num<<" Fahrenheit is "<<newNum<<" Celsius "<<endl;
                        break;}
case 3:{cout<<"Enter the amount in Fahrenheit:"<<endl;
                        cin>>num;

                        newNum=(num+ 459.67) * 5/9;
                        cout<<num<<" Fahrenheit is "<<newNum<<" Kelvin "<<endl;
                        break;}
                case 4:{cout<<"Enter the amount in Kelvin:"<<endl;
                        cin>>num;
newNum=num-273.15;
                        cout<<num<<" Kelvin is "<<newNum<<" Celsius "<<endl;
                        break;}
                case 5:{cout<<"Enter the amount in Kelvin:"<<endl;
                        cin>>num;

                        newNum=num * 9/5 - 459.67;
                        cout<<num<<" Kelvin is "<<newNum<<" Fahrenheit "<<endl;
                        break;}
                default: {cout<<"Wrong input, try again:";
              		  cin>>units;
			i=1;}

        }}
	while(i==1);

        return 0;
}

