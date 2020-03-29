#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Creating & Initializing a Vector
    vector<int> a;
    vector<int> b(5, 10);                    // a vector of 5 elements with each value as 10
    vector<int> c(b.begin(), b.end());       // a vector that copies values from b.begin() to b.end()
    vector<int> d(c.begin(), c.begin() + 3); // a vector that copies the first 4 elements of vector c
    vector<int> e{1, 2, 3, 4, 5, 6};

    //How to iterate over the vector
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // for each loop
    for (int x : e)
    {
        cout << x << " ";
    }

    // Discuss more function
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        v.push_back(no);
        /*
        #### Whenever we perform v.push_back(x) the memory block assigned to the vector expands from
        n to 2n, ie; the process is expensive on the memory, and can also in turn be expensive on time, as
        in case the next n spaces aren't available for expansion, then the n elements will be copied from current location in the memory to another location where the size 2n can be accomodated
        */
    }
    cout << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Effective size of vector 'e': " << e.capacity() << endl;
    cout << "Effective size of vector 'v': " << v.capacity() << endl;
    cout << "Maximum size of 'v' in worst case : " << v.max_size() << endl;
    return 0;
}