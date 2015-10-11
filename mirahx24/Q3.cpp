#include<iostream>
using namespace std;

int main() { 
//Prompt user for two integers  
        int n1, n2; 
        cout << "Enter two Positive integers:" << endl;
        cin >> n1 >> n2;
        int fst = n1, sec = n2; //make two buffers for the two integers
        int fstrest, secrest; //two variables to store the reminder of integer % 16          
        int hamming = 0; //variable to store value of hamming distance

//Calculating Hamming distance
//if the reminder of the integer % 16 is different, then the integer won't have the same hex value at tenth, hundredth and so on's place. 
//To calculate the distance, simply compare the reminder of the two integers
//If the reminder is different, then hamming distance plus one.
//Continue the operation until the integer hits zero    
        while (fst != 0 && sec != 0) {
                fstrest = fst % 16;
                secrest = sec % 16;
                fst = fst / 16;
		sec = sec / 16;
                if (fstrest != secrest) {
                        hamming++;
                }
        }
        cout << "Hamming distance between " << n1 << " and " << n2 << " when numbers are in hex format is: " << hamming <<endl;
return 0;
}
 
