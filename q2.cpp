#include <iostream>
using namespace std;
int main()
{
	int temptype; //declaring variables
        int number;
        cout <<"Celsius to Fahrenheit (enter 0)"<< endl;
        cout <<"Celsius to Kelvin (enter 1)"<< endl;
        cout <<"Fahrenheit to Celsius (enter 2)"<< endl;
        cout <<"Fahrenheit to Kelvin (enter 3)"<< endl;
        cout <<"Kelvin to Celsius (enter 4)"<< endl;
        cout <<"Kelvin to Farenheit (enter 5)"<< endl;
        cout <<"Conversion type: "<<endl;
	cin >>number; //stores input as number
    
    
    bool what = true;
        while (what) //checks to make sure a number is entered
        {
            if (cin.fail()) //returns true if type of input does not match cin
            {
                cin.clear();
                cin.ignore(10000, '\n'); //ignores the rest of characters on that line
                what = true;
                cout <<"Wrong input, try again: "<<endl;
                cin >> number;
                
            }
            else
            {
                what = false;
            }
        }
        while ((number <0 || number > 5)) //invlaid entry parameters
        {
//if number is not between 0 and 5, has error statement and prompts again
            cout <<"Wrong input, try again: "<<endl;
            cin >> number;
        }
        double finaltemp; //creates finaltemp variable
        if (0 <= number && number<= 5) //checks if input is valid
        {
            double temp;
            switch (number) //allows different action depending on input
            {
//each case does the corresponding calculationa and outputs answer
                case 0: cout <<"Enter the amount in Celsius: ";
            		cin >> temp;	
			finaltemp = temp*1.8 + 32; //conversion formula
                    	cout << temp<< " Celsius is " << finaltemp << " Fahrenheit.";    
                        break;
                case 2: cout <<"Enter the amount in Fahrenheit: ";
                        cin >> temp;
			finaltemp = ((temp - 32)*(5.0/9)); //conversion formula
                    	cout << temp<< " Fahrenheit is " << finaltemp << " Celsius.";
                    	break;
                case 1: cout <<"Enter the amount in Celsius: ";
                        cin >> temp;
			finaltemp = temp + 273.15; //conversion formula
                    	cout << temp<< " Celsius is " << finaltemp << " Kelvin.";
                    	break;
                case 4: cout <<"Enter the amount in Kelvin: ";
                        cin >> temp;
			finaltemp = temp - 273.15; //conversion formula
                    	cout << temp<< " Kelvin is " << finaltemp << " Celsius.";
                    	break;
                case 3: cout <<"Enter the amount in Fahrenheit: ";
                        cin >> temp;
			finaltemp = ((temp +459.67)*(5.0/9));
                    	cout << temp<< " Fahrenheit is " << finaltemp << " Kelvin.";
                    	break;
                case 5: cout <<"Enter the amount in Kelvin: ";
                        cin >> temp;
			finaltemp = temp *(1.8) - 459.67; //conversion formula
                    	cout << temp<< " Kelvin is " << finaltemp << " Fahrenheit.";
                    	break;
                    
            }
//had to do each individual out statement since type of temperature varied 
        }
    
    return 0;
    
}

