#include <iostream>
#include <string>
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
    // bool operator()(student &x, const student &y)
    bool operator()(const student &x, const student &y)
    {
        return x.name < y.name;
    }
};

int main()
{

    student s1("Akash", 9.6);
    student s2("Gopal", 9.9);
    student s3("Aamir", 9.7);

    set<student, comp> batch = {s1, s2, s3};

    for (auto x : batch)
    {
        cout << x.name << " : " << x.cgpa << endl;
    }
}