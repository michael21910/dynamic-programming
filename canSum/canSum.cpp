#include <iostream>

using namespace std;

bool canSum(int num, int arr_size, int *arr, int *check)
{
    // return in every cases
    for(int i = 0; i <= num; i++) {
        if(num == i && check[num] != -1) {
            return check[i];
        }
    }
    if(num == 0) {
        return true;
    }
    if(num < 0) {
        return false;
    }

    // do the subtracting
    for(int i = 0; i < arr_size; i++) {
        int temp = num - arr[i];
        if(canSum(temp, arr_size, arr, check)) {
            check[num] = true;
            return true;
        }
    }
    check[num] = false;
    return false;
}

int main()
{
    while(true) {
        // system message
        cout << "Please enter a number, enter 0 to exit: ";
        int num;
        cin >> num;
        if(num == 0) {
            break;
        }
        cout << "Please enter a list of numbers, the first number represents the size of the array: ";
        int arr_size;
        cin >> arr_size;
        int arr[arr_size], check[num + 1];
        for(int i = 0;  i < arr_size; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < num + 1; i++) {
            check[i] = -1;
        }
        canSum(num, arr_size, arr, check) ? cout << "true" : cout << "false";
        cout << endl << endl;
    }
    return 0;
}
