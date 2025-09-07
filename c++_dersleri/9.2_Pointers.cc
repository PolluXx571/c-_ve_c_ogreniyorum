// Pointerleri Array ile kullanmak

#include <iostream>
using namespace std;
void showMe(void *ptr, char type);
int main()
{
    int number[] = {10, 20, 30, 40, 50};
    int *exNumber = number; // Doğru tanımlama: Bir pointer.
    cout << number << endl; // javascripte ki gibi olmaz illa for ile yazdiririz hepsini burasi zaten adres doner

    for (int n : number)
    {
        cout << n << "\n"
             << endl;
    }
    cout << &number << endl;
    cout << *number << endl;
    cout << "2 ci deger: " << *(number + 1) << endl; // 2 ci degeri doner 1 indexdeki degeri
    // *exNumber: Pointer'ın işaret ettiği adresteki değeri gösterir.
    std::cout << "my exNumber * : " << *exNumber << "\n";

    // exNumber: Pointer'ın tuttuğu bellek adresini gösterir.
    std::cout << "my exNumber & : " << exNumber << std::endl;
    std::cout << "ptrNumber'in tuttugu adres: " << &exNumber << std::endl;

    // ! void olan fonksiyonlarda yada turleri degistirme.

    int number1 = 70;
    float number2 = 3.14;
    double number3 = 70.23212132;
    char letter = 'F';

    showMe(&number1, 'i');

    showMe(&number2, 'f');

    showMe(&number3, 'd');

    showMe(&letter, 'c');

    return 0;
};

void showMe(void *ptr, char type)
{
    switch (type)
    {
    case 'i': // Tek tırnak kullanıldı
        std::cout << *((int *)ptr) << "\n";
        break;
    case 'c': // Tek tırnak kullanıldı
        std::cout << *((char *)ptr) << "\n";
        break;
    case 'f': // Tek tırnak kullanıldı
        std::cout << *((float *)ptr) << "\n";
        break;
    case 'd': // Tek tırnak kullanıldı
        std::cout << *((double *)ptr) << "\n";
        break;
    default:
        // Geçersiz tür girildiğinde uyarı verilebilir.
        std::cout << "Gecersiz tur!\n";
        break;
    }
}
