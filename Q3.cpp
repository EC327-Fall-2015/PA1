#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
using namespace std;


int main(){
  
    int num1, num2, diff, temp, size1, size2, size, n1, n2;
    string hex1, hex2;
    
    // prompt user for two numbers
    cout<<"Enter two positive integers:"<<endl;
    cin>>num1;
    cin>>num2;
    
    // store values in backup variables, because num1 and num2 will change value later
    n1 = num1;
    n2 = num2;
    
    // counter for the digits of hex numbers needed
    int count = 1;
    
    // temp calculates the sizes of the hexadecimal values, and stores them in size1 and size2
    temp = num1;
    
    while (temp >= 16) {
        count++;
        temp = (int)temp/16;
    }
    size1 = count;
    
    temp = num2;
    count = 1;
    
    while (temp >= 16) {
        count++;
        temp = (int)temp/16;
        
    }
    
    size2 = count;
    
    // find the bigger size out of the two numbers
    if (size1 > size2) {
        size = size1;
    }
    else{
        size = size2;
    }
    
    // store the size in backup variable because size will change value later
    int n = size;
    
    // create two arrays that have the same sizes
    int array1 [size];
    int array2 [size];
    
    // fill 0's in both of the arrays
    for (int i = 0; i<size; i++) {
        array1[i] = 0;
        array2[i] = 0;
    }
    
    // calculate hex values and store them into the two arrays
    /* for example, if user enters 100(hex: 64) and 1000000(hex: F4240), the first array will store [6 4 0 0 0], and the second array will store [15 4 2 4 0]*/
    do {
        if (size1 >= size){
            array1[size-1] = num1%16;
            num1 = floor(num1/16);
        }
        if (size2 >= size) {
            array2[size-1] = num2%16;
            num2 = floor(num2/16);
        }
        size--;
        
    } while (size>0);
    
    // compare the arrays and store the difference in dif
    int dif = 0;
    for (int i = 0; i < n; i++) {
        if(array1[i] != array2[i]){
        
            dif++;
            
        }
    }
    
    // output the result
    cout<<"Hamming distance between "<<n1<<" and "<<n2<<" when numbers are in hex format is: "<<dif<<endl;
    
    
    return 0;

}