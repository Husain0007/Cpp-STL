#include <iostream>
#include <list>
using namespace std;

void print(list<string> l)
{

    for (auto s : l)
    {
        if (s == l.back())
        {
            cout << s << endl
                 << endl;
        }
        else
        {
            cout << s << "-->";
        }
    }
}

int main()
{

    list<string> l{"apple", "guava", "mango", "banana"};
    l.push_back("orange");
    l.push_back("lemon");
    print(l);
    cout << "Which fruit do you want to remove : ";
    string fruit;
    cin >> fruit;
    l.remove(fruit);
    print(l);
    // to insert an element in a particular position of the list
    int position = 0;
    cout << "where do you want to insert new element: ";
    cin >> position;
    cout << "Which fruit ? " << endl;
    cin >> fruit;
    auto it = l.begin();
    while (position != 1)
    {
        it++;
        position--;
    }
    l.insert(it, "tangerine");
    print(l);

    return 0;
}