#include <bits/stdc++.h>
using namespace std;
/*
    The Approach used by CodingBlocks
    STLCourse>AlgorithmsSTL>STL-05-MoneyChangeProblem!
*/
bool compare(int a, int b)
{
    return a <= b;
}

int main()
{

    //Indian Money Change
    int coins[] = {1, 2, 5, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(coins) / sizeof(int);
    int money = 168;

    while (money > 0)
    {
        int lb = lower_bound(coins, coins + n, money, compare) - coins - 1;

        int m = coins[lb];
        cout << m << " ";
        money = money - m;
    }

    return 0;
}