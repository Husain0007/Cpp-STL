#include <iostream>
#include <queue>

using namespace std;

int main()
{

    //priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;

    int n = 0;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        int no;
        cin >> no;
        pq.push(no); //O(log(n))
    }

    //Remove the elements from the heap
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}