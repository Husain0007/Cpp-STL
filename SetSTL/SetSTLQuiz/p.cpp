#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s = {1, 2, 3, 3, 2, 1};
    multiset<int> ms = {1, 2, 3, 3, 2, 1};
    cout << ms.size() - *s.upper_bound(2) - s.size();
    //6-3-3 = 0

    return 0;
}