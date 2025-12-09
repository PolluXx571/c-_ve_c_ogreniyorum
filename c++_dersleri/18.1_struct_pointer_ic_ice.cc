#include <iostream>
using namespace std;

// struct pointer ile birlikte tanimlandi
struct Pointerrr {
    string pointer1;
    int pointer2;
}* ptr;

// Employee struct
struct Employee {
    string name;
    Pointerrr* ptr1;
};

int main()
{
    // Employee için bellek ayir
    Employee* em = new Employee;
    // em içindeki pointer'a bellekte yer aç
    em->ptr1 = new Pointerrr;  // ! buraya dikkat bunu anlaman lazim

    // global pointer'imiza da yer açalim
    ptr = new Pointerrr;

    // Değer atamalari
    em->name = "Ali";
    em->ptr1->pointer1 = "Employee pointer'i";
    em->ptr1->pointer2 = 10;

    ptr->pointer1 = "Global pointer";
    ptr->pointer2 = 20;

    // Ekrana yazdir
    cout << em->name << " - " << em->ptr1->pointer1 << " - "
         << em->ptr1->pointer2 << endl;
    cout << ptr->pointer1 << " - " << ptr->pointer2 << endl;

    // Belleği temizleme (önce iç pointer, sonra ana)
    delete em->ptr1;
    delete em;
    delete ptr;

    return 0;
}
