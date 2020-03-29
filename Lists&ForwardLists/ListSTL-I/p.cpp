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

    list<int> l;
    //Initialize
    list<int> l1{1, 2, 3, 10, 8, 5};
    //Different Datatype
    list<string> l2{"apple", "guava", "mango", "banana"};
    l2.push_back("pineapple");
    //Iterate over the list and print the data
    print(l2);
    l2.sort();
    print(l2);
    l2.reverse();
    print(l2);
    l2.pop_front();
    print(l2);
    l2.push_front("kiwi");
    print(l2);
    return 0;
}