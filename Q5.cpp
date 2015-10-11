#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));  // generate random integer
//initialize variables
    int number=rand()%1000+1;;
    int guess;
    int distance1;
    int distancen; 

    cout << "Enter your first guess:" << endl; //promt user input
    cin >> guess;
    
    
    while(guess!=number)
    {
        distance1 = abs(number - guess); //calculate distance of previous guess
        cout << "Enter your next guess:" << endl;  //prompt another guess
	cin >> guess;
        distancen = abs(number - guess);  //calculate distance of latest guess
    // print colder, warmer, no change, depending on distance comparison
        if (distancen == distance1)
	{
            cout << "No Change" << endl;

        }

	else if (distancen > distance1)
        {
            cout << "Colder" << endl;
           
        }
        
        else if(distancen < distance1)
        {
            cout << "Warmer" << endl;
	    
        }
      
    }
    //print correct if guess is right
    if(guess==number)
    { 
        cout << "Correct! The number was " << guess << endl;
    } 
    
    return 0;
}
      
