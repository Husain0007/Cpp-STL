
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    int cases = 0;
    cin >> cases;
    while (cases != 0)
    {
        int n = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        next_permutation(arr, arr + n);

        for (int i : arr)
        {
            cout << i << " ";
        }

        cases--;
    }

    return 0;
}