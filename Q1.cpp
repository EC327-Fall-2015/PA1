#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()
{
    //Initializing variables
    
  	double side_a;
    
  	double side_b;
    
  	double side_c;
  
  	double half_a_dif;
  
  	double half_b_dif;
  
  	double half_c_dif;
    
  	double half_perimeter;
  
  	double inside_square_root;

  	double area;
  	
	//Set the precision to be based on the fixed point, and makes it not include any decimals *yet*
  
  	cout<<fixed;
  	
  	cout<<setprecision(0);
    
    //Asking user input
    
    cout<<"Enter the dimensions of a triangle:"<<endl;
    
    //Asking for the dimensions of the triangle
    
    cout<<"Side-1: ";
    
    cin>>side_a;
    
    cout<<endl<<"Side-2: ";
    
    cin>>side_b;
    
    cout<<endl<<"Side-3: ";
    
    cin>>side_c;
    
    //Checking to see if the sides make a triangle
    
    //If the larger side is greater than or equal to the two smaller sides, it is not a triangle
    
    if (side_a>=(side_b+side_c))
    {
        cout<<"Dimensions "<<side_a<<", "<<side_b<<", and " <<side_c<<" do not form a triangle."<<endl;
        
        return 0;
    }
    
    else if (side_b>=(side_a+side_c))
    {
        cout<<"Dimensions "<<side_a<<", "<<side_b<<", and " <<side_c<<" do not form a triangle."<<endl;
        
        return 0;      
    }
    
    else if (side_c>=(side_a+side_b))
    {
        cout<<"Dimensions "<<side_a<<", "<<side_b<<", and " <<side_c<<" do not form a triangle."<<endl;
        
        return 0;     
    }

    else
    {
    	//Calculating the area and perimeter of the triangle, using Heron's formula
    	
      	half_perimeter = ((side_a+side_b+side_c)/2);
        
    	half_a_dif = (half_perimeter-side_a);
    	
    	half_b_dif = (half_perimeter-side_b);
    	
    	half_c_dif = (half_perimeter-side_c);
    	
    	inside_square_root = (half_perimeter * half_a_dif * half_b_dif * half_c_dif);
        
      	area = sqrt(inside_square_root);
        
        //Output, set precision to two decimal places, all outputted numbers will be at this precision, whether or not they have decimals
        
        cout<<setprecision(2);
        
      	cout<<"The triangle's area is "<<area<<" square-units."<<endl<<"Its perimeter is "<<(side_a+side_b+side_c)<<" units."<<endl;
        
      	return 0;
        
    }
}
