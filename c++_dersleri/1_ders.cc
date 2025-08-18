#include <iostream>  // input-output için gerekli kütüphane
using namespace std;

// g++ 1_ders.cc,  g++ 1_ders.cc -o ders1.exe  programi calistirmak icin

int main() {
    int sayi;               // kullanıcıdan sayı almak için değişken
    cout << "Bir sayi giriniz: "; // ekrana yazdırma
    cin >> sayi;            // kullanıcıdan input alma
    cout << "Girdiginiz sayi: " << sayi << endl;
    return 0;
}
