#include <iostream> 
#include <iomanip> 

using namespace std; 
	
int main()
{	
	double choice, input;
	double celsius, fahrenheit, kelvin;
	
	// Prompt user input 
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	cout << "Conversion Type: ";
	cin >> choice; 
	
	// Incorrect input 
	while (cin.fail() || (choice > 5) || (choice < 0) || (choice !=0) && (choice !=1) && (choice != 2) && (choice != 3) && (choice != 4) && (choice!=5))
	{	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Wrong input, try again: "; 
		cin >> choice; 
	}
	
	// Celsius to Fahrenheit 
	if (choice == 0) 
	{	cout << "Enter the amount in Celsius: ";
		cin >> celsius; 
		while (cin.fail())
		{	cin.clear();
			cin.ignore(256, '\n');
			cout << "Wrong input, try again: "; 
			cin >> celsius; 
		}
		cout << fixed << setprecision(3) << celsius << " Celsius is " << ((celsius * 9) / 5) + 32 << " Fahrenheit." << endl; 
		
	}	
	
	// Celsius to Kelvin
	if (choice == 1)
	{	cout << "Enter the amount in Celsius: ";
		cin >> celsius;
		while (cin.fail())
		{	cin.clear();
			cin.ignore(256, '\n');
			cout << "Wrong input, try again: "; 
			cin >> celsius; 
		}
		cout << fixed << setprecision(3) << celsius << " Celsius is " << celsius + 273.15 << " Kelvin." << endl; 
		
	}
	
	//Fahrenheit to Celsius 
	if (choice == 2)
	{	cout << "Enter the amount in Fahrenheit: ";
		cin >> fahrenheit; 
		while (cin.fail())
		{	cin.clear();
			cin.ignore(256, '\n');
			cout << "Wrong input, try again: "; 
			cin >> fahrenheit; 
		}
		cout << fixed << setprecision(3) << fahrenheit << " Fahrenheit is " << (fahrenheit - 32) * 5.00 / 9  << " Celsius." << endl;
		
	}	
	
	//Fahrenheit to Kelvin
	if (choice == 3)
	{	cout << "Enter the amount in Fahrenheit: ";
		cin >> fahrenheit; 
		while (cin.fail())
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Wrong input, try again: "; 
			cin >> fahrenheit; 
		cout << fixed << setprecision(3) << fahrenheit << " Fahrenheit is " << (fahrenheit - 32) * 5.00 / 9 + 273.15 << " Kelvin." << endl;
	}	
	
	// Kelvin to Celsius 
	if (choice == 4)
	{	cout << "Enter the amount in Kelvin: ";
		cin >> kelvin; 
		while (cin.fail())
		{	cin.clear();
			cin.ignore(256, '\n');
			cout << "Wrong input, try again: "; 
			cin >> kelvin; 
		}
		cout << fixed << setprecision(3) << kelvin << " Kelvin is " << kelvin - 273.15  << " Celsius." << endl;
		
	}	
	
	// Kelvin to Fahrenheit 
	if (choice == 5)
	{	cout << "Enter the amount in Kelvin: ";
		cin >> kelvin; 
		while (cin.fail())
		{	cin.clear();
			cin.ignore(256, '\n');
			cout << "Wrong input, try again: "; 
			cin >> kelvin; 
		}
		cout << fixed << setprecision(3) << kelvin << " Kelvin is " << (kelvin - 273.15) * 9 / 5 + 32 << " Fahrenheit." << endl; 
		
	} 				
	return (0);
}


