#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num;

	cout << "Celcius to Fahrenheit (enter 0)" << endl;			//provides conversion options
	cout << "Celcius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celcius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celcius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	cout << "Conversion type: ";
	cin >> num;

	
	int isnum;									// error checking to make sure user input was not characters
	isnum = cin.fail();
	while (isnum)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Wrong input, try again: ";
		cin >> num;
		isnum = cin.fail();
	}


	while (num < 0 || num > 5)					//error checking to make sure user inputted number from 0 to 5
	{
		cout << "Wrong input, enter again: ";
		cin >> num;
	}

 

	{
		double amount; 											

		if (num == 0) 												// checking which conversion option user entered
			{
				cout << "Enter the amount in Celsius: ";
				cin >> amount;
				
				bool bFail; 										// error checking to make sure user input was not characters
				bFail = cin.fail();
				if (bFail == true)
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					
					do
					{
						cout << "Wrong input, try again: ";
						cin >> amount;

						bFail = cin.fail();

						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}while (bFail == true);
				}
				
				double Cfahrenheit = amount * (9.0/5) + 32;				//perform conversion from Celsius to Fahrenheit
				cout << amount << " Celcius to Fahrenheit is " << setprecision(3) << fixed << Cfahrenheit << "." << endl;

			}

		else if (num == 1)
			{
				cout << "Enter the amount in Celsius: ";
				cin >> amount;

				bool bFail; 						// error checking to make sure user input was not characters
				bFail = cin.fail();
				if (bFail == true)
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					
					do
					{
						cout << "Wrong input, try again: ";
						cin >> amount;

						bFail = cin.fail();

						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}while (bFail == true);
				}

				double Ckelvin = amount + 273.15;			//perform conversion from Celsius to Kelvin
				cout << amount << " Celcius to Kelvin is " << setprecision(3) << fixed << Ckelvin << "." << endl;
			}

		else if (num == 2)
			{
				cout << "Enter the amount in Fahrenheit: ";
				cin >> amount;

				bool bFail; 					// error checking to make sure user input was not characters
				bFail = cin.fail();
				if (bFail == true)
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					
					do
					{
						cout << "Wrong input, try again: ";
						cin >> amount;

						bFail = cin.fail();

						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}while (bFail == true);
				}

				double Fcelsius = (amount - 32) * (5.0/9);			//perform conversion from Fahrenheit to Celsius
				cout << amount << " Fahrenheit to Celcius is " << setprecision(3) << fixed << Fcelsius << "." << endl;
			}


		else if (num == 3)
			{
				cout << "Enter the amount in Fahrenheit: ";
				cin >> amount;

				bool bFail; 						// error checking to make sure user input was not characters
				bFail = cin.fail();
				if (bFail == true)
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					
					do
					{
						cout << "Wrong input, try again: ";
						cin >> amount;

						bFail = cin.fail();

						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}while (bFail == true);
				}

				double Fkelvin = (amount + 459.67) * (5.0/9); 			//perform conversion from Fahrenheit to Kelvin
				cout << amount << " Fahrenheit to Kelvin is " << setprecision(3) << fixed << Fkelvin << "." << endl; 
			}

		else if (num == 4) 
			{
				cout << "Enter the amount in Kelvin: ";
				cin >> amount;

				bool bFail; 					// error checking to make sure user input was not characters
				bFail = cin.fail();
				if (bFail == true)
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					
					do
					{
						cout << "Wrong input, try again: ";
						cin >> amount;

						bFail = cin.fail();

						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}while (bFail == true);
				}

				double Kcelsius = amount - 273.15;				//perform conversion from Kelvin to Celsius
				cout << amount << " Kelvin to Celsius is " << setprecision(3) << fixed << Kcelsius << "." << endl; 
			}

		else 	
			{
				cout << "Enter the amount in Kelvin: ";
				cin >> amount;

				bool bFail; 					// error checking to make sure user input was not characters
				bFail = cin.fail();
				if (bFail == true)
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					
					do
					{
						cout << "Wrong input, try again: ";
						cin >> amount;

						bFail = cin.fail();

						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}while (bFail == true);
				}

				double Kfahrenheit = amount * (9.0/5) - 459.67;				//perform Kelvin to Fahrenheit
				cout << amount << " Kelvin to Fahrenheit is " << setprecision(3) << fixed << Kfahrenheit << "." << endl; 
			}

	}

	return 0;
}