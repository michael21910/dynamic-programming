#include <iostream>
using namespace std;

int main()
{
    while(true) {
        // system message
        cout << "This is a fibonacci sequence calculator, please enter a number (enter 0 to exit): ";
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }

        // initialize the fibonacci array
        long long f[n];
        f[0] = 1; f[1] = 1;

        // DP for solving the problem
        for(int i = 2; i < n; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }

        // print out th number of fib(the number that the user inputs)
        cout << "fib(" << n << ") = " << f[n - 1] << endl << endl;
    }

    return 0;
}
