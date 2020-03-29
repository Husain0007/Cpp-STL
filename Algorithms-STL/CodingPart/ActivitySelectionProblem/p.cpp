#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[][2], int n)
{

    int i, j, a, b;
    bool swapped = 0;
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j][1] > arr[j + 1][1])
            {
                a = arr[j][1];
                arr[j][1] = arr[j + 1][1];
                arr[j + 1][1] = a;

                b = arr[j][0];
                arr[j][0] = arr[j + 1][0];
                arr[j + 1][0] = b;

                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

int main()
{

    int cases = 0;
    cin >> cases;
    while (cases != 0)
    {
        int n;
        cin >> n;
        int arr[n][2];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
        }

        // Sort the 2D array
        BubbleSort(arr, n);
        cout << "The sorted array\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][0] << "  " << arr[i][1] << endl;
        }

        int end_time, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                end_time = arr[i][1];
                count += 1;
            }
            else if (arr[i][0] >= end_time)
            {
                end_time = arr[i][1];
                count += 1;
            }
        }
        cout << count << endl;

        cases--;
    }

    return 0;
}