#include <iostream>
#include <iomanip>
using namespace std;

//initialize variables with type float
float celsius;
float fahrenheit;
float kelvin;

//void functions to calculate conversions when prompted
void convertC_F()
{
    fahrenheit = (((celsius * 9) / 5) + 32);
}

void convertC_K()
{
    kelvin = (celsius + 273.15);
}

void convertF_C()
{
    celsius = (((fahrenheit - 32) * 5) / 9);
}

void convertF_K()
{
    kelvin = ((((fahrenheit - 32) * 5) / 9) + 273.15);
}

void convertK_C()
{
    celsius = (kelvin - 273.15);
}

void convertK_F()
{
    fahrenheit = ((((kelvin - 273.15) * 9) / 5) + 32);
}

int main()
{
//print instructions for user to use program
    cout << "Celsius to Fahrenheit (enter 0)" << endl;
    cout << "Celsius to Kelvin (enter 1)" << endl;
    cout << "Fahrenheit to Celsius (enter 2)" << endl;
    cout << "Fahrenheit to Kelvin (enter 3)" << endl;
    cout << "Kelvin to Celsius (enter 4)" << endl;
    cout << "Kelvin to Fahrenheit (enter 5)" << endl;
    
    int conversion_type;
    cout << "Conversion type:";
    cin >> conversion_type;
  
  do
  {
    
    if (conversion_type >= 0 && conversion_type <=5)
    {
//switch statement depending on user input    
    switch (conversion_type)
     {
        case 0:
            cout << "Enter the amount in Celsius:";
            cin >> celsius;
            convertC_F();
            std::cout << std::fixed << std::setprecision(3); //set float presicion to 3
            
            cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << endl; break;
        
        case 1:
            cout << "Enter the amount in Celsius:";
            cin >> celsius;
            convertC_K();
            std::cout << std::fixed << std::setprecision(3);
            
            cout << celsius << " Celsius is " << kelvin << " Kelvin" << endl; break;
        case 2:
            cout << "Enter the amount in Fahrenheit:";
            cin >> fahrenheit;
            convertF_C();
            std::cout << std::fixed << std::setprecision(3);
            
            cout << fahrenheit << " Fahrenheit is " << celsius << " Celsius" << endl; break;
        case 3:
            cout << "Enter the amount in Fahrenheit:";
            cin >> fahrenheit;
            convertF_K();
            std::cout << std::fixed << std::setprecision(3);
            
            cout << fahrenheit << " Fahrenheit is " << kelvin << " Kelvin" << endl; break;
        case 4:
            cout << "Enter the amount in Kelvin:";
            cin >> kelvin;
            convertK_C();
            std::cout << std::fixed << std::setprecision(3);
            
	    cout << kelvin << " Kelvin is " << celsius << " Celsius" << endl; break;
        case 5:
           cout << "Enter the amount in Kelvin:";
           cin >> kelvin;
           convertK_F();
           std::cout << std::fixed << std::setprecision(3);
            
       	    cout << kelvin << " Kelvin is " << fahrenheit << " Fahrenheit" << endl; break;
     }
    }
//if input is a number not 0 through 5. user must enter new number
    else
	cout << "Wrong input, try again:";
	cin >> conversion_type;

    }while (conversion_type >= 0 && conversion_type <=5);

    return 0;
    
}
    
