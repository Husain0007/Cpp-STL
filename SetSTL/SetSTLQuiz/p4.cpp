#include <iostream>
#include <set>

using namespace std;

struct student
{
    string name;
    float cgpa;
    student(string name, float cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }
};

struct comp
{
    bool operator()(const student &x, student y)
    {
        if (x.name == "Wang")
            return 1;
        if (y.name == "Wang")
            return 0;
        return x.name < y.name;
    }
};

int main()
{

    set<student, comp> batch;
    batch.insert(student("Wang", 8.1));
    batch.insert(student("Ming", 6.32));
    batch.insert(student("Bruce", 8.82));
    batch.insert(student("Pandora", 7.63));

    for (student i : batch)
    {
        cout << i.cgpa << '\t';
    }

    return 0;
}