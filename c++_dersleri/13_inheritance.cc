#include <iostream>
#include <string>
using namespace std;

// classlari miras alma inheritance;

class Vehicale
{
public:
    string brand = "Skoda";

    void message()
    {
        cout << "My car is: " << brand << "\n";
    };
    void secondMessage(int number)
    {
        cout << "My Car Year is: " << number << "\n";
    }

protected:
    void protectedMessage(string mess)
    {
        cout << "Protected Message is here: " << mess << "\n";
    }
};

// Vehicale classini miras aldik.
class MyCar : public Vehicale
{
public:
    string model = "Octavia";
    int carYear = 2025;
    int secondCarYear = 2023;
    void showMeProtectedMessage()
    {
        protectedMessage(model);
    };
    void secondMessageHere()
    {
        secondMessage(carYear);
        secondMessage(secondCarYear);
    }
};

int main()
{
    MyCar myBrand;
    myBrand.message();
    myBrand.showMeProtectedMessage();
    myBrand.secondMessageHere();

    return 0;
}