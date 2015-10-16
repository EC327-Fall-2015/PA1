#include <iostream>

using namespace std;

int main(){

	int n;
	int m;     // n and m are two positive integers
	int i = 0; // i is the Hamming Distance when numbers are in hex format
	int n1;
	int m1;
	cout << "Enter two new positive integers: " << endl;
	cin >> n;
	cin >> m;
	int x = n;   
	int y = m;   // n and m are the two original positive integers
	if (n >= m){
		while ( n!=0 ){     // perform the while loop until the quotient of the 1st integer is zero
			n1 = n % 16;    // n1 is the remainder
			n = n / 16;
			m1 = m % 16;    // m1 is also the remainder
			m = m /16;
			if (n1 != m1){
				i++;
			}
		}
	}


	else {
		while ( m!=0 ){     // perform the while loop until the quotient of the 2nd integer is zero
			n1 = n % 16;
			n = n / 16;
			m1 = m % 16;
			m = m /16;
			if (n1 != m1){
				i++;
			}
		}
	}

	cout << "Hamming distance between " << x << " and " << y << " when numbers are in hex format is: " << i << endl;

	return 0;
}

