#include <iostream>
#include <string>

using namespace std;

int main()
{
    int firstArray[] = {10, 100, 200, 300};

    // ! eski yontem
    for (int i = 0; i < 4; i++)
    {
        cout << "My Array Numbers: " << firstArray[i] << endl;
    };

    string myCars[] = {"Wolswagen", "ToyoTa", "Chevrolet"};

    // ! c++ dizileri dondurme ana yontem;
    for (string car : myCars)
    {
        cout << "My Cars: " << car << endl;
    };

    double numbers[] = {200, 300, 3.10, 148, 222.222};

    for (double myNum : numbers)
    {
        cout << "Nums: " << myNum << endl;
    }

    // ! eleman sayisini bulma

    int arrayLengthFind[] = {100, 200, 300, 400, 500};

    cout << sizeof(arrayLengthFind) << endl;               // 20 doner cunku her bir eleman 4 byte sizeof bize byte cinsinden hesaplar. eger uzunlugunu length nin bulmak istersekk byte bolu int yapariz cunku int bizim her bir elemanin 4 byte oldugundan elemana bolmus olur yani eleman sayisina
    cout << sizeof(arrayLengthFind) / sizeof(int) << endl; // 5 cunku elemanin byte na bolduk buda 5 tane eleman sonucunu verir

    // ! for dongusunde bunu nasil kullana biliriz bir degiskene atayarak ornk:

    int getMyLength = sizeof(arrayLengthFind) / sizeof(int); // arrayimizin uzunlugunu buluyoruz ve asagida kullaniyoruz for dongusunde
    for (int i = 0; i < getMyLength; i++)
    {
        cout << "MyNumbers: " << arrayLengthFind[i] << endl;
    }

    // ! cok boyutlu dizi olusturma .
    //            2 = obje 3 = eleman
    string letters[2][3] = {
        {"A", "B", "C"}, // 0 index obje
        {"D", "E", "F"}, // 1 index obje
    };
    cout << "Letter: " << letters[0][1] << endl; // kullanirken 0 dan basliyoruz.
    cout << "Letter: " << letters[1][1] << endl;
    return 0;
}