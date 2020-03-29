#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> A, pair<string, int> B)
{
    if (A.second == B.second)
    {
        return A.first < B.first;
    }
    else
    {
        return A.second > B.second;
    }
}

int main()
{

    vector<pair<string, int>> employees;

    int n;
    int x;

    cin >> x >> n;

    while (n != 0)
    {
        string name;
        cin >> name;
        int salary;
        cin >> salary;

        employees.push_back(make_pair(name, salary));
        n--;
    }

    sort(employees.begin(), employees.end(), compare);
    //cout << "\n====\n";
    for (auto emp : employees)
    {
        if (emp.second < x)
        {
            continue;
        }
        else
        {
            cout << emp.first << " " << emp.second << endl;
        }
    }

    return 0;
}