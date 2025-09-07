#include <iostream>
using namespace std;

int sum(int x);
int degiskenIleYazdirma(int y, int z);

int main()
{
    cout << sum(5) << endl;

    int degisken = degiskenIleYazdirma(10, 20);
    cout << degisken << endl;

    return 0;
};

int sum(int x)
{

    return x;
};

int degiskenIleYazdirma(int y, int z)
{
    return y + z;
}