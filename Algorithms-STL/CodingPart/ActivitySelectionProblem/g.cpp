//****From GeeksForGeeks https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/
#include <iostream>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;

    printf("Following activities are selected n");

    // The first activity always gets selected
    i = 0;
    printf("%d ", i);

    // Consider rest of the activities
    for (j = 1; j < n; j++)
    {
        // If this activity has start time greater than or
        // equal to the finish time of previously selected
        // activity, then select it
        if (s[j] >= f[i])
        {
            printf("%d ", j);
            i = j;
        }
    }
}

// driver program to test above function
int main()
{
    int cases = 0;
    cin >> cases;

    while (cases != 0)
    {
        int n = 0;
        cin >> n;
        int s[n];
        int f[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> f[i];
        }
        //printMaxActivities(s, f, n);
        int j;
        int i = 0, count = 1;

        for (j = 1; j < n; j++)
        {
            if (s[j] >= f[i])
            {
                count++;
                i = j;
            }
        }
        cout << count << endl;

        cases--;
    }

    return 0;
}
