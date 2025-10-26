/*
Evet, C++ programlamada `cpp`, `cc`, `cxx` gibi uzantılar ve `.h`, `.hpp` gibi uzantılar arasında önemli farklar vardır. Bu farklar, derleme sürecini ve kodun yapısını doğrudan etkiler.

---

### Kaynak Dosyalar vs. Başlık (Header) Dosyaları

Temelde, dosyalar iki ana kategoriye ayrılır:

1.  **Kaynak Dosyalar** (`.cpp`, `.cc`, `.cxx`): Bunlar, fonksiyonların, sınıfların ve diğer kod bloklarının **uygulamasını (implementation)** içeren dosyalardır. Derleyici, bu dosyaları doğrudan makine diline çevirir. Bir C++ projesindeki ana mantık ve kod bu dosyalarda bulunur.

2.  **Başlık Dosyaları** (`.h`, `.hpp`): Bunlar, fonksiyonların ve sınıfların **prototiplerini (declarations)**, yani ne yaptıklarını değil, nasıl çağrılacaklarını (isimleri, parametreleri, geri dönüş türleri vb.) belirten dosyalardır. Kodun farklı bölümlerinin birbirini "tanımasını" sağlar. Genellikle `#include` komutuyla başka kaynak dosyalarına dahil edilirler.

---

### Dosya Uzantılarının Detayları

#### **Kaynak Dosyaları**

* **`.cpp`**: En yaygın ve standart C++ kaynak dosyası uzantısıdır. Genellikle projelerin büyük çoğunluğunda bu uzantı kullanılır.
* **`.cc`**: Bazı C++ geliştiricileri veya projeleri tarafından kullanılan bir alternatiftir. Özellikle Unix/Linux ortamlarında yaygın olabilir. Temel olarak `.cpp` ile aynı amaca hizmet eder, aralarında işlevsel bir fark yoktur.
* **`.cxx`**: Yine C++ kaynak dosyaları için kullanılan bir başka uzantıdır. C++'ın daha yeni versiyonlarına atıfta bulunabilir, ancak bu yaygın bir kullanım değildir.
* **`.c`**: Bu, C dili için kullanılan bir kaynak dosyası uzantısıdır. C++ derleyicileri genellikle `.c` dosyalarını da derleyebilir, ancak bunları C kodu olarak kabul ederler. Bu, C++'ın bazı ek özelliklerinin (örneğin sınıf kurucularının) bu dosyalarda kullanılamamasına neden olabilir. Bu nedenle C++ kodu için `.c` kullanmaktan kaçınmak önemlidir.

#### **Başlık (Header) Dosyaları**

* **`.h`**: C ve C++ dillerinde en yaygın kullanılan başlık dosyası uzantısıdır. Hem C hem de C++ kodlarıyla uyumludur. C++'ta C kütüphanelerini dahil ederken sıkça görülür.
* **`.hpp`**: Bu uzantı, özellikle C++ için yazılmış başlık dosyaları için kullanılır. C başlık dosyalarıyla karışmasını önlemek ve başlık dosyasının saf C++ kodu içerdiğini vurgulamak için tercih edilir. Fonksiyonların veya sınıfların tanımlarını (implementation) doğrudan başlık dosyasına koyduğunuz "sadece başlık kütüphaneleri" (header-only libraries) için yaygın olarak kullanılır.

### Özet Tablosu

| Uzantı | Dosya Tipi | Dil | Amacı |
| :--- | :--- | :--- | :--- |
| **`.cpp`** | Kaynak | C++ | Fonksiyon ve sınıf uygulamalarını içerir. |
| **`.cc`** | Kaynak | C++ | `.cpp`'ye alternatif, aynı amaç için kullanılır. |
| **`.cxx`** | Kaynak | C++ | `.cpp`'ye alternatif, daha az yaygın. |
| **`.c`** | Kaynak | C | C dilinin kaynak kodunu içerir. C++'ta nadiren kullanılır. |
| **`.h`** | Başlık | C/C++ | Fonksiyon ve sınıf prototiplerini içerir. Hem C hem de C++ projelerinde kullanılır. |
| **`.hpp`** | Başlık | C++ | C++'a özel başlık dosyalarını belirtmek için kullanılır. |

*/

#include <iostream>
using namespace std;
#include "functions/print.h"
#include "classes/myClass.h"
#include "functions/hello.cc"
#include "functions/myName.c++"

int main()
{
    MyClass myFirstClass;
    message();
    sayHelloMessage();
    cPlusPlus();
    myFirstClass.myMethod();

    cout << myFirstClass.x << "\n";
    cout << myFirstClass.name << "\n";

    return 0;
}