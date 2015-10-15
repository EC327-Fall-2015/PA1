#include <iostream>
#include <string> //use for hexadecimal conversion and comparison
using namespace std;

int main ()
{
	int intone; //declare the first user input integer variable
	int inttwo; //declare the second user input integer variable
	cout << "Enter two positive integers: "; //prompt the user for two positive number integers
	cin >> intone; //user enters first integer
	cin >> inttwo; //user enters second integer
	string hexone = ""; //initialize the string for my first hexidecimal conversion from intone
	string hextwo = ""; //initialize the string for my second hexidecimal conversion from inttwo
	int intonecopy = intone; //make a copy of intone in intonecopy for the loop so that intone does not become zero
	int inttwocopy = inttwo; //make a copy of inttwo in inttwocopy for the loop so that inttwo does not become zero
	//until intonecopy is not equal to zero, the while loop will keep running to convert the first integer into a hexidecimal value string
	while (intonecopy != 0)
	{
		int hexvalueone = intonecopy % 16; //the integer hexvalueone is declared and set to be the remainder of the first integer entered divided by 16
		char hexcharacterone = (hexvalueone <= 9 && hexvalueone >= 0) ? //declare and initialize the variable hexcharacter one, which is hexvalueone between and including 0-9
		static_cast<char>(hexvalueone + '0') : //cast the integer hexvalueone plus the character 0 into a character
		static_cast<char>(hexvalueone - 10 + 'A'); //cast the integer hexvalueone minus ten plus the character A into a character
		hexone = hexcharacterone + hexone; //hexcharacterone becomes next indicie of hexone so hexone + hexcharacterone becomes new hexone (string keeps being added onto)
		intonecopy = intonecopy / 16; //divide intonecopy by sixteen and save in intonecopy so the remainer can be stored in hexvalueone at the beginning of the loop if intonecopy does not equal 0 and if it does, end the loop
	}
	//do the same for intcopytwo (comments are the same as above)
	//until inttwocopy is not equal to zero, the while loop will keep running to convert the first integer into a hexidecimal value string
	while (inttwocopy != 0)
	{
		int hexvaluetwo = inttwocopy % 16; //the integer hexvaluetwo is declared and set to be the remainer of the second integer entered divided by 16
		char hexcharactertwo = (hexvaluetwo <= 9 && hexvaluetwo >= 0) ? //declare and initialize the variable hexcharactertwo, which is hexvaluetwo between and including 0-9
		static_cast<char>(hexvaluetwo + '0') : //cast the integer hexvaluetwo plus the character 0 into a character
		static_cast<char>(hexvaluetwo - 10 + 'A'); //cast the integer hexvaluetwo minus ten plus the character A into a character
		hextwo = hexcharactertwo + hextwo; //hexcharactertwo becomes the next indicie of hextwo so hextwo + hexcharactertwo becomes new hextwo (string keeps being added onto)
		inttwocopy = inttwocopy / 16; //divide inttwocopy by sixteen and save in inttwocopy so the remained can be stored in hexvaluetwo at the beginning of the loop if inttwocopy does not equal 0 and if it does, end the loop
	}
	string bigs; //declare the string bigs
	string littles; //declare the string littles
	if ((hexone.length()) > (hextwo.length())) //if the length of hexone is greater than the length of hextwo, assign hexone to bigs and hextwo to littles
	{
		bigs = hexone; //assign hexone to bigs
		littles = hextwo; //assign hextwo to littles
	}
	else //otherwise assign hextwo to bigs and hexone to littles, use this when they are the equal length too
	{
		bigs = hextwo; //assign hextwo to bigs
		littles = hexone; //assign hexone to littles
	}
	int counter = 0; //initialize and declare the variable counter, which counts how many characters are similar in the for loop
	for (int i = 0;  i <= (littles.length()-1); i++) //use for loop from (declared) i = 0 to i is less than or equal to the length of littles - 1, i increments every time
	//use littles.length() because it is the shorter string, so that is the maximum number of characters both strings can have that are the same
	//compare each indicie starting at 0 because string indicies start at zero, that is why it goes to the length of littles minus one
	{
		if (bigs[i] == littles[i]) //if the indicie of bigs is equal to the indicie of littles (indicies are the same), add to the counter, then loop will repeat
		{
			counter = counter + 1; //counter is incremented by 1
		}
	} //once i = length of littles and goes through loop, end loop
	int allnum = bigs.length(); //declare and initialize the integer allnum to be the length of the larger string
	int hamming = allnum - counter; //the hamming distance is the number of similar indicies of each string subtracted from the total number of indicies in the larger string (length of larger string minus the same number of elements)
	cout << "Hamming distance between " << intone << " and " << inttwo << " when numbers are in hex format is: " << hamming << endl; //print statement giving the hamming distance between two integers in the hex format
	return 0; //end program
}