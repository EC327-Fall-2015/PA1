#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Load the following variables
	double conversion_value;
	double temp_C;
	double temp_F;
	double temp_K;
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	cout << "Conversion type: " << endl;

	do{
		cout << "Please input an integer value 0 through 5" << endl;
		cin >> conversion_value ;
		if (conversion_value ==0 || conversion_value ==1 || conversion_value ==2 || conversion_value ==3 || conversion_value ==4 || conversion_value==5)
			{
				if (conversion_value==0) 
				{
					cout << "Enter a Celsius temeperature: " << endl;
					cin >> temp_C ;
					temp_F = temp_C * 9/5 + 32;
					cout << temp_C << " Celsius is " << temp_F << " Fahrenheit" << endl;
					break;
				}
				else if (conversion_value==1) 
				{
					cout << "Enter a Celsius temeperature: " << endl;
					cin >> temp_C ;
					temp_K = temp_C + 273.15;
					cout << temp_C << " Celsius is " << temp_K << " Kelvin" << endl;
					break;
				}
				else if (conversion_value==2) 
				{
					cout << "Enter a Fahrenheit temeperature: " << endl;
					cin >> temp_F;
					temp_C = (temp_F-32) * 5 / 9;
					cout << temp_F << " Fahrenheit is " << temp_C << " Celsius" << endl;
					break;
				}
				else if (conversion_value==3) 
				{
					cout << "Enter a Fahrenheit temeperature: " << endl;
					cin >> temp_F;
					temp_C = (temp_F-32) * 5 / 9;
					temp_K = temp_C + 273.15;
					cout << temp_F << " Fahrenheit is " << temp_K << " Kelvin" << endl;
					break;
				}
				else if (conversion_value==4) 
				{
					cout << "Enter a Kelvin temeperature: " << endl;
					cin >> temp_K;
					temp_C=temp_K-273.15;
					cout << temp_K << " Kelvin is " << temp_C << " Celsius" << endl;
					break;
				}
				else if (conversion_value==5) 
				{
					cout << "Enter a Kelvin temeperature: " << endl;
					cin >> temp_K;
					temp_C=temp_K-273.15;
					temp_F = temp_C * 9/5 + 32;
					cout << temp_K << " Kelvin is " << temp_F << " Fahrenheit" << endl;
					break;
				}
			}
	}
	while (conversion_value !=0 || conversion_value !=1 || conversion_value !=2 || conversion_value !=3 || conversion_value !=4 || conversion_value!=5);

	/*else
	{
			cout << "Please input an integer value 0 through 5" << endl;
			cin >> conversion_value ;
	}*/

	return 0;
}

