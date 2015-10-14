/*

Q2.cpp (PA1, Q2)

Converting Units (10 pts)
	- Converts #s among C, F, & K (ANY WHICH WAY)
	- Asks user to select conversion type
	- If incorrect code entered, error msg shown and user reprompted

Name: Kiara Alberto
BUID:  U73121880
email: kikisq@bu.edu

*/


#include <iostream>
#include <iomanip>						// set precision function
//#include <limits>						// numeric limits (decided not to use)
using namespace std;


// Celsius --> Fahrenheit
double cel2Fah(double val)
{
	double X = ((val * (9.0/5.0)) + 32);   
	//cout << "Fah temp is " << X << endl;

	return X;
}


// Fahrenheit --> Celsius
double fah2Cel(double val)
{
	double X = (((5.0/9.0) * val) - 32);
	//cout << "Cel temp is " << X << endl;

	return X;
}


// Celsius --> Kelvin
double cel2Kel(double val)
{
	double X = (val + 273.15);
	//cout << "Kel temp is " << X << endl;

	return X;
}


// Kelvin --> Celsius
double kel2Cel(double val)
{
	double X = (val - 273.15);
	//cout << "Cel temp is " << X << endl;

	return X;
}


// Fahrenheit --> Kelvin					// Converts value to C --> K
double fah2Kel(double val)
{
    double X = ((val + 459.67) * (5.0/9.0));
	
	return X;
}


// Kelvin --> Fahrenheit					// Converts value to C --> F
double kel2Fah(double val)
{
    double X = ((val * (9.0/5.0)) - 459.67);
    
    return X;
}


// Valid value							// Verifies that temp value is a valid number
double validInput()						// Reference via nhgrif (http://bit.ly/1jdVRGT)
{
    double X;							// X = user input (which in this case = val) 
    cin >> X;
    while (cin.fail())						// While input type != double keep looping
    {
        cin.clear();						// Clear error flag
        cin.ignore(1000, '\n');					// Ignore until the 1000th character or '/n' 
								/* cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); was
									suggested, but I don't fully understand the parameters */
        cout << "Wrong input, try again: ";
        cin >> X;						// If input isn't valid, prompt user to enter a new value
    }

    return X;							/* Returns X (val) back into the main function for the proper code case 
									to call the appropriate temp conversion function */
}


// Main function
int main()
{
	// Menu
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;

	// User inputs conversion code
	cout << "Conversion type: ";
	int code;

	// Tests code validity					// Reference via Duoas (http://bit.ly/1R0oB0g)
	while (true)						// While cin != valid number, keep looping
	{
		cin >> code;					// Prompt user to enter code
		
		if ((cin) && (code >= 0) && (code <= 5))	// If code = 0-5, stop
		    break;					// Else, prompt user for new code 				
		
		cin.clear();
		cin.ignore(1000, '\n');				// Ignore until the 1000th character or '/n' 
		cout << "Wrong input, try again: ";		// Inform user input is wrong and go back to start of loop
	}

        // Initialize val variable for the following code cases
        double val;

        // Cel to Fah
	if (code == 0)						// Calls cel2Fah function
        {
		cout << "Enter the amount in Celsius: ";
		val = validInput();				// Verify temp value is valid

		cout << fixed << setprecision(3) << val << " Celsius is " << fixed << setprecision(3)
			<< cel2Fah(val) << " Fahrenheit." << endl;
								// fixed & setprecision(3) needed to set values to X.XXX
	}
	
        // Cel to Kel
        else if (code == 1)					// Calls cel2Kel function
        {
		cout << "Enter the amount in Celsius: ";
		val = validInput();				// Verify temp value is valid
		
		cout << fixed << setprecision(3) << val << " Celsius is " << fixed << setprecision(3)
			<< cel2Kel(val) << " Kelvin." << endl;
								// fixed & setprecision(3) needed to set values to X.XXX
        }

        // Fah to Cel
        else if (code == 2)					// Calls fah2Cel function
        {
		cout << "Enter the amount in Fahrenheit: ";
		val = validInput();				// Verify temp value is valid

        	cout << fixed << setprecision(3) << val << " Fahrenheit is " << fixed << setprecision(3)
        		<< fah2Cel(val) << " Celsius." << endl;
								// fixed & setprecision(3) needed to set values to X.XXX
        }

        // Fah to Kel
        else if (code == 3)					// Calls fah2Kel function
        {
        	cout << "Enter the amount in Fahrenheit: ";
        	val = validInput();				// Verify temp value is valid 

		cout << fixed << setprecision(3) << val << " Fahrenheit is " << fixed << setprecision(3)
			<< fah2Kel(val) << " Kelvin." << endl;
								// fixed & setprecision(3) needed to set values to X.XXX
        }

        // Kel to Cel
        else if (code == 4)					// Calls kel2Cel function
        {
		cout << "Enter the amount in Kelvin: ";
		val = validInput();				// Verify temp value is valid 

		cout << fixed << setprecision(3) << val << " Kelvin is " << fixed << setprecision(3)
		<< kel2Cel(val) << " Celsius." << endl;
								// fixed & setprecision(3) needed to set values to X.XXX
        }
        
        // Kel to Fah
        else    //(code == 5)					// Calls kel2Fah function
        {
		cout << "Enter the amount in Kelvin: ";
		val = validInput();				// Verify temp value is valid 

		cout << fixed << setprecision(3) << val << " Kelvin is " << fixed << setprecision(3)
			<< kel2Fah(val) << " Fahrenheit." << endl;
								// fixed & setprecision(3) needed to set values to X.XXX
        }
		
	return 0;
}	

