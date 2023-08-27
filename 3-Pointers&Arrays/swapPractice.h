/*
   This C++ program demonstrates various functions and scenarios related to
   swapping integers, pointers, and objects. It includes the following functionalities:

   1. Swapping integers using references.
   2. Swapping integer pointers and demonstrating pointer behavior.
   3. Defining a Student class and swapping the IDs and objects of Student instances.
   4. Swapping Student object pointers to change their references.

   The program illustrates key concepts in C++ such as references, pointers,
   and object manipulation, providing a practical understanding of these concepts.
*/

#include <iostream>
using namespace std;

// swaps two integers
void swapIntegers( int& i1, int& i2 )
{
    int temp = i1;
    i1 = i2;
    i2 = temp;
}

// swaps two integer pointers
void swapIntegerPointers( int* p1, int* p2 )
{
    cout << "*p1 : " << *p1 << ", *p2 : " << *p2 << endl;
    int* temp = p1;
    p1 = p2;
    p2 = temp;
    cout << "*p1 : " << *p1 << ", *p2 : " << *p2 << "\n\n";
}

class Student{
public:
    int id;
    int cls;
    Student( int no = 0 ){
        id = no;
        cls = no / 100;
    }
};

// swaps the id data members of two Student objects
// (assuming that the Student class has been
// defined and it has a public id data member)
void swapStudentIds( Student& S1, Student& S2 )
{
    int temp = S1.id;
    S1.id = S2.id;
    S2.id = temp;
}

// swaps two Student objects
void swapStudentObjects( Student& S1, Student& S2 )
{
    Student temp = S1;
    S1 = S2;
    S2 = temp;
}

// swaps two Student object pointers
void swapStudentObjectPointers( Student* &P1, Student* &P2 )
{
    Student* temp = P1;
    P1 = P2;
    P2 = temp;
}

void run(){
    int a = 10, b = 20, *c = &a, *d = &b;
    Student S(100), R(200), *X = &S, *Y = &R;

    // swap a and b
    cout << "a : " << a << ", b : " << b << endl;
    swapIntegers( a, b );
    cout << "a : " << a << ", b : " << b << "\n\n";

    // swap c and d
    swapIntegerPointers( c, d );

    // swap the ids of S and R
    cout << "S.id : " << S.id << ", R.id : " << R.id << endl;
    cout << "S.class : " << S.cls << ", R.class : " << R.cls << endl;
    swapStudentIds( S, R );
    cout << "S.id : " << S.id << ", R.id : " << R.id << endl;
    cout << "S.class : " << S.cls << ", R.class : " << R.cls << "\n\n";

    // swap S and R
    cout << "S.id : " << S.id << ", R.id : " << R.id << endl;
    cout << "S.class : " << S.cls << ", R.class : " << R.cls << endl;
    swapStudentObjects( S, R );
    cout << "S.id : " << S.id << ", R.id : " << R.id << endl;
    cout << "S.class : " << S.cls << ", R.class : " << R.cls << "\n\n";

    // swap X and Y
    cout << "X : " << X << ", &S : " << &S << endl;
    cout << "Y : " << Y << ", &R : " << &R << endl;
    swapStudentObjectPointers( X, Y );
    cout << "X : " << X << ", &S : " << &S << endl;
    cout << "Y : " << Y << ", &R : " << &R << endl;
}
