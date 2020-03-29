#include <bits/stdc++.h>
using namespace std;

//Template
template <typename T>
T search(T arr[], int n, T key)
{
    for (int p = 0; p < n; p++)
    {
        if (arr[p] == key)
        {
            return p;
        }
    }
    return n;
}

//Template + Iterator
template <class ForwardIterator, class T>
ForwardIterator search_container(ForwardIterator start, ForwardIterator end, T key)
{

    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }
        start++;
    }
    return end;
}

//Template + Iterator + Comparator
template <class ForwardIterator, class T, class Compare>
ForwardIterator search_comparator(ForwardIterator start, ForwardIterator end, T key, Compare cmp)
{

    while (start != end)
    {
        if (cmp(*start, key))
        {
            return start;
        }
        start++;
    }
    return end;
}

class Book
{

public:
    string name;
    int price;

    Book()
    {
    }

    Book(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};

class BookCompare
{
public:
    bool operator()(Book A, Book B)
    {
        if (A.name == B.name)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Book b1("C++", 100); //old edition
    Book b2("Python", 120);
    Book b3("Java", 130);
    Book b4(b1); // Book b4 is a copy of Book b1

    // Can change the container to vector or anyother
    // and search_comparator will work with that
    vector<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book booktoCompare("C++", 110); //new edition of the book
    BookCompare cmp;

    //list<Book>:: iterator it =search(l.begin(), l.end(), b4, cmp);
    //or use auto as return type, it's the same thing
    auto it = search_comparator(l.begin(), l.end(), booktoCompare, cmp);

    if (it != l.end())
    {
        cout << "Book found in the library!" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}