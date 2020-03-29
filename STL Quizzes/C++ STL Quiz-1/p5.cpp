#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int, int>> q;
    q.push({1, 5});
    q.push({4, 2});
    q.push({5, 3});
    q.push({2, 4});
    q.push({3, 1});
    q.push({5, 2});
    cout << q.top().first << " " << q.top().second << endl;
    return 0;
}