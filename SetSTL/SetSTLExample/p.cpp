#include <iostream>
#include <utility>
#include <set>

using namespace std;

int main()
{

    set<pair<int, int>> s;
    s.insert(make_pair(10, 1));
    s.insert(make_pair(10, 5));
    s.insert(make_pair(20, 1));
    s.insert(make_pair(20, 100));
    s.insert(make_pair(5, 1));
    s.insert(make_pair(5, 3));
    s.insert(make_pair(5, 3));

    s.erase(make_pair(5, 3));
    //Alternatively,
    // s.erase(s.find(make_pair(5,3)))
    s.insert(make_pair(5, 4));

    auto it = s.lower_bound(make_pair(20, 1));
    cout << it->first << ", " << it->second << endl;
    auto it2 = s.upper_bound(make_pair(20, 1));
    cout << it2->first << ", " << it2->second << endl;

    for (auto p : s)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}