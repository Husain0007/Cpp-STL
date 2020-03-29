#include <iostream>
#include <algorithm> //std::sort()
#include <utility>   //std::make_pair()
#include <vector>

using namespace std;
/*
    Question7: We wish to sort integers but we must remember what their original indices were before sorting

*/

int main()
{

    //{4, 1, 7, 2, 3}
    vector<pair<int, int>> vect;
    vect.push_back(make_pair(4, 0));
    vect.push_back(make_pair(1, 1));
    vect.push_back(make_pair(7, 2));
    vect.push_back(make_pair(2, 3));
    vect.push_back(make_pair(3, 4));

    sort(vect.begin(), vect.end());

    for (int i = 0; i < 5; i++)
    {
        cout << vect[i].first << " " << vect[i].second << endl;
    }

    return 0;
}