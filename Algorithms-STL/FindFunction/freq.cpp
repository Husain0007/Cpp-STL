#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {1, 2, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    // First check if the element is present or not
    auto status = binary_search(arr, arr + n, key);
    if (status == 0)
    {
        cout << "The element is not present\n";
        exit(0);
    }
    auto it1 = lower_bound(arr, arr + n, key);

    auto it2 = upper_bound(arr, arr + n, key);

    cout << "Frequency of " << key << " is: " << it2 - it1 << endl;

    return 0;
}