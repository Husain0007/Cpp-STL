
template <typename T>
class Vector
{

    int cs;
    int ms;
    T *arr;

public:
    Vector()
    {
        cs = 0;
        ms = 1;
        arr = new T[ms];
    }
    void push_back(const T d)
    {
        if (cs == ms)
        {
            // If Array is full
            T *oldArr = arr;
            arr = new T[2 * ms];
            ms = 2 * ms;
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            // clear the old memory
            delete[] oldArr;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back()
    {
        cs--;
    }
    T fron() const
    {
        return arr[0];
    }
    T back() const
    {
        return arr[cs - 1];
    }
    bool empty() const
    {
        // function can be written as a const as no data member is being changed
        return cs == 0;
    }
    int capacity() const
    {
        return ms;
    }
    T at(const int i)
    {
        return arr[i];
    }
    //operator overloading
    T operator[](const int i)
    {
        return arr[i];
    }
    int size() const
    {
        return cs;
    }
};