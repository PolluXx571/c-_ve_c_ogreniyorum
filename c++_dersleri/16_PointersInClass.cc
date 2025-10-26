#include <cstring>
#include <iostream>

using namespace std;

class Employee {
   private:
    string name;
    int salary;

   public:
    void setSalary(int s) { salary = s; };
    void setName(string n) { name = n; };
    int getSalary() { return salary; };
    string getName() { return name; };
};

/*

Gösterdiğiniz yapı, **C++** programlama dilinde bir **yıkıcı (Destructor)**
olarak adlandırılır.

```cpp
~Employee() {}
```

-----

## Yıkıcı (Destructor) Nedir?

Bir yıkıcı, bir sınıfın nesnesi **bellekten silindiğinde** veya **yaşam süresi
sona erdiğinde** (kapsam dışına çıktığında) **otomatik olarak** çağrılan özel
bir üye fonksiyondur.

### Temel Özellikleri:

1.  **İsim:** Sınıf adıyla aynıdır, ancak önünde bir **tilde işareti (`~`)**
bulunur.
      * `Employee` sınıfı için yıkıcı: `~Employee()`
2.  **Geri Dönüş Türü:** Geri dönüş türü belirtmez (hatta `void` bile).
3.  **Parametreler:** Parametre alamaz.
4.  **Çağrılma Zamanı:**
      * Stack'te oluşturulan bir nesne (örneğin: `Employee em;`) ait olduğu
kapsamın (`{}`) sonuna ulaştığında.
      * `new` ile oluşturulmuş bir nesne (örneğin: `Employee* em;`) için
**`delete em;`** komutu manuel olarak çağrıldığında.
      * Akıllı işaretçiler (smart pointers) nesnenin sahipliğini bıraktığında.

### Amacı:

Yıkıcının temel amacı, nesne yok edilmeden hemen önce **kaynakları serbest
bırakmaktır**. Bu kaynaklar şunlar olabilir:

  * **Dinamik Olarak Ayrılmış Bellek:** Nesnenin yapıcısı (`Constructor`)
sırasında `new` ile ayrılmış bellek varsa, bu belleği `delete` ile serbest
bırakmak.
  * **Dosya Tutamaçları (File Handles):** Nesnenin açtığı dosyaları kapatmak.
  * **Veritabanı Bağlantıları:** Veritabanı oturumunu sonlandırmak.
  * **Ağ Soketleri:** Açık ağ bağlantılarını kapatmak.

### Örnek (Neden Gerekli):

Eğer `Employee` sınıfınız dinamik olarak bellek ayırıyorsa, bu belleği yıkıcı
içinde serbest bırakmanız gerekir:



Sizin gösterdiğiniz boş yıkıcı:

```cpp
~Employee() {}
```

Bu, C++'ın otomatik olarak sağladığı **varsayılan yıkıcıya** eşdeğerdir.
Sınıfınızda manuel olarak serbest bırakılması gereken hiçbir kaynak (dosya,
`new` ile ayrılmış bellek vb.) yoksa, bu boş yıkıcıyı açıkça tanımlamanıza gerek
yoktur; derleyici sizin için boş bir yıkıcı oluşturur. Ancak, bazı durumlarda
(özellikle miras/kalıtım ilişkilerinde **`virtual` yıkıcı** tanımlamak için) boş
olsa bile yazılması önemlidir.


*/

class Employee1 {
   private:
    char* isim;  // Dinamik bellek ayrılmış olabilir
    int* salary;

   public:
    // Yapıcı (Constructor)
    Employee1(const char* ad, int maas) {
        isim = new char[strlen(ad) + 1];
        salary = new int;

        std::strcpy(isim, ad);
        *salary = maas;
    }

    // Yıkıcı (Destructor)
    ~Employee1() {
        delete[] isim;
        delete salary;
        std::cout << "Employee nesnesi temizlendi ve bellek serbest birakildi."
                  << std::endl;
    }
    void showInfo() {
        cout << "isim: " << isim << endl;
        cout << "maas: " << *salary << endl;
    }
};

int main() {
    Employee* em = new Employee();
    em->setSalary(15);
    em->setName("OsmanAli");
    cout << "Name: " << em->getName() << endl;
    cout << "Salary: " << em->getSalary() << endl;
    Employee1* em1 = new Employee1("2", 5);
    em1->showInfo();
    delete em1;

    return 0;
};