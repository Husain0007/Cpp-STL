#include <bits/stdc++.h>
using namespace std;

//Linear Search
template <typename T>
T search(T arr[], int n, T key)
{
    for (int p = 0; p < n; p++)
    {
        if (arr[p] == key)
        {
            return p;
        }
    }
    return n;
}

template <class ForwardIterator, class T>
ForwardIterator search_container(ForwardIterator start, ForwardIterator end, T key)
{

    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }
        start++;
    }
    return end;
}

int main()
{

    int a[] = {1, 2, 3, 4, 10, 12};
    int n = sizeof(a) / sizeof(int);
    int key = 10;
    //cout << search(a, n, key) << endl;

    float b[] = {1.1, 1.2, 1.3};
    float k = 1.2;
    //cout << search(b, 3, k) << endl;

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);
    //l.begin() has the datatype list<int>::iterator
    key = 5;
    auto it = search_container(l.begin(), l.end(), key);
    if (it == l.end())
    {
        cout << "element not present" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    return 0;
}