#include <bits/stdc++.h>
using namespace std;

int main()
{

    //Indian Money Change
    int coins[] = {1, 2, 5, 20, 50, 100, 200, 500, 2000};

    map<int, int> coin_count;

    int n = sizeof(coins) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        coin_count.insert(pair<int, int>(coins[i], 0));
    }
    cout << "Amount to be paid : ";
    int amount = 0;
    cin >> amount;

    //Create a map reverse iterator
    map<int, int>::reverse_iterator it;
    //rbegin() return to the last value of map
    it = coin_count.rbegin();

    while (it != coin_count.rend())
    {
    label:
        if (amount >= it->first)
        {
            amount = amount - it->first;
            it->second += 1;
        }
        else
        {
            it++;
            continue;
        }

        if (amount >= it->first)
        {
            goto label;
        }
        else
        {
            it++;
        }
    }
    for (it = coin_count.rbegin(); it != coin_count.rend(); it++)
    {
        if (it->second != 0)
        {
            cout << it->second << " coins of value " << it->first << endl;
        }
    }

    return 0;
}