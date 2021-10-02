#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Where do you want to go? (start from (0, 0), row first, column second, enter \"0 0\" to exit): ";
    while(cin >> row >> col && row && col) {
        int n = max(row, col);

        int arr[n + 1][n + 1];
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= n; j++) {
                arr[i][j] = 0;
            }
        }
        arr[1][1] = 1;

        // DP here
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(!(i == 1 && j == 1)) {
                    arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
                }
            }
        }

        cout << endl << "The 2D array is: " << endl;
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl << "So, you have " << arr[row][col] << " ways to get from (0, 0) to (" << row << ", " << col << ")." << endl << endl << endl;
    }
    return 0;
}
