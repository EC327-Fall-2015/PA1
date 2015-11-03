#include<iostream>
#include<sstream>
#include<algorithm> 
#include<cmath>
 
using namespace std;
int main(){
    int decimal_one, decimal_two;
        cout<<"Enter two positive integers"<<endl;
    cin>>decimal_one>>decimal_two;
    //converting dec to hex 
    stringstream ss, ss1;
        ss<<hex<<decimal_one;
        string res_one(ss.str());
        ss1<<hex<<decimal_two;
        string res_two(ss1.str());
  
    int size;
    if (res_one.length()==(res_two.length())){
        size=res_one.length();
        int count=0;
        for (int i=0;i<size;i++){
            if (res_one[i]==res_two[i]){count++;}
            }
        cout<<"Hamming distance between "<<decimal_one<<" and "<< decimal_two<<" when numbers are in hex format is: "<< size-count<<endl;
        }
    else
        {
    size=min(res_one.length(),res_two.length());
    int a,diff;
    a=res_one.length()-res_two.length();
    diff=abs(a);
        int count=0;
        for (int i=0;i<size;i++){
            if (res_one[i]==res_two[i]){count++;}
            }
        cout<<"Hamming distance between "<<decimal_one<<" and "<< decimal_two<<" when numbers are in hex format is: "<<size-count+diff<<endl;
        }
  
    }
