#include <iostream>
#include <iomanip>
using namespace std;
 
int listmenu(){
               int ctype;
               cout << "Celsius to Farenheit (enter 0)" << endl;
               cout << "Celsius to Kelvin (enter 1)" << endl;
               cout << "Fahrenheit to Celsius (enter 2)" << endl;
               cout << "Fahrenheit to Kelvin (enter 3)" << endl;
               cout << "Kelvin to Celsius (enter 4)" << endl;
               cout << "Kelvin to Farenheit (enter 5)" << endl;
               cout << "Conversion type: ";
               cin >> ctype;
               while(cin.fail() || (0>ctype) || (ctype>5)){  //Is true if the input is not an integer or is not in range
                 cout << "Wrong input, try again: ";  
		 cin.clear(); //Clear cin for a new input so that there is no infinite loop
		 cin.ignore(255, '\n');
		 cin >> ctype;}
                              
               return ctype;
}
double checkcelsius(){
               double celsius;
               cout << "Enter the amount in Celsius: ";
               cin >> celsius;
               while     (cin.fail() || (celsius < -273.15)){
                             cout << "Wrong input, try again: ";
			     cin.clear(); //Clear instream for new input
			     cin.ignore(255,  '\n');
			      cin >> celsius;
               } //Is true if the input is not an integer    
               return celsius;
}

double checkfarenheit(){
               double farenheit;
               cout << "Enter the amount in Farenheit: ";
               cin >> farenheit;
               while     (cin.fail() || (-459.4 > farenheit)){
		 cout << "Wrong input, try again: ";                              
		 cin.clear(); //Clear instream for new input
		;cin.ignore(255, '\n');
		 cin >> farenheit;
               } //Is true if the input is not an integer
      
      return farenheit;
}

double checkkelvin(){
               double kelvin;
               cout << "Enter the amount in Kelvin: ";
               cin >> kelvin;
               while     (cin.fail() || (0 > kelvin)){
		 cout << "Wrong input, try again: ";                             
		 cin.clear(); //Clear instream for new input
		 cin.ignore(255, '\n');
                 cin >> kelvin;
               } //Is true if the input is not an integer
               return kelvin;
}

int main(){
               int ctype;
               double celsius, farenheit, kelvin;
               ctype= listmenu();
               switch (ctype){
               case 0: // Celsius to Farenheit
                              celsius = checkcelsius();
                              farenheit = ((celsius *9)/5) + 32;
                              cout << fixed<< setprecision(4) << celsius << " Celsius is " << farenheit << " Farenheit."<< endl;
                              break;
               case 1: // Celsius to Kelvin
                              celsius = checkcelsius();
                              kelvin = celsius + 273.15;
                              cout <<fixed<< setprecision(4) << celsius << " Celsius is " << kelvin << " Kelvin "<< endl;
                              break;
               case 2: // Farenheit to Celsius
                              farenheit= checkfarenheit();
                              celsius= ((farenheit -32)*5)/9;
                              cout << fixed<< setprecision(4) << farenheit << " Farenheit is "<< celsius << " Celsius." << endl;
                              break;
               case 3: // Farenheit to Kelvin
                              farenheit= checkfarenheit();
                              kelvin = (((farenheit -32)*5)/9)+273.15;
                              cout << fixed<< setprecision(4) << farenheit << " Farenheit is "<<  kelvin << " Kelvin." << endl;
                              break;
              case 4: // Kelvin to Celsius
                              kelvin= checkkelvin();
                              celsius = kelvin - 273.15;
                              cout << fixed << setprecision(4) << kelvin << " Kelvin is " << celsius <<" Celsius "<< endl;
                              break;
               case 5: // Kelvin to Farenheit
                              kelvin= checkkelvin();
                              farenheit= (1.8*(kelvin-273)) + 32;
                              cout << fixed<< setprecision(4) << kelvin << " Kelvin is " << farenheit << " Farenheit "<< endl;
                             break;
               }
	       return 0;

}
