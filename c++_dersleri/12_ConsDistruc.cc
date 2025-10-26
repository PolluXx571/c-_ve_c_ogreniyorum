#include <iostream>
#include <string>
using namespace std;

/*
Özetle
Constructor        (Kurucu)	                                     Destructor (Yıkıcı)
Görevi	   Nesneyi başlatmak ve kaynakları tahsis etmek.	Nesneyi temizlemek ve tahsis edilen kaynakları serbest bırakmak.

Çağrılma Zamanı	 Nesne oluşturulduğu anda.	                 Nesnenin ömrü sona erdiğinde.
Sözdizimi	Sınıf adı ile aynı, geri dönüş tipi yok.	     Sınıf adı ile aynı, başında ~ var ve parametre almaz.

Temel Amaç	  Nesneye ilk ve geçerli bir durum vermek.	      Bellek sızıntılarını önlemek ve temiz bir çıkış sağlamak.

*/
class MyClass
{
public:
    int x;
    int y;
    MyClass() // constructor
    {
        x = 10;
        cout << "Start MyClass" << "\n";
    }
    void myNumX()
    {
        cout << x << "\n";
    }

    ~MyClass() // destructor klasin icinde her sey calisip bittigi zaman en son destructor calisir ve bu bize classimizin baska islem yapmacagini soyler
    {
        cout << "End MyClass" << "\n";
    }
};

class MyPrivateClass
{
private: // private olanlara disardan  erisemiyoruz.
    int x = 7;
    int y = 19;
    void privateMessage()
    {
        cout << "hello i am Private message Function" << "\n";
    }

public:
    void publicMessage()
    {
        cout << "hello i am public message Function" << "\n";
    }
    ~MyPrivateClass() // destructor klasin icinde her sey calisip bittigi zaman en son destructor calisir ve bu bize classimizin baska islem yapmacagini soyler
    {
        cout << "End MyPrivateClass" << "\n";
    }
    // ! Eğer yasi public olsaydı, herkes bu değişkene dışarıdan doğrudan erişebilir ve onu değiştirebilirdi. Bu, veri güvenliğini tehlikeye atar.Eğer yasi private olsaydı, Canli sınıfından türetilen Hayvan veya Bitki sınıfları bile bu değişkene erişemezdi. Bu, kalıtımın amacına ters düşer, çünkü alt sınıfların üst sınıfın özelliklerini kullanması beklenir.Eğer yasi protected olursa, yukarıdaki her iki sorunu da çözmüş olursunuz.Dışarıdan kimse yasi'ye doğrudan erişemez.Ancak Canli'dan türetilen Hayvan sınıfı, yasi'ye erişebilir ve onu yönetebilir.
protected: // protected alt sniflardan ulasip kullanila bilir. alt sniflar icin lazimdir. disardan erisilemez. private ve public arasindaki dengeyi kurar.
    string myName = "OsmanAli";
};

int main()
{
    MyClass myObj;
    MyPrivateClass myPrivate;
    myObj.myNumX();
    myPrivate.publicMessage();
    return 0;
}