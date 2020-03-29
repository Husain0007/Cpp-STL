#include <bits/stdc++.h>
using namespace std;
/*
    Exploring other functions available with the "algorithm" library
*/

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    rotate(arr, arr + 2, arr + n);
    // We specify the start, point-about-we-want-to-rotate, and end of the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}