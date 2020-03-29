#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "abhuhba";
    bool flag = false;
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            flag = false;
        }
        if (flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}