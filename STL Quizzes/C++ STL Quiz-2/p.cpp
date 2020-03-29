#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {1, 3, 2, 5};
    cout << v.capacity() << endl;
    v.push_back(12);
    cout << v.capacity() << endl;

    return 0;
}