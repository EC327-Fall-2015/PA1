#include <iostream>
using namespace std;

int main()
{

    char start;
    int offset;

    cout << "Enter character: ";
    cin >> start;
    cout << endl;


    //handling pure offset:
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;
    cout << endl;
    int out = 0;

    if (offset != 0)
    {
        out = start + offset;
        if (!(0 <= out <= 255))
        {
            cout << "New character is out of bounds";
            return 1;
        }
        
    }
    else
    {
        //this case actually does handle case switching and nothing else
        int caseOffset = 'a' - 'A'; // should be a negative value,
        int a = 'a';
        int z = 'z';
        int upperZ = 'Z';


        //see if the thing is in the lowercase region
        if (a <= start <= z)
        {
            out = start + caseOffset;

        }
        //the thing should be in the uppercase region
        else if (z < start <= upperZ)
        {
            out = start - caseOffset;

        }
        //wants to shift case on not a letter
        else
        {
            out = start;
        }
    }    

    cout << "New character: " << start;

}
