// Do while;

#include <iostream>
using namespace std;

int main()
{

    short int i = 2;
    while (i < 7)
    {
        cout << i << "\t";
        i++;
    };

    cout << endl;

    short int t = 5;
    do
    {
        cout << t << "\t";
        t++;
    } while (t < 7);

    cout << endl;

    short int s = 20;
    do
    {
        cout << s << "\t";
        s++;
    } while (s >= 20 && s <= 25); // s hem 20'den büyük eşit hem de 25'ten küçük eşit olmalı

    return 0;
}