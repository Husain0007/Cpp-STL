#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string &s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main()
{

    string str = "aabbaa";
    bool ans = isPalindrome(str);
    cout << ans << endl;
}
