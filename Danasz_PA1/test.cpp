#include <iostream>
using namespace std;

int main()
{
        int units;
        double num;
        double newNum;

cout<<"Celsius to Fahrenheit (enter 0)"<<endl<<"Celsius to Kelvin (enter 1)"<<endl<<"Fahrenheit to Celsius (enter 2)"<<endl<<"Fahrenheit to Kelvin (enter 3)"<<endl<<"Kelvin to Celsius (enter 4)"<<endl<<"Kelvin to Fahrenheit (enter 5)"<<endl;

        cin>>units;
	while ((units==units)	
		{cout<<"Wrong input, try again:";
                units=0;
		cin>>units;}
	while (units>5 || units<0)
                {cout<<"Wrong input, try again:";
                cin>>units;}

        switch ((int)units)
        {
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

        }

        return 0;
}


