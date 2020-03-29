#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

bool myCompare(string a, string b)
{
    if (a.find(b) == 0 || b.find(a) == 0)
    {
        return a.length() > b.length();
    }
    else
    {
        return a < b;
    }
}

int main()
{

    int n, i = 0;
    cin >> n;
    vector<string> batch;

    while (n != 0)
    {
        string str;
        cin >> str;
        batch.push_back(str);
        n--;
    }
    sort(batch.begin(), batch.end(), myCompare);
    cout << "\n\n\n\n";
    for (auto x : batch)
    {
        cout << x << endl;
    }

    return 0;
}