#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char s1[] = "CobingBlocks";
    char s2 = 'B';
    char *ptr = strchr(s1, s2);
    cout << ptr;

    return 0;
}