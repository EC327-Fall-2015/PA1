#include <iostream>
#include <limits> // Needed for failure condition.
using namespace std;

int main()

{
  int choice;
  double value; 
  double answer;

 

  cout << "Welcome, please press the number next to the statement of the temperature conversion you would like: " << endl;
  cout << endl;
  cout << "Celsius to Fahrenheit (enter 0)" << endl;
  cout << "Celsius to Kelvin (enter 1)" << endl;
  cout << "Fahrenheit to Celsius (enter 2)" << endl; 
  cout << "Fahrenheit to Kelvin (enter 3)" << endl; 
  cout << "Kelvin to Celsius (enter 4)" << endl; 
  cout << "Kelvin to Fahrenheit (enter 5)" << endl; 
  cin >> choice ;
 



   while (cin.fail())
    {
    cout << endl;
    cout << endl;
   cout << "Not cool man. Get outta here with that character stuff. Enter a decent number: " << endl;
  
   cin.clear();
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // I will not lie. I got help from TAs on this one.
   cout << endl;
   cin >> choice ;
     }
 

  while ((choice < 0) || (choice > 5) )
   
    {     
      cout << "ERROR: Wrong choice. Pick a correct value." << endl;
      cout << endl;
      cout << "Pick one of the five: "<< endl;
      cout << endl;
      cout << "Celsius to Fahrenheit (enter 0)" << endl;     
      cout << "Celsius to Kelvin (enter 1)" << endl;     
      cout << "Fahrenheit to Celsius (enter 2)" << endl;     
      cout << "Fahrenheit to Kelvin (enter 3)" << endl;    
      cout << "Kelvin to Celsius (enter 4)" << endl;    
      cout << "Kelvin to Fahrenheit (enter 5)" << endl;     
      cin >> choice;     
    }

  if (choice == 0)
   
    {
      cout << "Conversion type: Celsius to Fahrenheit"<< endl;
      cout << "Enter the value in Celsius:"<< endl;
      cin >> value;
      while (cin.fail())
      {
      cout << endl;
      cout << endl;
      cout << "Come on dude. Not again. Give me something to work with here: " << endl;
  
      cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cout << endl;
      cin >> value ;
      }
     
      answer = (value * 9/5) + 32;
      cout << answer<< endl;
      cout << value << " Celsius is " << answer << " Fahrenheit" << endl;   
    }
 
  else if (choice == 1)
   
    {
      cout << "Conversion type: Celsius to Kelvin" << endl;
      cout << "Enter the value in Celsius: " << endl;
      cin >> value;
      while (cin.fail())
      {
      cout << endl;
      cout << endl;
      cout << "Come on dude. Not again. Give me something to work with here: " << endl;
  
      cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cout << endl;
      cin >> value ;
      }
      answer = (value + 273.15);
      cout << value << " Celsius is " << answer << " Kelvin" << endl;
     
    }  
 
  else if (choice == 2)
   
    {
      cout << "Conversion type: Fahrenheit to Celsius" << endl;
      cout << "Enter the value in Fahrenheit: " ;
      cin >> value;
      while (cin.fail())
      {
      cout << endl;
      cout << endl;
      cout << "Come on dude. Not again. Give me something to work with here: " << endl;
  
      cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cout << endl;
      cin >> value ;
      }
      answer = (value - 32) * 5 / 9;
      cout << value << " Fahrenheit is " << answer << " Celsius" << endl;
    }

  else if (choice == 3)
    {
      cout << "Conversion type: Fahrenheit to Kelvin" << endl;
      cout << "Enter the value in Fahrenheit: " ;
      cin >> value;
      while (cin.fail())
      {
      cout << endl;
      cout << endl;
      cout << "Come on dude. Not again. Give me something to work with here: " << endl;
  
      cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cout << endl;
      cin >> value ;
      }
      answer = (value + 459.67) * 5 / 9;
      cout << value << " Fahrenheit is " << answer << " Kelvin" << endl;
    }

  else if (choice == 4)
    {
      cout << "Conversion type: Kelvin to Celsius" << endl;
      cout << "Enter the value in Kelvin: ";
      cin >> value;
       while (cin.fail())
      {
      cout << endl;
      cout << endl;
      cout << "Come on dude. Not again. Give me something to work with here: " << endl;
  
      cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cout << endl;
      cin >> value ;
      }
      answer =( value - 273.15);
      cout << value << " Kelvin is " << answer << " Celsius" << endl;
    }

  else if (choice == 5)
    {
      cout << "Conversion type: Kelvin to Fahrenheit" << endl;
      cout << "Enter the value in Kelvin: ";
      cin >> value;   
       while (cin.fail())
      {
      cout << endl;
      cout << endl;
      cout << "Come on dude. Not again. Give me something to work with here: " << endl;
  
      cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cout << endl;
      cin >> value ;
      }
      answer = value * 9 / 5 - 459.67;
      cout << value << " Kelvin is " << answer << " Fahrenheit" << endl;
    }
 
 return 0;

}
