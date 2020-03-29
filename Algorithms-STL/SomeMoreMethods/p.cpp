#include <bits/stdc++.h>
using namespace std;
/*
    Using new functionalities
    *swap()     *max()      *min()
    *reverse()  *next_permutation()

*/

int main()
{

    int a = 10;
    int b = 20;
    cout << "a is: " << a << ", and b is: " << b << endl;
    swap(a, b);
    cout << "a is: " << a << ", and b is: " << b << endl;

    cout << "The larger number is " << max(a, b) << endl;
    cout << "The smaller number is " << min(a, b) << endl;

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    //Reverse
    reverse(arr, arr + 4);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "Using swap() on the array element" << endl;
    swap(arr[0], arr[1]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nNext Permutation of the array: \n";
    next_permutation(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}