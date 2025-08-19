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
    int *data; // elemanlari tutacagim dinamik arrayim
    int _size;
    int _capacity;

public:
    MyVector()
    {
        data = new int[1];
        _size = 0;
        _capacity = 1;
    };

    int size() const
    {
        return _size;
    };

    int capacity() const
    {
        return _capacity;
    };
};
