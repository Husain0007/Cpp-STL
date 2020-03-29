#include <bits/stdc++.h>

using namespace std;

// Define a Comparator Function
bool compare(int a, int b)
{
    return b > a;
}

int main()
{

    int n, key;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n, compare);

    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
            cout << a[i] << ", ";
        else
        {
            cout << a[i] << endl;
        }
    }

    return 0;
}