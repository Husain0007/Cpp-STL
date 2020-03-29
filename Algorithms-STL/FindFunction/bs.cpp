#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {20, 30, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(int);
    //Search in a sorted array
    int key;
    cin >> key;
    // bool is the return type of "binary_search()"
    auto present = binary_search(arr, arr + n, key);
    if (present)
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }
    //cout << present << endl;
    // returns int address, so "int* it"
    cin >> key;
    auto it = lower_bound(arr, arr + n, key);
    cout << "Memory location of the element is: " << it << endl; // returns memory address
    // To get the index do as below
    int index = it - arr;
    cout << "Index of the element: " << index << endl;
    cout << *arr << endl;
    it = upper_bound(arr, arr + n, key);
    cout << "Index of UpperBound of " << key << " is: " << it - arr << endl;
    return 0;
}