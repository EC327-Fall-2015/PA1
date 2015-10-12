#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

float checkvalue(string message) //Function that checks to see if input value is an float, else it asks to input it again. It outputs message before requiring an input.
{
	float userinput;
	bool validinput = false;

	cout << message;
	validinput = true;

	cin >> userinput;

	while(cin.fail())//loops while the input is not the correct type as userinput.
	{
		std::cin.clear();//clears the error flag on cin
		std::cin.ignore(INT_MAX, '\n');//ignores everything else in cin
		cout<<"Wrong input, try again: ";
		cin>> userinput;
	}


	return userinput;
}


int main()
{
	cout << "Celsius to Fahrenheit (Enter 0)"<<endl;//conversions to choose from
	cout << "Celsius to Kelvin (Enter 1)"<<endl;
	cout << "Fahrenheit to Celsius (Enter 2)"<<endl;
	cout << "Fahrenheit to Kelvin (Enter 3)"<<endl;
	cout << "Kelvin to Celsius (Enter 4)"<<endl;
	cout << "Kelvin to Fahrenheit (Enter 5)"<<endl;
	
	float userinput;
	float result;
	userinput = checkvalue("Conversion Type: ");//runs function checkvalue

	while ((userinput != 0) && (userinput != 1) && (userinput != 2) && (userinput != 3) && (userinput != 4) && (userinput != 5)) //checking to see if the value is 1, 2, 3, 4, or 5.
	{
		cout<<"Wrong input, try again:";
		userinput = checkvalue(" ");
	}

	if (userinput == 0)//converts Celsius to Fahrenheit
	{
		userinput = checkvalue("Enter the amount in Celsius: ");
		result = userinput * 1.8;
		result += 32;
		std::cout <<std::setprecision(3) << fixed << userinput <<" Celsius is "<<result<<" Fahrenheit."<<endl;
	}

	else if (userinput == 1)//converts Celsius to Kelvin
	{
		userinput = checkvalue("Enter the amount in Celsius: ");
		result = userinput + 273.15;
		std::cout <<std::setprecision(3)<< fixed << userinput <<" Celsius is "<<result<<" Kelvin."<<endl;
	}

	else if (userinput == 2)//converts Fahrenheit to Celsius
	{
		userinput = checkvalue("Enter the amount in Fahrenheit: ");
		result = userinput - 32;
		result /= 1.8;
		std::cout <<std::setprecision(3)<< fixed << userinput <<" Fahrenheit is "<<result<<" Celsius."<<endl;
	}

	else if (userinput == 3)//Converts Fahrenheit to Kelvin
	{
		userinput = checkvalue("Enter the amount in Fahrenheit: ");
		result = userinput + 459.67;
		result *= 5;
		result /= 9;
		std::cout <<std::setprecision(3)<< fixed << userinput <<" Fahrenheit is "<<result<<" Kelvin."<<endl;
	}

	else if (userinput == 4)//Converts Kelvin to Celsius
	{
		userinput = checkvalue("Enter the amount in Kelvin: ");
		result = userinput - 273.15;
		std::cout <<std::setprecision(3)<< fixed << userinput <<" Kelvin is "<<result<<" Celsius."<<endl;
	}

	else if (userinput == 5)//Converts Kelvin to Fahrenheit
	{
		userinput = checkvalue("Enter the amount in Kelvin: ");
		result = userinput * 9;
		result /= 5;
		result -= 459.67;
		std::cout <<std::setprecision(3)<< fixed << userinput <<" Kelvin is "<<result<<" Fahrenheit."<<endl;
	}
	return 0;
}