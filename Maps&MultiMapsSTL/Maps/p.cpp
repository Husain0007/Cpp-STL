#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{

    map<string, int> m;
    //1. Insert
    m.insert(make_pair("Mango", 100));

    pair<string, int> p;
    p.first = "Apple";
    p.second = 120;
    m.insert(p);

    m["Banana"] = 20;

    //2. Search
    string key;
    cin >> key;

    //auto it = m.find(key);

    if (m.find(key) != m.end())
    {
        cout << "Price of " << key << " is : " << m[key] << endl;
    }
    else
    {
        cout << "Fruit is not present\n";
    }

    string fruit;
    cin >> fruit;

    if (m.count(fruit))
    {
        cout << "Price is " << m[fruit] << endl;
    }
    else
    {
        cout << "Fruit is not present\n";
    }

    m["Litchi"] = 60;
    m["Pineapple"] = 80;

    //Iterate over all key-value pairs
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " and " << it->second << endl;
    }

    cout << endl
         << endl;

    for (auto p : m)
    {
        cout << p.first << " : " << p.second << endl;
    }

    //3.Erase
    m.erase(fruit);

    return 0;
}