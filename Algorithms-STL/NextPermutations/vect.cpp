#include <bits/stdc++.h>
using namespace std;
/*
    Applying some functionalities to vectors
    --> rotate()
    --> next_permutation()
        = is used to generate permutations of the existing array that has a higer value then current permutation
    Example {1,2,3}, can have "next_permutation" as {1,3,2},{2,1,3},{2,3,1},{3,1,2},{3,2,1}
*/

int main()
{

    vector<int> vect = {10, 20, 30, 40, 50};

    rotate(vect.begin(), vect.begin() + 3, vect.end());

    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    cout << "\n\n";
    //Next_Permutation

    next_permutation(vect.begin(), vect.end());

    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }

    return 0;
}