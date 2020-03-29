/*
    This is the efficient implementation of the problem in p.cpp done in linear time O(n) using deques and a sliding window
    Constraint: n<10^6, k<10^5
*/
#include <iostream>
#include <deque>

using namespace std;

int main()
{

    int n;
    int a[1000000];
    int k;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;

    //We have to process first k elements separately
    deque<int> Q(k);
    int i = 0;
    for (; i < k; i++)
    {
        while (!Q.empty() && a[i] > a[Q.back()])
        {
            Q.pop_back();
        }
        Q.push_back(i);
    }

    //Process the remaining elements
    for (; i < n; i++)
    {
        cout << a[Q.front()] << " ";

        //1. Remove the elements which are not a part of the window(Contraction)
        while ((!Q.empty() && (Q.front() <= i - k)))
        {
            Q.pop_front();
        }

        //2. Remove the elements which are not useful and are in window
        while (!Q.empty() && a[i] >= a[Q.back()])
        {
            Q.pop_back();
        }

        //3.Add the new elements(Expansion)
        Q.push_back(i);
    }

    cout << a[Q.front()] << endl;
    return 0;
}