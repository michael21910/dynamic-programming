#include <iostream>
using namespace std;

int main()
{
    while(true) {
        // system message
        cout << "This is a factorial calculator, please enter a number (enter 0 to exit): ";
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }

        // initialize the factorial array
        unsigned long long f[n];
        f[0] = 1;

        // DP for solving the problem
        for(int i = 1; i < n; i++) {
            f[i] = f[i - 1] * (i + 1);
        }

        // print out th number of fac(the number that the user inputs)
        cout << "fac(" << n << ") = " << f[n - 1] << endl << endl;
    }

    return 0;
}
