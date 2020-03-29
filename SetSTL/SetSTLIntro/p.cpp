#include <iostream>
#include <set>

using namespace std;

int main()
{

    int arr[] = {10, 20, 11, 9, 8, 11, 10};
    int size = sizeof(arr) / sizeof(int);

    set<int> s;
    for (int i = 0; i < size; i++)
    {
        s.insert(arr[i]);
    }

    // Erase an element
    // #1
    s.erase(10);

    //#2
    auto it = s.find(11);
    s.erase(it);

    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {

        cout << *it << " ";
    }
    cout << endl;

    return 0;
}