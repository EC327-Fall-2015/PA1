#include <iostream>
#include <iomanip>
	using namespace std;

	
	int main ()
	{
		int type;
		double Celsius, Fahrenheit, Kelvin;
		cout << "Celsius to Fahrenheit (enter 0)" << endl;
		cout << "Celsius to Kelvin (enter 1)" << endl;
		cout << "Fahrenheit to Celsius (enter 2)" << endl;
		cout << "Fahrenheit to Kelvin (enter 3)" << endl;
		cout << "Kelvin to Celsius (enter 4)" << endl;
		cout << "Kelvin to Fahrenheit (enter 5)" << endl;
		cout << "Conversion Type: ";
		cin >> type;

		while(cin.fail() or type < 0 or type > 5)
		{	
			cout << "Wrong input, try again: " ;
			cin.clear();
			cin.ignore(256,'\n');	
			cin >> type;
		}
				
		switch (type)
		{

		case 0:

			cout << "Enter the amount in Celsius: ";
			cin >> Celsius;

			while(cin.fail())
			{	
				cout << "Wrong input, try again: " ;
				cin.clear();
				cin.ignore(256,'\n');	
				cin >> Celsius;
			}

			Fahrenheit = (((Celsius* 9)/5) + 32);
			cout << setprecision(3) << fixed << Celsius << " " << "Celsius is ";
			cout << setprecision(3) << fixed << Fahrenheit << " " << "Fahrenheit. " <<endl;
			break;

		case 1:

			cout << "Enter the amount in Celsius: ";
			cin >> Celsius;

			while(cin.fail())
			{	
				cout << "Wrong input, try again: " ;
				cin.clear();
				cin.ignore(256,'\n');	
				cin >> Celsius;
			}

			Kelvin = Celsius + 273.15;
			cout << setprecision(3) << fixed << Celsius << " " << "Celsius is ";
			cout << setprecision(3) << fixed << Kelvin << " " << "Kelvin." <<endl;
			break;

		case 2:

			cout << "Enter the amount in Fahrenheit: ";
			cin >> Fahrenheit;

			while(cin.fail())
			{	
				cout << "Wrong input, try again: " ;
				cin.clear();
				cin.ignore(256,'\n');	
				cin >> Fahrenheit;
			}

			Celsius = (((Fahrenheit - 32)*5)/9);
			cout << setprecision(3) << fixed << Fahrenheit << " " << "Fahrenheit is ";
			cout << setprecision(3) << fixed << Celsius << " " << "Celsius. " <<endl;
			break;

		case 3: 

			cout << "Enter the amount in Fahrenheit: ";
			cin >> Fahrenheit;

			while(cin.fail())
			{	
				cout << "Wrong input, try again: " ;
				cin.clear();
				cin.ignore(256,'\n');	
				cin >> Fahrenheit;
			}

			Kelvin = (((Fahrenheit + 459.67)*5)/9);  
			cout << setprecision(3) << fixed << Fahrenheit << " " << "Fahrenheit is ";
			cout << setprecision(3) << fixed << Kelvin << " " << "Kelvin." <<endl;
			break;


		case 4:

			cout << "Enter the amount in Kelvin: ";
			cin >> Kelvin;

			while(cin.fail())
			{	
				cout << "Wrong input, try again: " ;
				cin.clear();
				cin.ignore(256,'\n');	
				cin >> Kelvin;
			}

			Celsius = Kelvin - 273.15;
			cout << setprecision(3) << fixed << Kelvin << " " << "Kelvin is ";
			cout << setprecision(3) << fixed << Celsius << " " << "Celsius. " <<endl;
			break;



		case 5: 
			cout << "Enter the amount in Kelvin: ";
			cin >> Kelvin;

			
			while(cin.fail())
			{	
				cout << "Wrong input, try again: " ;
				cin.clear();
				cin.ignore(256,'\n');	
				cin >> Kelvin;
			}

			Fahrenheit = (((Kelvin * 9)/5)-459.67);
			cout << setprecision(3) << fixed << Kelvin << " " << "Kelvin is";
			cout << setprecision(3) << fixed << Fahrenheit << " " << "Fahrenheit." <<endl;
			break;
	
		}
			

			return 0;
			
	}