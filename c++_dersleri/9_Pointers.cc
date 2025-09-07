#include <iostream>
using namespace std;

void replaceValue(int *ptr);         // degerleri burada kullandik adresdeki
void multiply(int *ptrA, int *ptrB); // degerleri burada kullandik adresdeki

int main()
{ // yildiz * ile bu bir pointer degisken olucak diyoruz ve & ile mainin adresi ile alip ptr degiskenimize atiyoruz ve main ile *ptr degiskenimizin artik adresi ayni
    int main = 7;
    int *ptr = &main;

    cout << main << "\n";  // 7
    cout << &main << endl; // mainin adresini doner
    cout << ptr << endl;   // mainin adresini doner degeri mainin adresi
    cout << *ptr << endl;  // ptr=main= 7 yi doner
    cout << &ptr << endl;  // ptr nin adresini doner

    // ! pointernin degerin degistirmek

    *ptr = 15; // boyle degistiriyoruz
    cout << *ptr << "\n";
    cout << &ptr << endl;
    // main de artik 15 olucak cunku degerler ayni yerden geldigi gibi degistigindede ayni yer oludugu icin hepsi degisir.
    cout << main << endl;

    // ! referans alma ve adressleri ayni oluyor.
    // ! pointer ile referans verme yada alma karistirmamak lazim
    // ! pointerleri adress tutmak icin referans alirken veya verirken referanslari degisken atamak tutmak icin kullaniriz.
    int mainRef = 1200;
    int &childRef = mainRef;

    cout << mainRef << "\n";   // deger ayni
    cout << childRef << endl;  // deger ayni
    cout << &mainRef << endl;  // adresleride ayni
    cout << &childRef << endl; // adresleride ayni

    // ! Pointerleri fonksiyonlarda kullanmak parametre olarak ataamak.

    int myNumber = 70;
    int a = 10;
    int b = 2;
    cout << "value of variable myNumber is " << myNumber << "\n";
    replaceValue(&myNumber); // adresleri aldik degerlerine ulasmak icin
    cout << "value of variable myNumber after the funciton is " << myNumber << endl;
    multiply(&a, &b); // adresleri aldik degerlerine ulasmak icin
};

void replaceValue(int *ptr) // degerleri burada kullandik adresdeki
{
    *ptr = 19; // degerleri burada kullandik adresdeki
    cout << "value of myNumber inside the function is " << *ptr << endl;
};

void multiply(int *ptrA, int *ptrB) // degerleri burada kullandik adresdeki
{
    int sum = *ptrA * *ptrB; // degerleri burada kullandik adresdeki
    cout << "ptr A and B ==: " << sum << endl;
};