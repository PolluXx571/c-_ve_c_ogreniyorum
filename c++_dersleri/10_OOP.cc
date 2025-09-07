// ! OOP giris.

#include <iostream>
using namespace std;
#include <string>

class FourTransactions
{
public:            // access specifier
    int number1;   // attribute classin icinde degiskenlere denir  variable yok attribute var
    int number2;   // attribute classin icindeki degiskenlere denir variable yok attribute var
    string myName; // attribute ismi myName variable ismi myName
    double myDouble = 3.14;
    string carModel(string name, int year)
    {
        //  ! DEGISKENLER ile yapmak istersek
        // string CarName = name;
        // int CarYear = year;
        string result = "Araba Modeli: " + name + " - Uretim Yili: " + to_string(year);
        return result;
    }

    void userCarModel(string name, int year)
    {
        cout << "Car Model: " << name << "Car year: " << to_string(year) << endl;
    }
};

int main()
{

    string CarName;
    int CarYear;
    // ! 1 ci nesnemiz
    FourTransactions Player1; // Player1 bir takma isim nesnemize ulasmak icin;
    Player1.myName = "AbuBakr";
    Player1.number1 = 5;
    Player1.number2 = 10;
    cout << Player1.myName << "\n";
    cout << Player1.number1 << "\n";
    cout << Player1.number2 << "\n";
    cout << Player1.myDouble << "\n"; // degeri classin icinde atadik
    cout << Player1.carModel("Mercedez Benz", 2025) << endl;

    // ! kullanicidan araba bilgilerini almak
    cout << "Araba modelinin adini girin: ";
    cin >> CarName;

    cout << "Arabanin uretim yilini girin: ";
    cin >> CarYear;
    Player1.userCarModel(CarName, CarYear);

    // ! 2 ci nesnemiz
    FourTransactions Player2; // buda 2 ci nesnemiz ismi Player2;
    Player2.number1 = 20;
    Player2.myName = "Muhammad";
    cout << Player2.number1 << "\n";
    cout << Player2.myName << "\n";
    cin >> Player2.number2;
    cout << "Girilen deger: " << Player2.number2 << endl;
    cout << Player2.carModel("BMW", 2025) << endl;

    // ! kullanicidan araba bilgilerini almak
    cout << "Araba modelinin adini girin: ";
    cin >> CarName;

    cout << "Arabanin uretim yilini girin: ";
    cin >> CarYear;
    Player2.userCarModel(CarName, CarYear);

    return 0;
}