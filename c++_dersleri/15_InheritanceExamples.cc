#include <iostream>
using namespace std;

class MyMenu {
   public:
    string name;
    float calories;
    void message() { cout << name << " (" << calories << " cal)" << endl; };
};

class Drink : public MyMenu {
   public:
    float ounce;
    float cal_per_ounce() { return calories / ounce; };
    void message() { cout << name << " (" << calories << " cal)" << endl; };
};

int main() {
    MyMenu myWorkout;
    myWorkout.name = "kebap";
    myWorkout.calories = 654.33;
    myWorkout.message();

    Drink myDrink;
    myDrink.name = "Green Tea";
    myDrink.calories = 250.23;
    myDrink.ounce = 7;
    myDrink.message();
    cout << "drink cal/ounce: " << myDrink.cal_per_ounce() << endl;

    return 0;
}