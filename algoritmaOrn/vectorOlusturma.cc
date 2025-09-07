/*

📌 Plan: Kendi Vector Sınıfımızı Yazmak

Amacı anlamak → Vector nedir, neden kullanılır?

Normal array sabit boyutlu.

Vector ise dinamik: kapasitesi yetmezse yeni bir alan açar, eski elemanları kopyalar, kapasiteyi büyütür.

Temel Yapı

class MyVector oluşturacağız.

İçinde şu 3 önemli şey olacak:

int* data; → Elemanları tuttuğumuz dinamik array.

int size; → Kaç eleman var?

int capacity; → Bellekte ne kadar yer ayrıldı?

Temel Fonksiyonlar

push_back(int value) → sona eleman ekle

pop_back() → sondaki elemanı sil

operator[] → indeks ile erişim

size() ve capacity() fonksiyonları

Dinamik Büyüme Mekanizması

Kapasite dolarsa 2 * capacity olacak şekilde yeni array açıp kopyalama yapacağız.

Ekstra Fonksiyonlar (opsiyonel, ileri seviye)

clear()

resize(n)

insert(index, value)

erase(index)
*/

#include <iostream>
using namespace std;

class MyVector
{
private:
    int *data;     // elemanları tutacağımız pointer
    int _size;     // şu anki eleman sayısı
    int _capacity; // ayrılmış kapasite

public:
    // Constructor
    MyVector()
    {
        data = new int[1]; // 1 kapasiteyle başlıyoruz
        _size = 0;
        _capacity = 1;
    }

    // Eleman sayısı
    int size() const
    {
        return _size;
    }

    // Kapasite
    int capacity() const
    {
        return _capacity;
    }

    // Eleman ekle
    void push_back(int value)
    {
        if (_size == _capacity)
        {
            // 1. Yeni kapasite
            int newCapacity = _capacity * 2;
            int *newData = new int[newCapacity];

            // 2. Eskileri kopyala
            for (int i = 0; i < _size; i++)
            {
                newData[i] = data[i];
            }

            // 3. Eskiyi sil
            delete[] data;

            // 4. Yeniye geç
            data = newData;
            _capacity = newCapacity;
        }

        // 5. Yeni eleman ekle
        data[_size] = value;
        _size++;
    }

    // Elemanları yazdır (test için)
    void print() const
    {
        for (int i = 0; i < _size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    MyVector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "size = " << v.size() << endl;
    cout << "capacity = " << v.capacity() << endl;

    v.print();
}