#include <iostream>
#include <set>

using namespace std;

struct comp
{

    bool operator()(unsigned int x, unsigned int y)
    {
        return (x % 10) < (y % 10);
    }
};

int main()
{

    set<unsigned int, comp> mySet = {9, 12};
    for (int x : mySet)
        cout << x << ' ';

    cout << mySet.max_size();

    return 0;
}