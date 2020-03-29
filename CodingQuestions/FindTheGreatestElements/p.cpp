#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int size = *(&arr + 1) - arr;
    int p = 0;
    while (n != 0)
    {
        cin >> arr[p];
        n--;
        p++;
    }

    for (int i = 0; i < size; i++)
    {
        bool found = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i] + 1)
            {
                cout << arr[j] << " ";
                found = 1;
            }
        }
        if (found == 0)
        {
            cout << -1 << " ";
        }
    }

    return 0;
}