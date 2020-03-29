#include <iostream>
#include <string>
#include <set>
using namespace std;
struct employee
{
    string name;
    int salary;
    employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
};

struct comp
{
    // bool operator()(student &x, const student &y)
    bool operator()(const employee &x, const employee &y)
    {
        if (x.salary == y.salary)
        {
            return x.name < y.name;
        }
        else
        {
            return x.salary > y.salary;
        }
    }
};

int main()
{

    set<employee, comp> batch;

    int x = 0;
    cin >> x;
    if (x < 1)
    {
        exit(0);
    }

    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        if (name.size() > 100)
        {
            continue;
        }
        int salary;
        cin >> salary;
        if ((salary > 100) || salary < 0)
        {
            continue;
        }
        if (salary < x)
        {
            continue;
        }
        employee e(name, salary);

        batch.insert(e);
    }
    cout << "\n\n";
    for (auto person : batch)
    {
        cout << person.name << " " << person.salary << endl;
    }

    return 0;
}