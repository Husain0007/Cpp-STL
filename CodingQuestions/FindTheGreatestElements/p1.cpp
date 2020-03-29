#include <iostream>
#include <map>

using namespace std;

int main()
{

    multimap<int, bool> arr;
    int n;
    cin >> n;
    while (n != 0)
    {
        int num;
        cin >> num;
        arr.insert(make_pair(num, 0));
        n--;
    }

    return 0;
}