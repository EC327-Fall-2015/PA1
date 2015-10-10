

#include <iostream> // to use cin and cout
#include <string>// to use strings
using namespace std;
string hex (long int num) //create the hex functiont that takes a integer and returns string of hex value
{
    int remainder;
    string hexresult; //must make it a string so can conjoin results instead of adding
    long int result = num;
    char hex;
    while (result != 0) //while there is a remainder it will keep going
    {
        remainder = result % 16; //this is how hex is found
        result = result / 16;
        if (remainder < 10)
        {
            remainder = remainder + 48; //turns number into the ASCII character
        }
        else if (remainder >= 10)
        {
            remainder = remainder + 55; //turns 10-15 into a-f
        }
        hex = (char)remainder; //saves remainder and turns to a character
        hexresult = hex + hexresult; //puts new character at beginning of hexresult string
        
    }
    return hexresult; //returns the hexresult which is the string in hex
    
}
int main ()
{
    long int num1, num2;
    string numb1, numb2;
    cout <<"Enter two positive integers: "<<endl;
    cin >> num1; // input two numbers
    cin >> num2;
    cout <<endl;
    numb1 = hex(num1); //calls the hex function above to convert to hex string
    numb2 = hex(num2);
    long leng1 = numb1.length();
    long leng2 = numb2.length();
    while (leng1 != leng2) //to account for uneven length of hex numbers
    {
        if (leng1 > leng2)
        {
            numb2 = '0' + numb2;
            leng2 += 1;
        }
        else if (leng2 > leng1)
        {
            numb1 = '0' + numb2;
            leng1 += 1;
        }
    }
    int humm = 0; //hummm will be the hamming distance
    int count = 0; //using a count to tell when to stop
    while (count <= leng2)
    {
        if (numb1[count] != numb2[count]) //compares value at place count in both numbers
        {
            humm += 1; //adds to humm if they are different values
        }
        count += 1;
    }
    cout <<"Hamming distance between "<< num1 <<" and "<< num2 << " when numbers are in hex format is "<< humm;
    return 0;
}