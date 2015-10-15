#include <iostream>

using namespace std;

int main()
{
	double cel, fah, kel, result;   //declare varaible for celsius, fahrenheit, kelvin and result
	int con, con_1, track;          //condition which determine which conversion
	track=1;        //for exiting or entering while loop
	cout.setf(ios::fixed,ios::floatfield);
    	cout.precision(3);      //set precision for final display
	cout<<"Select a conversion"<<endl;          //ask for conversion type
	cout<<"Celsius to Fahrenheit (enter 0)"<<endl;
	cout<<"Celsius to Kelvin (enter 1)"<<endl;
	cout<<"Fahrenheit to Celsius (enter 2)"<<endl;
	cout<<"Fahrenheit to Kelvin (enter 3)"<<endl;
	cout<<"Kelvin to Celsius (enter 4)"<<endl;
	cout<<"Kelvin to Fahrenheit (enter 5)"<<endl;
	cout<<"Conversion type: ";
	cin>>con_1;
	while(track==1){
	    if (cin.fail()){      //if enter wrong type of input, use default in the switch statement
	        cin.clear();
	        cin.ignore(100000, '\n');
	        con=6;
	    }
        else
            con=con_1;
		switch (con){      //call the corresponding conversion
			case 0:
				cout<<"Enter the amount in Celsius: ";
				cin>>cel;
				while (1){          
					if (cin.fail()){                //ask for right input if it is wrong
	        				cin.clear();
	        				cin.ignore(100000, '\n');
	        				cout<<"Wrong input, try again: ";
						cin>>cel;
	   				 }
					else
						break;
				}
				result=cel*9/5+32;
				cout<<cel<<" Celsius is "<<result<<" Fahrenheit."<<endl;
				track=2;
				break;
			case 1:
				cout<<"Enter the amount in Celsius: ";
				cin>>cel;
				while (1){
					if (cin.fail()){
	        				cin.clear();
	        				cin.ignore(100000, '\n');
	        				cout<<"Wrong input, try again: ";
						cin>>cel;
	   				 }
					else
						break;
				}
				result=cel+273.15;
				cout<<cel<<" Celsius is "<<result<<" Kelvin."<<endl;
				track=2;
				break;
			case 2:
				cout<<"Enter the amount in Fahrenheit: ";
				cin>>fah;
				while (1){
					if (cin.fail()){
	        				cin.clear();
	        				cin.ignore(100000, '\n');
	        				cout<<"Wrong input, try again: ";
						cin>>fah;
	   				 }
					else
						break;
				}
				result=(fah-32)*5/9;
				cout<<fah<<" Fahrenheit is "<<result<<" Celsius."<<endl;
				track=2;
				break;
			case 3:
				cout<<"Enter the amount in Fahrenheit: ";
				cin>>fah;
				while (1){
					if (cin.fail()){
	        				cin.clear();
	        				cin.ignore(100000, '\n');
	        				cout<<"Wrong input, try again: ";
						cin>>fah;
	   				 }
					else
						break;
				}
				result=(fah+459.67)*5/9;
				cout<<fah<<" Fahrenheit is "<<result<<" Kelvin."<<endl;
				track=2;
				break;
			case 4:
				cout<<"Enter the amount in Kelvin: ";
				cin>>kel;
				while (1){
					if (cin.fail()){
	        				cin.clear();
	        				cin.ignore(100000, '\n');
	        				cout<<"Wrong input, try again: ";
						cin>>kel;
	   				 }
					else
						break;
				}
				result=kel-273.15;
				cout<<kel<<" Kelvin is "<<result<<" Celsius."<<endl;
				track=2;
				break;
			case 5:
				cout<<"Enter the amount in Kelvin: ";
				cin>>kel;
				while (1){
					if (cin.fail()){
	        				cin.clear();
	        				cin.ignore(100000, '\n');
	        				cout<<"Wrong input, try again: ";
						cin>>kel;
	   				 }
					else
						break;
				}
				result=kel*9/5-459.67;
				cout<<kel<<" Kelvin is "<<result<<" Fahrenheit."<<endl;
				track=2;
				break;
			default:
				cout<<"Wrong input, try again: ";
				cin>>con_1;
			}
	}
	return 0;
}