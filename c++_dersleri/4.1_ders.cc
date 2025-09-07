// ! FOR konusu break contuine

#include <iostream>
using namespace std;

void charpimTablosu()
{
    short int i = 1;
    int sayi;
    cout << "Lütfen bir sayi giriniz 9 dan buyuk olmamali";
    cin >> sayi;
    if (sayi > 9 || sayi < 1)
        return;
    for (i; i < 10; i++)
        cout << sayi << " x " << i << " = " << sayi * i << endl;
};

int main()
{

    short int i;

    for (i = 1; i < 10; i++)
    { // yada intergeri for icinde tanimlarsin i=1; diye
        cout << i << "\n ";
        if (i == 6)
        {
            cout
                << "i = " << i << "\n ";
            continue; // eger burda break; olsaydi dongu bitter islem bitter program kapanir
            // contuine  block icinde yazliysa {contuine;} bu contuinedenki sonraki satirlar okunmas program disa doner ve devam eder yani fora !! contuine if in icinde oldugu icin program bu bolum icin kapanir.
        };
    };
    charpimTablosu();
};
