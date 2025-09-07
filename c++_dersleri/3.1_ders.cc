#include <iostream>

using namespace std;

// ! karisik switch case
int main()
{

    int x = 1, y = 11, result;

    result = (x == 7) ? 19 : ((y == 12) ? 10 : -7);

    switch (x)
    {
    case 7:
        result = 19;
        break;
    default:
        switch (y)
        {
        case 10:
            result = 10;
            break;
        default:
            result - 7;
        }
    }

    cout << result << "\n";
    return 0;
}