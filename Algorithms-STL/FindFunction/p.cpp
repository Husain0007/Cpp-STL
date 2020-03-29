#include <bits/stdc++.h>
//We'll be making use of #include<algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 10, 11, 9, 100};
    int n = sizeof(arr) / sizeof(int);
    //Search --> find
    int key;
    cin >> key;
    auto it = find(arr, arr + n, key);
    int index = it - arr;
    if (index == n)
    {
        cout << "Element not found";
        exit(0);
    }
    cout << "Present at index: " << index << endl;

    return 0;
}