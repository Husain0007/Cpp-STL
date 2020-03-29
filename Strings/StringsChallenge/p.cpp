#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

string extractStringAtKey(string str, int key)
{
    //strtok
    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}

int convertToInt(string str)
{
    int ans = 0;
    int p = 1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        ans += ((str[i] - '0') * p);
        p = p * 10;
    }
    return ans;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexicoCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return key1 < key2;
}
int main()
{

    int n;
    cin >> n;
    cin.get(); // to consume any white spaces

    string a[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }

    int key;
    string reversal, ordering;
    cin >> key >> reversal >> ordering;
    //ordering is numeric or lexicographic
    //Write Helper functions
    //1. Extract a token

    pair<string, string> strPair[100];

    for (int i = 0; i < n; i++)
    {
        strPair[i].first = a[i];
        strPair[i].second = extractStringAtKey(a[i], key);
    }

    // Next - sorting
    if (ordering == "numeric")
    {
        sort(strPair, strPair + n, numericCompare);
    }
    else
    {

        sort(strPair, strPair + n, lexicoCompare);
    }

    //Reversal
    if (reversal == "true")
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(strPair[i], strPair[n - i - 1]);
        }
    }

    //Print the output
    for (int i = 0; i < n; i++)
    {
        cout << strPair[i].first << " ";
    }

    return 0;
}