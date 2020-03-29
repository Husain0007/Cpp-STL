#include <bits/stdc++.h>
using namespace std;
/*
    Program that uses Bubble Sort with Function as a Parameter ===> ie; Passing Function as a Parameter
*/

bool compare(int a, int b)
{
    return a < b;
    // By just changing the return TRUE type from
    //  a > b to a < b we can change an ascendingly sorted list to a descendingly sorted list
}

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b))
{

    for (int itr = 1; itr <= n - 1; itr++)
    {

        for (int j = 0; j <= (n - itr - 1); j++)
        {
            if (cmp(a[j], a[j + 1]))
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{

    int n = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubble_sort(a, n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}