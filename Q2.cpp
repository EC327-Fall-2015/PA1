#include <iostream>
using namespace std;

int main()
{
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	
	cout.precision(3); // 3 decimal places
	
	float caseCheck;
	float answer;
	float temp;
	
	cout << "Conversion type: " ;
	cin >> caseCheck ;
	
	// looked up cin.fail() usage on http://stackoverflow.com/questions/17906990/meaning-of-cin-fail-in-c
	
	while (cin.fail() || caseCheck > 5 || caseCheck < 0 || (caseCheck != 0 && caseCheck != 1 && caseCheck != 2 && caseCheck != 3 && caseCheck != 4 && caseCheck != 5)) //cin.fail() will return true or false
	{
		cout << "Wrong input, try again: " ;
		cin.clear(); // if True from cin.fail(), clear the true/false value after sending 'wrong input...'
		cin.ignore(256, '\n'); // ignore the next 256 characters (and next line?) - description on stackoverflow confused me slightly
		cin >> caseCheck;
	}
	
	int switchChoice = caseCheck; // made sure switchChoice was an integer
	
	switch (switchChoice) // if statement to apply appropriate conversion
	{
		case 0: cout << "Enter the amount in Celsius: ";
				cin >> temp;
				while (cin.fail()) // applied same form of cin.fail() loop as above to make sure a number was entered
				{
					cout << "Wrong input, try again: " ;
					cin.clear();
					cin.ignore(256, '\n');
					cin >> temp;
				}
				answer = (temp * 1.8) + 32;
				cout << fixed << temp << " Celsius is " << fixed << answer << " Fahrenheit." << endl; break;
				
		case 1: cout << "Enter the amount in Celsius: ";
				cin >> temp;
				while (cin.fail())
				{
					cout << "Wrong input, try again: " ;
					cin.clear();
					cin.ignore(256, '\n');
					cin >> temp;
				}
				answer = temp + 273.15;
				cout << fixed << temp << " Celsius is " << fixed << answer << " Kelvin." << endl; break;
		
		case 2: cout << "Enter the amount in Fahrenheit: ";
				cin >> temp;
				while (cin.fail())
				{
					cout << "Wrong input, try again: " ;
					cin.clear();
					cin.ignore(256, '\n');
					cin >> temp;
				}
				answer = (temp - 32)/(1.8);
				cout << fixed << temp << " Fahrenheit is " << fixed << answer << " Celsius." << endl; break;
		
		case 3: cout << "Enter the amount in Fahrenheit: ";
				cin >> temp;
				while (cin.fail())
				{
					cout << "Wrong input, try again: " ;
					cin.clear();
					cin.ignore(256, '\n');
					cin >> temp;
				}
				answer = ((temp - 32)/(1.8)) + 273.15;
				cout << fixed << temp << " Fahrenheit is " << fixed << answer << " Kelvin." << endl; break;
		
		case 4: cout << "Enter the amount in Kelvin: ";
				cin >> temp;
				while (cin.fail())
				{
					cout << "Wrong input, try again: " ;
					cin.clear();
					cin.ignore(256, '\n');
					cin >> temp;
				}
				answer = temp - 273.15;
				cout << fixed << temp << " Kelvin is " << fixed << answer << " Celsius." << endl; break;
				
		case 5: cout << "Enter the amount in Kelvin: ";
				cin >> temp;
				while (cin.fail())
				{
					cout << "Wrong input, try again: " ;
					cin.clear();
					cin.ignore(256, '\n');
					cin >> temp;
				}
				answer = ((temp - 273.15) * 1.8) + 32;
				cout << fixed << temp << " Kelvin is " << fixed << answer << " Fahrenheit." << endl; break;
	}
	
	return 0;
}