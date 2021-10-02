#include <iostream>
using namespace std;

int main()
{
    cout << "This is a fibonacci sequence calculator, please enter a number (enter 0 to exit): ";
    int n;
    while(cin >> n && n) {
        long long f[n];
        f[0] = 1; f[1] = 1;
        for(int i = 2; i < n; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
        cout << "fib(" << n << ") = " << f[n - 1] << endl << endl;
    }

    return 0;
}
