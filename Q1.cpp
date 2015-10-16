#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    
    double a,b,c,max,ave,area,perimeter,round;
   
    // prompt user to enter the dimensions of the triangle
    cout<<"Enter the dimensions of the triangle: "<<endl;

    cout<<"Side-1: ";
    cin>>a;
    cout<<"Side-2: ";
    cin>>b;
    cout<<"Side-3: ";
    cin>>c;
    
    // find the largest side out of the three sides entered
    max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    
    // error check if the three sides do not form a triangle
    if((a + b + c - max) <= max){
        cout<<"Dimensions "<<a<<", "<<b<<", "<<c<<" do not form a triangle."<<endl;
    }
    else{
        
        // calculate the area and perimeter
        ave = (a + b + c)/2;
        area = sqrt(ave *(ave - a)*(ave - b)*(ave - c));
        perimeter = a + b + c;
        
        // round the area to 2 decimal places
        round = 100 * area;
        int rounded = (int)(round + 0.5);
        area = (double)rounded/100;
        
    // output the result
    cout<<"This triangle’s area is "<<area<<" square-units, and its perimeter is "<<perimeter<<" units."<<endl;
    
        
    }
    
    return 0;
    
}