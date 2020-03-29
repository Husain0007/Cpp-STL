#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class Instructor
{
public:
    stack<int> pile;
    int cost;

    void AddEntry(int cost)
    { //Query by another instructor
        pile.push(cost);
    }
    int RemoveEntry()
    { //Query by student
        if (!pile.empty())
        {
            int val = pile.top();
            pile.pop();
            return val;
        }
        else
        {
            return INT_MIN;
        }
    }
};

int main()
{

    int queries;
    cin >> queries;
    Instructor Prateek;
    while (queries != 0)
    {

        int type;
        cin >> type;

        if (type == 2)
        {
            int cost;
            cin >> cost;
            Prateek.AddEntry(cost);
        }
        else if (type == 1)
        {
            int cost;
            cost = Prateek.RemoveEntry();
            if (cost == INT_MIN)
            {
                cout << "No Code" << endl;
            }
            else
            {
                cout << cost << endl;
            }
        }

        queries--;
    }

    return 0;
}
