// constructor
// C++'ta constructor (kurucu fonksiyon), bir sınıftan nesne oluşturulduğu anda otomatik olarak çağrılan özel bir üye fonksiyonudur. Adı her zaman sınıfın adıyla aynıdır ve geri dönüş tipi yoktur (hatta void bile yazılmaz).

// Ne İçin Lazım ? Constructor'ın temel amacı, bir nesne ilk oluşturulduğunda üye değişkenlerine başlangıç değerleri atamaktır. Bu, nesnenin her zaman geçerli ve kullanıma hazır bir durumda olmasını sağlar.
// Constructor olmadan bir nesne oluşturduğunuzda,üye değişkenlerin değeri belirsiz(garbage value) olabilir.Bu durum, beklenmedik hatalara ve programın çökmesine yol açabilir.Constructor kullanarak bu belirsizliği ortadan kaldırırsınız

#include <iostream>
#include <string>
using namespace std;
class Car
{
    string marka;
    int yil;
    // surda aslinda gorunmez bir constructor var nesne olustugunda otomatik atanir.
    //  Car() {
    //
    //
    // }
};

class MathOperations
{
public:
    int number1;
    int number2;

    // Kurucu (Constructor)
    MathOperations(int num1, int num2)
    {
        number1 = num1;
        number2 = num2;
    }

    // Üye fonksiyonlar kurucunun dışında tanımlanır.
    int addition()
    {
        return number1 + number2;
    }

    int subtraction()
    {
        return number1 - number2;
    }

    int multiplication()
    {
        return number1 * number2;
    }

    int division()
    {
        return number1 / number2;
    };
    void getData()
    {
        cout << "Toplama: " << addition() << endl;
        cout << "Cikarma: " << subtraction() << endl;
        cout << "Carpma: " << multiplication() << endl;
        cout << "Bolme: " << division() << endl;
    }
};

class Food
{
public:
    Food(int sayi, string isim)
    {
        cout << sayi << " " << isim << "\n";
        cout << "hello i am food message" << "\n";
    };
};

int main()
{
    Food myFood(2, "Constructor");
    MathOperations myMath(10, 20);
    myMath.getData();
    return 0;
};