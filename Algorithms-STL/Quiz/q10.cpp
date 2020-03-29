#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "bca";

    do
    {
        cout << s << ' ';
    } while (next_permutation(s.begin(), s.end()));

    cout << s;

    return 0;
}