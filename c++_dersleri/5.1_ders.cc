// Functions

#include <iostream>
#include <vector>
#include <string>

using namespace std;
// ! VOID nedir ?
//  func icinde return kullanmayaz isek void veririz bu fonksiyon sadece cikti verir o kadar. void bu ise yarar.

void print();
void printParametr(string par, const vector<int> &myArray);
void stringParam(string text = "Abubakr");
vector<int> myArray = {1, 2, 3, 4, 5};

int main()
{
    cout << "burda bir fonksiyon calisti" << endl;
    print();

    printParametr("Hi guys", myArray);
    stringParam("Osman Ali");
    stringParam(); // parametre default olarak geliyor yukarda bellirtigimiz gibi;
    return 0;
}

void print()
{
    cout << "i wrote function" << endl;
};

void printParametr(string par, const vector<int> &myArray)
{
    for (int i = 0; i < myArray.size(); i++)
    {
        cout << "Eleman " << i << ": " << myArray[i] << endl;
    }
    cout << "Parametre: " << par << endl;
}

void stringParam(string text)
{
    cout << text << endl;
}