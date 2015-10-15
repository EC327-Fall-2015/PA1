/*
ssshahin_PA1
Q2.cpp
Converting Units
Convert 
*/

#include <iostream>
#include <limits>
#include <iomanip>
//#include <cstdlib>

using namespace std;

//declare functions

//functions for temperature conversion
double celsiusToFahrenheit(double ctemp);
double celsiusToKelvin(double ctemp);

double fahrenheitToCelsius(double ftemp);
double fahrenheitToKelvin(double ftemp);

double kelvinToCelsius(double ktemp);
double kelvinToFahrenheit(double ktemp);

//function for rounding decimals
double threeDecimals(double num);

//function for valididating input
double validInputOnly();

//The following main function will take user's input for which conversion the user wants
//Then it will prompt the user to input a temperature
//prints the resulting conversion

int main(){
	//declaring variables
	double convertType = -1;
    
    //int loop_counter = 0;
	
    double inputTemp, convertedTemp;

	//guide for conversion types
	cout<<"Celsius to Fahrenheit (enter 0)"<<endl;
	cout<<"Celsius to Kelvin (enter 1)"<<endl;
	cout<<"Fahrenheit to Celsius (enter 2)"<<endl;
	cout<<"Fahrenheit to Kelvin (enter 3)"<<endl;
	cout<<"Kelvin to Celsius (enter 4)"<<endl;
	cout<<"Kelvin to Fahrenheit (enter 5)"<<endl;
    
    cout<<"Conversion type: ";
    
    do {
		
		//user input, number between 0 and 5 inclusive
		convertType = validInputOnly();

        if ( (convertType < 0 || convertType > 5) || ((int) convertType != convertType )){
			cout<<"Wrong input, try again: ";

		}
		
	} while (((convertType > 5 || convertType < 0) || ((int) convertType != convertType)));
    
    
	if (convertType == 0 || convertType == 1)
		cout<<"Enter the amount in Celsius: ";

	else if (convertType == 2 || convertType == 3)
		cout<<"Enter the amount in Fahrenheit: ";

	else if (convertType == 4 || convertType == 5)
		cout<<"Enter the amount in Kelvin: ";
	

	//user input temperature of given units
	inputTemp = validInputOnly();
	
	if (convertType == 0){
		//Celsius to Fahrenheit
		convertedTemp = celsiusToFahrenheit(inputTemp);

		//round to three decimal places
		//convertedTemp = threeDecimals(convertedTemp);

		//outputs
		cout<< setiosflags(ios::fixed)<<setprecision(3)<<inputTemp<<" Celsius is "<<convertedTemp<<" Fahrenheit."<<endl;

	}else if (convertType == 1){
		//Celsius to Kelvin
		convertedTemp = celsiusToKelvin(inputTemp);

		//round to three decimal places
		//convertedTemp = threeDecimals(convertedTemp);

		//outputs
		cout<< setiosflags(ios::fixed)<<setprecision(3)<<inputTemp<<" Celsius is "<<convertedTemp<<" Kelvin."<<endl;

	}else if (convertType == 2){
		//Fahrenheit to Celsius
		convertedTemp = fahrenheitToCelsius(inputTemp);

		//round to three decimal places
		//convertedTemp = threeDecimals(convertedTemp);

		//outputs
		cout<< setiosflags(ios::fixed)<<setprecision(3)<<inputTemp<<" Fahrenheit is "<<convertedTemp<<" Celsius."<<endl;

	}else if (convertType == 3){
		//Fahrenheit to Kelvin
		convertedTemp = fahrenheitToKelvin(inputTemp);

		//round to three decimal places
		//convertedTemp = threeDecimals(convertedTemp);

		//outputs
		cout<< setiosflags(ios::fixed)<<setprecision(3)<<inputTemp<<" Fahrenheit is "<<convertedTemp<<" Kelvin."<<endl;

	}else if (convertType == 4){
		//Kelvin to Celsius
		convertedTemp = kelvinToCelsius(inputTemp);

		//round to three decimal places
		//convertedTemp = threeDecimals(convertedTemp);

		//outputs
		cout<< setiosflags(ios::fixed)<<setprecision(3)<<inputTemp<<" Kelvin is "<<convertedTemp<<" Celsius."<<endl;

	}else if (convertType == 5){
		//Kelvin to Fahrenheit
		convertedTemp = kelvinToFahrenheit(inputTemp);

		//round to three decimal places
		//convertedTemp = threeDecimals(convertedTemp);

		//outputs
		cout<< setiosflags(ios::fixed)<<setprecision(3)<<inputTemp<<" Kelvin is "<<convertedTemp<<" Fahrenheit."<<endl;

	}

	//pause for reading results
	//system("PAUSE");

	return 0;
}

//celsius to other
double celsiusToFahrenheit(double ctemp){
	double ftemp;

	//converts Celsius to fahrenheit
	ftemp = (ctemp * 9.0 / 5.0) + 32.0;

	return ftemp;
}

double celsiusToKelvin(double ctemp){
	double ktemp;

	//conversion is a simple addition of 273.15
	ktemp = ctemp + 273.15;

	return ktemp;
}

//fahrenheit to other
double fahrenheitToCelsius(double ftemp){
	double ctemp;

	//converts fahrenheit to Celsius
	ctemp = (ftemp - 32.0) * 5.0 / 9.0;

	return ctemp;
}

double fahrenheitToKelvin(double ftemp){
	double ktemp;

	//converts fahrenheit to Celsius to kelvin, using these functions
	ktemp = celsiusToKelvin( fahrenheitToCelsius(ftemp) );

	return ktemp;
}

//kelvin to other
double kelvinToCelsius(double ktemp){
	double ctemp;

	//conversion is subtraction of 273.15
	ctemp = ktemp - 273.15;

	return ctemp;
}

double kelvinToFahrenheit(double ktemp){
	double ftemp;

	//converts from kelvin to Celsius to fahrenheit, using these functions
	ftemp = celsiusToFahrenheit( kelvinToCelsius(ktemp) );

	return ftemp;
}



//function for reducing a decimal to three decimal places, rounded to nearest thousandth. 
//copied from my Q1.cpp submission
double threeDecimals(double num){
	int thousand_fold, ten_thousand_fold;
	double decimal;
	//holds double times 10,000 cast as an int, preserving some decimals 
	ten_thousand_fold = (int) 10000 * num;

	//holds double times 1,000 cast as int
	thousand_fold = (ten_thousand_fold / 10);

	//rounding to nearest thousandth
	int rounding = ten_thousand_fold % 10;
	if (rounding >= 5){
		//adds one if tenthousandth place is 5 or greater
		thousand_fold += 1;
	}

	decimal = ((double) thousand_fold )/ 1000.0;

	return decimal;

}

double validInputOnly(){
	double input;

	cin>>input;

	do{
		if(cin.fail()){
			cin.clear();
			//cin.ignore is for when you type random gibberish when I want only doubles
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout<<"Wrong input, try again: ";

			cin>>input;

		}
		

	} while(cin.fail());

	return input;
}
