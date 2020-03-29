#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> d{1, 2, 3, 10, 14};
    d.push_back(16);
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;
    d.pop_back();
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;
    d.insert(d.begin() + 3, 100);

    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    d.insert(d.begin() + 4, 2, 210);

    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    d.erase(d.begin() + 2);
    d.erase(d.begin() + 2, d.begin() + 5);

    for (int x : d)
    {
        cout << x << " ";
    }

    d.clear();
    cout << "\nafter clear\n";
    for (int x : d)
    {
        cout << x << " ";
    }
    if (d.empty())
    {
        cout << "The vector is empty";
    }
    cout << endl;
    cout << d.size() << " " << d.capacity() << endl;
    return 0;

    //** Reserve to overcome Doubling Problem with v.push_back(x)
    vector<int> v;
    v.reserve(1000);
    cout << "Enter the number of elements you want to enter\n";
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        cin >> num;
        v.push_back(num);
        cout << "Changing Capacity " << v.capacity() << endl;
    }
    cout << "Capacity " << v.capacity() << endl;
}