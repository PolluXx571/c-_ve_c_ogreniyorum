#include <iostream>
#include <string>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

struct Date age(struct Date x, struct Date y);

int main()
{
    struct Date nowDate = {03, 11, 2025};
    struct Date birthDate = {14, 05, 1995};

    struct Date myAge = age(nowDate, birthDate);
    cout << "Yaş: " << myAge.year << " yil, " << myAge.month << " ay, "
         << myAge.day << " gün" << endl;
    return 0;
};

struct Date age(struct Date x, struct Date y)
{
    struct Date yearCalculated;
    yearCalculated.year = x.year - y.year;
    if (x.day < y.day)
    {
        yearCalculated.month = x.month - 1;
        yearCalculated.day = (x.day + 30) - y.day;
    }
    else
    {
        yearCalculated.day = x.day - y.day;
    }

    if (x.month < y.month)
    {
        yearCalculated.year--;
        yearCalculated.month = (x.month - y.month) + 12;
    }
    else
    {
        yearCalculated.month = x.month - y.month;
    }
    return yearCalculated;
};