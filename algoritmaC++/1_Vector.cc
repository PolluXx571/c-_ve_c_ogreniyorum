#include <iostream>
// #include <vector>

using namespace std;

template <class T>

class vector
{
    T *data;
    int cap;
    int index;

public:
    vector() : data(NULL), index(0), cap(1)
    {
        data = new T[cap];
    }
    int size() const { return index; }
    int capacity() const { return cap; }
};

int main()
{
    vector<int> v;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    return 0;
}