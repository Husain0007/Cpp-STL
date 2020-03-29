#include <iostream>
#include <unordered_map>
#include <climits>
#include <utility>
using namespace std;

bool compare(pair<int, int> A, pair<int, int> B)
{
    return A.second > B.second;
}

int main()
{

    unordered_map<int, int> map;

    int n = 0;
    cin >> n;
    while (n != 0)
    {
        int num;
        cin >> num;
        if (map.find(num) == map.end())
        {
            map.insert(make_pair(num, 1));
        }
        else
        {
            auto it = map.find(num);
            it->second++;
        }
        n--;
    }

    //sort(map.begin(), map.end(), compare);

    int max = INT_MIN;
    int num = 0;
    for (auto pair : map)
    {
        if (pair.second > max)
        {
            max = pair.second;
            num = pair.first;
        }
    }

    cout << num;

    return 0;
}