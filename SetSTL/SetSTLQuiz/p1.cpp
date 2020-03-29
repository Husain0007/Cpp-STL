#include <iostream>
#include <set>

using namespace std;

int func(set<int> &mySet, int x)
{
    if (mySet.empty())
    {
        return -1;
    }
    auto it = mySet.lower_bound(x);
    if (it != mySet.begin())
    {
        it--;
        return *it;
    }
    else
        return -1;
}

int main()
{

    set<int> s{1, 2, 3, 4, 5, 6};
    int x = 4;
    int y = func(s, x);
    cout << y << endl;
    return 0;
}