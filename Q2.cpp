#include <iostream>
#include <limits>

using namespace std;

int main()
{
	//printing conversion options for user to choose
	cout << "Celsius to Fahrenheit (enter 0)" << endl;
	cout << "Celsius to Kelvin (enter 1)" << endl;
	cout << "Fahrenheit to Celsius (enter 2)" << endl;
	cout << "Fahrenheit to Kelvin (enter 3)" << endl;
	cout << "Kelvin to Celsius (enter 4)" << endl;
	cout << "Kelvin to Fahrenheit (enter 5)" << endl;
	
	//user input - declare variables for conversion type
	int convtype;
	
	//error check if the input is a string
	bool isstrconv = false;
	cout << "Conversion type: ";
	do {
		cin >> convtype;
		if (cin.fail()) { //if input is a string, cin will fail. 
			
		  //clear the buffer
			cin.clear();
			//clears the entire input that was just entered
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
			cout << "Wrong input, try again: ";
		}
		else { //otherwise, the input is valid
			isstrconv = true;
		}
	} while(!isstrconv);
	
	//declaring variables
	double degrin;
	double degrout;
	
	bool isstrdeg = false;
	bool wronginp = true;

	do
	{
		switch (convtype)
		{
			case 0: // convert Celsius to Fahrenheit
				cout << "Enter the amount in Celsius: ";
				
				// error check for string 
				  do {
				    cin >> degrin;
				    if (cin.fail()) { //if input is a string, the cin will fail. 
				      //clear the buffer
				      cin.clear();
				      //clear the entire input that was just entered
				      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
				      cout << "Wrong input, try again: ";
				    }
				    else { //otherwise, the input is valid
				      isstrdeg = true;
				    }
				  } while(!isstrdeg);

			        //calculate and print answer
				degrout = degrin * 1.8  + 32;
				std::cout.precision(3);
				cout << std::fixed << degrin << " Celsius is " << degrout << " Fahrenheit." << endl;
				wronginp = 0;
				break;

			case 1: // convert Celsius to Kelvin 
				cout << "Enter the amount in Celsius: ";
				
				// error check for string 
				  do {
				    cin >> degrin;
				    if (cin.fail()) { //if input is a string, the cin will fail. 
				      //clear the buffer
				      cin.clear();
				      //clear the entire input that was just entered
				      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
				      cout << "Wrong input, try again: ";
				    }
				    else { //otherwise, the input is valid
				      isstrdeg = true;
				    }
				  } while(!isstrdeg);
				  
				//calculate and print answer  
				degrout = degrin + 273.15;
				std::cout.precision(3);
				cout << std::fixed << degrin << " Celsius is " << degrout << " Kelvin." << endl;
				wronginp = 0;
				break;

			case 2: // convert Fahrenheit to Celsius
				cout << "Enter the amount in Fahrenheit: ";
			
				// error check for string 
				  do {
				    cin >> degrin;
				    if (cin.fail()) { //if input is a string, the cin will fail. 
				      //clear the buffer
				      cin.clear();
				      //clear the entire input that was just entered
				      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
				      cout << "Wrong input, try again: ";
				    }
				    else { //otherwise, the input is valid
				      isstrdeg = true;
				    }
				  } while(!isstrdeg);
				
				//calculate and print  
				degrout = (degrin - 32) * 0.5555556;
				std::cout.precision(3);
				cout << std::fixed << degrin << " Fahrenheit is " << degrout << " Celsius." << endl;
				wronginp = 0;
				break;

			case 3: // convert Fahrenheit to Kelvin
				cout << "Enter the amount in Fahrenheit: ";
				
				// error check for string 
				  do {
				    cin >> degrin;
				    if (cin.fail()) { //if input is a string, the cin will fail. 
				      //clear the buffer
				      cin.clear();
				      //clear the entire input that was just entered
				      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
				      cout << "Wrong input, try again: ";
				    }
				    else { //otherwise, the input is valid
				      isstrdeg = true;
				    }
				  } while(!isstrdeg);
				
				//calculate and print  
				degrout = ((degrin - 32) * 0.5555556) + 273.15;
				std::cout.precision(3);
				cout << std::fixed << degrin << " Fahrenheit is " << degrout << " Kelvin." << endl;
				wronginp = 0;
				break;

			case 4: // convert Kelvin to Celsius
				cout << "Enter the amount in Kelvin: ";
				
				// error check for string 
				  do {
				    cin >> degrin;
				    if (cin.fail()) { //if input is a string, the cin will fail. 
				      //clear the buffer
				      cin.clear();
				      //clear the entire input that was just entered
				      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
				      cout << "Wrong input, try again: ";
				    }
				    else { //otherwise, the input is valid
				      isstrdeg = true;
				    }
				  } while(!isstrdeg);
				
				//calculate and print  
				degrout = degrin - 273.15;
				std::cout.precision(3);
				cout << std::fixed << degrin << " Kelvin is " << degrout << " Celsius." << endl;
				wronginp = 0;
				break;

			case 5: // convert Kelvin to Fahrenheit
				cout << "Enter the amount in Kelvin: ";
				
				// error check for string 
				  do {
				    cin >> degrin;
				    if (cin.fail()) { //if input is a string, the cin will fail. 
				      //clear the buffer
				      cin.clear();
				      //clear the entire input that was just entered
				      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
				      cout << "Wrong input, try again: ";
				    }
				    else { //otherwise, the input is valid
				      isstrdeg = true;
				    }
				  } while(!isstrdeg);
				
				//calculate and print  
				degrout = (degrin - 273.15) * 1.8 + 32;
				std::cout.precision(3);
				cout << std::fixed << degrin << " Kelvin is " << degrout << " Fahrenheit." << endl;
				wronginp = 0;
				break;

			default: // not a case but is a integer
			cout << "Wrong input, try again: ";
			cin >> convtype;
			break;

		} 

	} while(wronginp == true);

	return 0;
}
