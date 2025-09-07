#include <iostream>
#include <string>
#include <cctype> // c deki hazir fonksiyonlari(metotlari) kullanmak icin kutuphaneyi dahil ediyoruz.

// ! c++ kendi metotlarida var ama anladigim kadariyla c den alip kullaniyoruz bir cogunu c++ olmayanlari.

using namespace std;
// Stringler giris

int main()
{
    string name = "Hello my name is ";
    string surname = "OsmanALi";
    cout << "hello" << endl;
    cout << "name + surname:  "
         << name + surname << endl;

    // ! String hazir fonksiyonlar(metotlar);
    // ilk once c kutuphanesini dahil ediyoruz.
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    if (isalnum(ch)) // c kutuphanesinden dahil etigimiz hazir metot.
        cout << "Your entered number or digit\n";
    else
        cout << "You entered charchter or did not \n";
    return 0;
};
