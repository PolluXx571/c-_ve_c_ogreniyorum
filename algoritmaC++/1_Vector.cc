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

    void push_back(const T &value)
    {
        data[index++] = value;
    }
    void pop_back()
    {
        index--;
    }
    bool isEmpty() const
    {
        return size() == 0;
    }
    T dataItems() const
    {
        for (int i = 0; i < index; i++)
        {
            cout << data[i] << "\n"; // ayri satirlar asagi yonlu cikti verir eger tek satirda istersen " " kullanirsin "\n" yerine  1,2 ciktisi alirsin
        }
    }
    T front() const
    { // data nin ilk elamanini aliyorum
        if (isEmpty())
            throw "Error: Vector is empty!";
        return data[0];
    }

    T back() const
    { // data nin son elamanini aliyorum
        return data[index - 1];
    }
};

int main()
{
    try
    {
        vector<int> v;

        cout << "size: " << v.size() << endl;
        cout << "capacity: " << v.capacity() << endl;
        cout << "isEmpty: " << v.isEmpty() << endl;

        cout << "firstItem: " << v.front() << endl; // burada hata fırlatılır

        v.push_back(1);
        v.push_back(10);

        cout << "data item: " << v.dataItems() << endl;
        cout << "isEmpty: " << v.isEmpty() << endl;
        cout << "firstItem: " << v.front() << endl;
        cout << "lastItem: " << v.back() << endl;
        v.pop_back();
        cout << "isEmpty: " << v.isEmpty() << endl;
    }
    catch (const char *err)
    {
        cerr << err << endl;
    }

    s return 0;
}