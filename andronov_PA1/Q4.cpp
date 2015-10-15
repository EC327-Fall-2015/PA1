#include<iostream>
using namespace std;

int main()
{
  char entry;
  int offset;

  //ask for input
  cout<<" Enter a character: ";
  cin>>entry;
  cout<<"\n Enter an offset. Enter 0 to convert case: ";
  cin>>offset;


  //compute and apply offset
  if (offset == 0)
  {
	if('a'<=entry && entry<='z')
	{entry -=('a' - 'A');}
	
	else
	{entry +=('a' - 'A');}
  }
  else
  {
	entry += (char)offset;
  }


  //Error checking
  if (entry<32 || entry>127)
  {
	cout<<"\n The offset you entered was too large."<<endl;
	return 0;
  }

  //print to screen
  cout<<"\n New character: "<<entry<<endl;

  return 0;
}
