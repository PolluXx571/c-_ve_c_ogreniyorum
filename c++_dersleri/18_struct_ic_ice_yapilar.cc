/*
🔹 struct nedir?

struct (structure), yani yapı,
birden fazla değişkeni tek bir isim altında toplamak için kullanılır.

Bu değişkenlerin türü farklı olabilir.
Yani bir “veri paketi” gibi düşünebilirsin.


🔹 Basit örnek

Diyelim ki bir öğrencinin bilgilerini saklamak istiyorsun:
Ad, yaş, ortalama...

Normalde:

string ad;
int yas;
float ortalama;


*/

#include <iostream>
#include <string>
using namespace std;

// burdaki struct yapisini asagida baska bir sturct yapisinda kullandi
struct Address {
    string cityName;
    string district;
    int no;
};
struct Pointerrr {
    string pointer1;
    int pointer2;
};

struct Employee {
    string name;
    string lastname;
    int workerno;
    Address add;
    Pointerrr* ptr1;
};

// syntax acaip
int main() {
    Employee em = {"OsmanAli",
                   "Basir",
                   1,
                   {"Tash", "Timur M", 28}};  // 2 ci obje Adress add oluyor.

    cout << em.name << endl;
    cout << em.lastname << endl;
    cout << em.workerno << endl;
    cout << em.add.cityName << endl;
    cout << em.add.district << endl;
    cout << em.add.no << endl;

    Employee em1;

    em1.add = {"TR", "IST", 18};

    cout << em1.add.cityName << endl;
    cout << em1.add.district << endl;
    cout << em1.add.no << endl;

    // yukarda hep struct icinden structa ulastik simdi is struct icinden
    // pointere ulasacagiz.

    Employee em2;
    em2.ptr1->pointer1 = "pointer1";
    cout << em2.ptr1->pointer1 << endl;
    return 0;
}
