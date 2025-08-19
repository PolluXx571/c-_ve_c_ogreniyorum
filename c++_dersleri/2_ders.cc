#include <iostream>
using namespace std;

int main()
{
    cout << "this is second work C++ \n"
         << endl;

    int myNumber = 7;
    myNumber = 7 + 8;

    bool myBool = true;
    char myLetter = 'M';
    float myFloatNumber = 12.99;
    // basamaklar 15 den fazla ise double kullanilir.
    double myDoubleNumber = 19.6598723156487;
    string myText = "I am learning C++";

    cout << "myNumber: " << myNumber << endl;
    cout << "myBool: " << myBool << endl;
    cout << "myLetter: " << myLetter << endl;
    cout << "myFloat: " << myFloatNumber << endl;
    cout << "myDouble: " << myDoubleNumber << endl;
    cout << "myText: " << myText << endl;

    // degiskende 1 den fazla deger atama

    int x = 1, y = 2, z = 3;
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "z= " << z << endl;
    x = y = z = 11;
    cout << "x=11 " << x << endl;
    cout << "y=11= " << y << endl;
    cout << "z=11= " << z << endl;

    // ! string yazi tipi kullanicidan alma

    string myTextStr;
    cout << "bir mesaj giriniz: ";
    getline(cin, myTextStr); // string yazi tipi kullanicidan alma
    cout << "\nsizin mesajiniz burda: "
         << myTextStr << endl;

    // ! degisken tiplerin byte larin alanlarini gormek sizeof();

    cout << "char: " << sizeof(char) << "\n";
    cout << "int: " << sizeof(int) << "\n";
    cout << "short int: " << sizeof(short int) << "\n";
    cout << "long int: " << sizeof(long int) << "\n";
    cout << "float: " << sizeof(float) << "\n";
    cout << "double: " << sizeof(double) << "\n";
    cout << "wchar_t: " << sizeof(wchar_t) << "\n";

    return 0;
}
