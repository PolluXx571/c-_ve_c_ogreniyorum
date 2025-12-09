#include <iostream>
#include <string>
using namespace std;

class Animal
{
   public:
    virtual void Sound();
    virtual void Voice();
};

class Dog : public Animal
{
   public:
    void Sound() { cout << "The Dog says: HAV HAV: " << endl; }
    void Voice() { cout << "The Dog says: HAV HAV2: " << endl; }
};

class Cat : public Animal
{
   public:
    void Sound() { cout << "The Cat says: MIAV MIAV: " << endl; }
    void Voice() { cout << "The Cat says: MIAV MIAV2: " << endl; }
};

void AnimalSound(Animal* ptr)
{
    ptr->Sound();
    ptr->Voice();
}

int main()
{
    Dog dg;
    Cat ct;
    AnimalSound(&dg);
    AnimalSound(&ct);
    return 0;
}