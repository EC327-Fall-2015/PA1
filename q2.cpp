#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int c_type;
	
	double unit_valuei;
	
	double unit_valuef;

	//Check to determine valid conversion choice were made

	int check;

	cout << "Please select a conversion type." << endl;

	cout << "Celsius to Fahrenheit (enter 0)" << endl;

	cout << "Celsius to Kelvin (enter 1)" <<endl;

	cout << "Fahrenheit to Celsius (enter 2)" << endl;

	cout << "Fahrenheit to Kelvin (enter 3)" << endl;

	cout << "Kelvin to Celsius (enter 4)" << endl;

	cout << "Kelvin to Fahrenheit (enter 5)" << endl;

	cout << "Conversion type: ";

	cin >> c_type;

	while( c_type > 5 || c_type < 0 || cin.fail() ) 
	 {
	   
	   if(cin.fail())  // Clears error flag to allow furher I/O operations, and skips to new line to avoid infinite loop
	     {
	       cin.clear();

	       cin.ignore(100, '\n');
	     }

	    cout << "Wrong input, try again: ";

	    cin >> c_type;
	    
	  }

	switch(c_type)
	  {
	  case 0:
	    cout << "Enter the amount in Celsius: ";

	    cin >> unit_valuei;
	    
	    break;

	  case 1:

	    cout <<"Enter the amount in Celsius: ";

	    cin >> unit_valuei;
	    
	    break;

	  case 2:
	    cout << "Enter the amount in Fahrenheit: ";

	    cin >> unit_valuei;
	    	    
	    break;

	  case 3:

	    cout << "Enter the amount in Fahrenheit: ";

	    cin >> unit_valuei;
	    
	    break;

	  case 4:

	    cout << "Enter the amount in Kelvin: ";

	    cin >> unit_valuei;

	    break;

	  case 5:
	    cout << "Enter the amount in Kelvin: ";

	    cin >> unit_valuei;
	     
	    break;

	  }

	while(cin.fail())
	  {
	    cin.clear();

	    cin.ignore(100, '\n');

	    cout << "Wrong input, try again: ";

	    cin >> unit_valuei;
	  }

	cout << endl;
	
	  switch (c_type)
		{
		     case 0:	
			        							
				unit_valuef = unit_valuei * 1.800 +32;
				
				std::cout << std::fixed << setprecision(3) << unit_valuei << " Celsius is ";
				
				std::cout << std::fixed << setprecision(3) << unit_valuef << " Fahrenheit.";
				
				break; 
				
		      case 1:		
										
				unit_valuef = unit_valuei + 273.15;
				
				std::cout << std::fixed << setprecision(3) << unit_valuei << " Celsius is ";
				
				std::cout << std::fixed << setprecision(3) << unit_valuef << " Kelvin.";
				
				break;
			
		      case 2:				
								
				unit_valuef = (unit_valuei - 32);
				
				unit_valuef= (.55555) * unit_valuef;
				  
				std::cout << std::fixed << setprecision(3) << unit_valuei << " Fahrenheit is ";
				
				std::cout << std::fixed << setprecision(3) << unit_valuef <<" Celsius.";
				
				break;
				
		      case 3:
											
				unit_valuef= ((unit_valuei -32) *(.55555)) + 273.15;
				
				std::cout << std::fixed << setprecision(3) << unit_valuei << " Fahrenheit is ";
				
				std::cout << std::fixed << setprecision(3) << unit_valuef << " Kelvin.";
				
				break;
				
		      case 4:
			        									
				unit_valuef = unit_valuei - 273.15;
				
				std::cout << std::fixed << setprecision(3) << unit_valuei << " Kelvin is ";
				
				std::cout << std::fixed << setprecision(3) << unit_valuef << " Celsius.";
				
				break;
				
		      case 5:
						
				unit_valuef= ((unit_valuei - 273.15) * (1.8000)) +32;
				
				std::cout << std::fixed << setprecision(3) << unit_valuei << " Kelvin is ";
				
				std::cout<< std::fixed << setprecision(3)<< unit_valuef << " Fahrenheit.";
				
				break;
		}
	
	return 0;
	
}
