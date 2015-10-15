#include <iostream>


using namespace std;


int main()

{

        char mychar;   //initiate input character to offset

        int myoffset; 	//initiate input offset

        int mychar2; 	//initiates as int to be integer ASCII value of mychar
	
        cout << "Enter character: " ; // prompt user to inter character

        cin >> mychar;//input charater into mychar

        mychar2 = (int)mychar;//turns inputed character into respective ASCII value

        cout << "Offset (enter 0 to convert case): ";//prompts user to enter offset

        cin >> myoffset;//input offset

        if ( (mychar2 > 96 && mychar2 < 121) && myoffset == 0) //determines character inputed is a lower case letter AND offput is zero

          mychar2 -= 32; // turn lower case letter into capital


        else if ( (mychar2 > 64 && mychar2 < 89) && myoffset== 0) //determines if character inputed is a capital letter AND offest is zero

          mychar2 += 32;// turn capital into lower case


        if ( (myoffset + mychar) > 127) //if character PLUS offset gives too large a value and has a net value outside the ASCII range, then the follwoing output message will show

          cout << "Error. Out of Range." << endl; //Displays error if sum is out of range


	else // if sum of offset and input are withing range, then this will be run

            {

	      int mychar3 = mychar2 +myoffset;//finally gets mychar 2 which is original or modified ASCII value that will be used (if modified offset will be zero)

	      char mychar4 = (char)mychar3; // converts final ASCII value from last part into character that was offset

	      cout << "New Character: " << mychar4 <<  endl;//outputs new character

            }



    return 0;

}
