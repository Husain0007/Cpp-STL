#include <iostream>
#include <algorithm> //std::swap
#include <cstring>
#include <set>

using namespace std;

void permute(char a[], int i, set<string> &s)
{
    if (a[i] == '\0')
    {
        //cout << a << endl;
        //return;
        //initialize string t with a
        string t(a);
        s.insert(t);
        return;
    }

    //recursive case

    for (int j = i; a[j] != '\0'; j++)
    {
        swap(a[i], a[j]);
        permute(a, i + 1, s);
        swap(a[i], a[j]);
    }
}

int main()
{

    char a[100];
    cin >> a;

    set<string> s;

    permute(a, 0, s);

    //loop over the set

    for (auto str : s)
    {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}