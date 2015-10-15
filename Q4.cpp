#include <iostream>

using namespace std;

int main()
{
	char input;         //declare input
	int offset, track;      //declare offset, and the limit
	cout<<"Enter character: ";      //ask for input
	cin>>input;
	cout<<"Offset (enter 0 to convert case): ";  //ask for offset
	cin>>offset;
	track=input+offset;     //check if it is over the limit
	if (track>255){
	    cout<<"Error. Out of range."<<endl;
	    return 0;
	}
	if (offset==0){     //convert lower case to upper, or vice versa
		if (input>64 && input<91){
			input+=32;
			cout<<"New character: "<<input<<endl;
			return 0;
		}
		else if (input>96 && input<123){
			input-=32;
			cout<<"New character: "<<input<<endl;
			return 0;
		}
		else {
			cout<<"New character: "<<input<<endl;
			return 0;
		}
	}
	else if (offset!=0){        //display the corresponding character in the table
		input+=offset;
		cout<<"New character: "<<input<<endl;
		return 0;
	}
	return 0;
}