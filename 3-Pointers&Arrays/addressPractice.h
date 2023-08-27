/*
   This function, addressPractice, demonstrates the concept of pointers and addresses
   in C++. It showcases how variables are stored in memory, how pointers reference
   these memory locations, and how changing pointers affects the values they point to.
   This function serves as a learning tool to better understand memory management and
   pointer manipulation in C++ programming.
*/

#ifndef ADDRESS_PRACTICE_H
#define ADDRESS_PRACTICE_H
#include <iostream>
using namespace std;
void addressPractice()
{
    int x = 4, y = 5, *a = &x, *b = a, **c = &b;
    cout << "Address of x: " << &x << endl;
    cout << "Address of y: " << &y << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Address of c: " << &c << endl;
    cout << "**c: " << **c << endl;
    cout << "*c : " << *c << endl;
    cout << "c : " << c << endl;
    cout << "&c : " << &c << endl << endl;
    b = &y;
    *b = 3;
    cout << "**c: " << **c << endl;
    cout << "*c : " << *c << endl;
    cout << "c : " << c << endl;
    cout << "&c : " << &c << endl << endl;
    cout << "*&c: " << *&c << endl;
    cout << "&*c: " << &*c << endl;
    cout << "*&x: " << *&x << endl;
    // cout << "&*x: " << &*x; compile-time error
}
#endif // ADDRESS_PRACTICE_H
