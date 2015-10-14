#include <iostream>
#include <stdlib.h>
using namespace std;
 
string hex(int number){

  string hex= "";
  while (number !=0){
    int hexnum= number % 16;
    char character= (hexnum<=9 && hexnum>=0) ?
      static_cast <char> (hexnum +'0'):
      static_cast <char> (hexnum - 10 + 'A');
    hex= character+ hex;
    number= number/16;}
    return hex;
}
 
int main(){
        cout << "Enter two positive integers: "<< endl;
        int num1, num2, answer;
        int count=0;
	int var1, var2;
        string hexnum1; //Initialize variable to store hex value 1
        string hexnum2; //Initialize variable to store hex value 2
        cin >> num1;
        cin >> num2;
	hexnum1= hex(num1); //Convert integer to hex with base 16
	hexnum2= hex(num2); //Convert integer to hex with base 16
	for(int i = 0; i < hexnum1.length(); i++){
	  var1=hexnum1[i];
	  var2=hexnum2[i];
	  if (var1==var2){
	    count++;
	  }
}
        answer= hexnum1.length()-count; //This gives us what is not equal- Hamming Distance
       
	cout << "Hamming distance between " << num1 << " and " << num2;
        cout << " when numbers are in hex format is: " << answer << "\n";
              
	return 0;
}
