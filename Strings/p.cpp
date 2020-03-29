#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string s0;
    string s1("Hello");
    string s2 = "Hello World!";
    string s3(s2);
    string s4 = s3;

    char a[] = {'a', 'b', 'c', '\0'};
    string s5(a);
    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    if (s0.empty())
    {
        cout << "s0 is an empty string\n";
    }

    //Append
    s0.append("I love C++");
    cout << s0 << endl;
    s0 += " and Python";
    cout << s0 << endl;

    //Remove
    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;

    //Compare two strings
    s0 = "Apple";
    s1 = "Mango";
    cout << s0.compare(s1) << endl; // Output is negative as "Apple" is less than "Mango" in lexiographic order ie; dictionary order
    s0 = "Pineapple";
    s1 = "Mango";
    cout << s0.compare(s1) << endl; // here the output is positive as "Pineapple" is further along in the lexiographic order than Mango
    if (s0 > s1)
    {
        cout << "Pineapple is lexiographically greater than Apple\n";
    }

    s0 = "Mango";
    s1 = "Mango";
    cout << s0.compare(s1) << endl; // 0 when both strings are equal

    // Find Substrings
    string s = "I want to have Apple Juice";

    int index = s.find("Apple");
    cout << "The index of 'Apple' is: " << index << endl;

    // Remove a word from a string
    string word = "Apple";
    int len = word.length();
    s.erase(index, len + 1); // the +1 is to remove extra space
    cout << s << endl;

    // Iterate over all the characters in the string
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << ":";
    }

    //Iterators
    cout << endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    //For Each loop
    for (auto c : s1)
    {
        cout << c << ".";
    }

    return 0;
}