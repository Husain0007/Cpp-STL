#include <bits/stdc++.h>
using namespace std;

int main()
{
    //** Approach 1
    pair<int, char> p;
    p.first = 10;
    p.second = 'B';
    cout << p.first << " " << p.second << endl;
    //** Approach 2: Make a copy
    pair<int, char> p2(p);
    cout << "Here's a copy of the first pair\n"
         << p2.first << " " << p2.second << endl;

    //** Approach 3: Use make_pair() initialization function

    pair<int, string> p3 = make_pair(100, "Audi");

    cout << "This is the function initiliazed pair\n"
         << p3.first << " " << p3.second << endl;

    // We can have a vector of pairs, an array of pairs, or even a pair of pairs
    pair<pair<int, int>, string> car;
    car.second = "Audi";   // Name of the car
    car.first.first = 10;  // Location of the car along x axis
    car.first.second = 20; //Location of the car along y axis
    cout << "\nA pair of pair and string\n";
    cout << car.second << ",\t(" << car.first.first << ", " << car.first.second << ")\n";

    return 0;
}