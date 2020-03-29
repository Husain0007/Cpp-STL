#include <iostream>
#include <cstring>
using namespace std;

class fun
{
public:
    void operator()()
    {
        cout << "Having fun inside Operator() Fn!\n";
    }
    void operator()(string s)
    {
        cout << "Having fun with " << s << endl;
    }
};

int main()
{

    fun f; //Constructor
    f();   //Overloaded () Operator = Function Call where f is an object
    f("C++");
    return 0;
}