// Fonksiyonlarda Arrayler;

#include <iostream>
using namespace std;

void myArrFunc(int myNums[6]);

int main()
{
    // ! & bunun ile biz food degiskenin kendimize referans aliriz  eger foodun degerinde bir degisiklik olursa meal degiskenindede deger degisir. bellekten kazanmis oluruz.

    string food = "kebap";
    string &meal = food;   // & referans alir ayni adrese gider eger burda meali degistirirsek yukardada food degeri mealinki gibi olur ikiside bir birinden etkilenir cunku adress ayni;
    cout << &food << endl; // & bize hem degiskenin adresini gormemize yardimci olur
    cout << &meal << endl;
    string tea = "green tea";
    string copyTea = tea; // kopyalar farkli adresde tutar bellekden kaybederiz;

    int myNums[6] = {1, 2, 3, 4, 5, 6};
    myArrFunc(myNums);
}

void myArrFunc(int myNums[6])
{
    for (int i = 0; i < 6; i++)
    {
        cout << myNums[i] << endl;
    }
}