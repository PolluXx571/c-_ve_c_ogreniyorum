#include <iostream>
using namespace std;

class Father {
   public:
    void myMethod() { cout << "This is unbelievable\n"; }

   protected:
    void protectedMessage() { cout << "This is protected message\n"; }
};

class Son {
   public:
    int number = 7;
    void myMethod2() { cout << "hello c++ inheritance\n"; }
};

class Child : public Father,  // mutiple inheritance
              public Son {
   public:
    void myProtectedMessage() { protectedMessage(); };

    void mySonYear() { cout << "My son's year is: " << number << endl; };
};

int main() {
    Child myChild;
    myChild.myProtectedMessage();
    myChild.mySonYear();
    return 0;
}