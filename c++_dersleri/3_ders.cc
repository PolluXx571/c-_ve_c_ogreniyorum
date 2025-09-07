// Betwise operator;
// https://cplusplus.com/doc/tutorial/operators/#google_vignette
// and && or || :>> and && de ikiside dogru olmasi lazim or || da ise bir tanesi

/*
| Durum                         | Kullan        |
| ----------------------------- | ------------- |
| Sonu belli → örn: 10 kez      | `for`         |
| Sonu belli değil              | `while`       |
| En az bir kez çalışmalıysa    | `do...while`  |
| Değere göre seçim yapılacaksa | `switch-case` |


*/

// ! and ve or a ornek
#include <iostream>
using namespace std;

int a = 5;
int b = 10;

int main()
{
    int number = 10;
    if (a > 0 && b > 0)
    {
        std::cout << "Her ikisi de pozitiftir." << std::endl;
    };

    if (a == 5 || b == 0)
    {
        std::cout << "a 5'e eşit veya b sifirdir." << std::endl;
    };

    if (number > 7)
        cout << "Number 7 den buyuk: " << number << endl;
    else
        cout << "Number 7 den kucuk: " << number << endl;

    int day;
    cout << "Enter a day number :";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default:
        cout << "There is no such day\n";
    }
}