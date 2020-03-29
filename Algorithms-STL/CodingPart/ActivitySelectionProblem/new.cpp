#include <bits/stdc++.h>

using namespace std;

struct Activity
{
    int start, finish;
};

bool Sort_activity(Activity s1, Activity s2)
{
    return (s1.finish < s2.finish);
}

void print_Max_Activities(Activity arr[], int n)
{
    // Sort activities according to finish time
    sort(arr, arr + n, Sort_activity);
    int count = 1;
    // Select the first activity
    int i = 0;
    // Consider the remaining activities from 1 to n-1
    for (int j = 1; j < n; j++)
    {
        // Select this activity if it has start time greater than or equal
        // to the finish time of previously selected activity
        if (arr[j].start >= arr[i].finish)
        {
            count++;
            i = j;
        }
    }
    cout << count << endl;
}

// Driver program
int main()
{

    int cases = 0;
    cin >> cases;
    while (cases != 0)
    {
        int N;
        cin >> N;
        Activity arr[N];
        for (int i = 0; i <= N - 1; i++)
        {
            cin >> arr[i].start >> arr[i].finish;
        }

        print_Max_Activities(arr, N);
        cases--;
    }
    return 0;
}