#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

static int x = 0xFFFFFFFF;

int main() {
    /* Store side lengths in length-3 double array. */
    double x[3] = {0,0,0};
    double s, a;

    cout << "Enter the dimensions of the triangle:" << endl;
    /* Read in the lengths of the three sides. */
    cout << "Side-1: ";
    cin >> x[0];
    cout << "Side-2: ";
    cin >> x[1];
    cout << "Side-3: ";
    cin >> x[2];

    /* Compute semiperimeter. */
    s = (x[0] + x[1] + x[2]) / 2.0;

    /* Compute squared area (as per Heron's formula). */
    a = s;

    cout << fixed << setprecision(2);
    for (int i = 0; i < 3; i++) {
        a *= (s - x[i]);
        /* If at some point this goes to 0 (i.e. degenerate triangle) or
           negative (failed triangle inequality), then this is not a
           triangle. */
        if (a <= 0) {
            cout << "Dimensions " << x[0] << ", " << x[1] << ", "
                 << x[2] << " do not form a triangle." << endl;
            return 1;
        }
    }

    /* Output results. */
    cout << "This triangle's area is " << sqrt(a) << " square-units, "
         << "and its perimeter is " << (s * 2) << " units." << endl;
    
    return 0;
}
