#include <iostream>
#include <climits>
using namespace std;
// This code has a bug in the last output, and is not time efficient for the constraints given in the question.

int main()
{

    int n = 0;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int k = 0;
    cin >> k;
    int output[n - (k - 1)];

    int j = 0;

    int max = INT_MIN;

    while (j != n - (k - 1) - 1)
    {
        for (int i = j; i < j + k; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
            }
        }
        output[j] = max;
        max = INT_MIN;
        j++;
    }

    cout << endl;

    for (int i = 0; i < (n - (k - 1)); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}