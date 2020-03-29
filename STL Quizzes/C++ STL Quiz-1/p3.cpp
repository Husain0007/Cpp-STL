#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {20, 40, 30, 10, 50, 30};
    sort(v.begin(), v.end());
    cout << upper_bound(v.begin(), v.end(), 30) - v.begin();
    return 0;
}