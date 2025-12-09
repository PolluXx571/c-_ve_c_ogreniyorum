// Stack ve Heap, bilgisayardaki iki temel bellek (RAM) alanıdır.
// Stack belleği, sistem tarafından otomatik olarak yönetilir.
// Heap belleği ise programcı tarafından yönetilir. Bu yüzden
// "new" ve "delete" anahtar kelimeleri burada devreye girer.
// "new" ile bellekten alan tahsis edilir, "delete" ile bu alan serbest
// bırakılır.

#include <iostream>
using namespace std;

int main() {
    cout << "hello world" << endl;
    int x = 10;        // stack
    int* y = new int;  // heap
    *y = 20;
    cout << y << endl;   // 0xe61d58  new int; (Heap'teki 20'nin adresi)
    cout << &y << endl;  // 0x61ff08 &y (Stack'teki işaretçini // kendi adresi)
    cout << *y << endl;  // 20 *y (İşaretçinin gösterdiği değer)

    delete y;  // memory serbest biraktik

    // ! arraylerde
    int number;
    int myArr[100];
    // suan ben bellekte 100 luk alan kapliyorum ama ben belki
    // bunun 50 sini kullanicam o yuzden boyle sikintilardan
    // kacmak icin dynamic arr yazmam lazim
    cout << "enter the number of students" << endl;
    cin >> number;
    int* dynmArr = new int[number];
    // ne kadar veri o kadar alan
    cout << "enter the not of students" << endl;
    for (int i = 0; i < number; i++) {
        cin >> dynmArr[i];
    }

    for (int i = 0; i < number; i++) {
        cout << "note student : " << (i + 1) << "  :>>  " << dynmArr[i] << endl;
    }
    delete[] dynmArr;
    return 0;
}