//
//  main.cpp
//  Q3
//
//  Created by Tiffany Wu on 9/22/15.
//  Copyright © 2015 Tiffany Wu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // The code first all the variables and then has the user input two positive integers
    
    int num1, num2, rem, hex;
    unsigned long counter;
    char char1[50], char2[50];
    string hex_form1 = "" , hex_form2 = "", string1 = "";
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    rem = num1;
    
    /* The while loop keeps running while there is still a remainder (remainder is used to calculate the hex code). It then changes the hex number into a string and saves the string into char1.
     */
    
    while (rem != 0)
    {
        hex = rem % 16;
        rem /= 16;
        sprintf (char1, "%d", hex);
        string1 = char1;
        
        // The if statement is to change the double digit numbers to their respective hex form
        
        if (string1 == "10")
            string1 = "A";
        else if (string1 == "11")
            string1 = "B";
        else if (string1 == "12")
            string1 = "C";
        else if (string1 == "13")
            string1 = "D";
        else if (string1 == "14")
            string1 = "E";
        else if (string1 == "15")
            string1 = "F";
        
        /* Since the hex codes take the last remainder as the first number, this code makes sure that the last hex code is inserted as the first number. The final hex code is saved as string hex_form1
        */
        
        hex_form1.insert (0, string1);
    }
    
    // This resets the strings and remainder for the second number
    
    rem = num2, string1 = "";
    
    /* This while loop does the same thing as the first while loop but does it for the second number. It saves the final hex string as hex_form2.
    */
    
    while (rem != 0)
    {
        hex = rem % 16;
        rem /= 16;
        sprintf (char2, "%d", hex);
        string1 = char2;
        if (string1 == "10")
            string1 = "A";
        else if (string1 == "11")
            string1 = "B";
        else if (string1 == "12")
            string1 = "C";
        else if (string1 == "13")
            string1 = "D";
        else if (string1 == "14")
            string1 = "E";
        else if (string1 == "15")
            string1 = "F";
        hex_form2.insert (0, string1);
    }
    
    /* This if statement checks which hex code is longer. This is for the counter to be able to figure out the hamming distance even when the strings are different sizes.
    */
    
    if (hex_form1.length() >= hex_form2.length())
    {
        
        /* The below code first initializes the counter as the length of the longer hex code. After that, there is a for loop that compares each hex code. If the number/letter is the same, then it subracts one from the hamming distance since you do not need to substitute the number/letter.
         */
        
        counter = hex_form1.length();
        for (int j = 0; j < hex_form1.length(); j++)
        {
            if (hex_form1[j] == hex_form2[j])
                counter--;
        }
    }
    else
    {
        counter = hex_form2.length();
        for (int j = 0; j < hex_form2.length(); j++)
        {
            if (hex_form1[j] == hex_form2[j])
                counter--;
        }
    }
    
    // Outputs the final answer
    
    cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in hex format is: " << counter << endl;
    
    return 0;
}
