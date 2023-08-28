/* This C++ program demonstrates various concepts related to classes, objects, memory management,
   and function parameter passing. It defines a custom class 'Test' and showcases its usage through
   different functions and scenarios. The program creates and manipulates instances of the 'Test' class,
   uses pointers and references, and explores dynamic memory allocation and deallocation.
*/

#include <exception>
#include "IntArray.h"
#include "Test.h"
#include <iostream>
using namespace std;

void printSeparator()
{
    cout << endl;
    const int length = 30; // Adjust the length of the separator as needed
    const char* separator = "*";

    // Print the separator line
    for (int i = 0; i < length; i++)
    {
        std::cout << separator;
    }
    std::cout << std::endl;
}

Test t1( 10 );
Test t2( 20 );

void foo( bool flag )
{
    Test t3( 30 );
    static Test t4( 40 );

    if( flag )
    {
        Test t5( 50 );
        Test t6( 60 );
    }
    Test t7( 70 );
}

void bar ( Test a, Test* b, Test& c )
{
// ...
}

int main()
{
    //testIntArray();

    printSeparator();
    cout << "checkpoint 1---" << endl;
    Test t8( 80 );
    cout << "checkpoint 2---" << endl;
    foo( false );
    cout << "checkpoint 3---" << endl;
    foo( true );
    cout << "checkpoint 4---" << endl;

    printSeparator();
    cout << "checkpoint 1---" << endl;
    Test *b1;
    cout << "checkpoint 2---" << endl;
    b1 = new Test ( 100 );
    delete b1;
    cout << "checkpoint 3---" << endl;
    b1 = new Test [2];
    b1[0].id = 200;
    b1[1].id = 300;
    delete[] b1;
    cout << "checkpoint 4---" << endl;
    b1 = new Test [2];
    b1[0].id = 400;
    b1[1].id = 500;
    //delete b1;    // can lead to undefined behavior
    cout << "checkpoint 5---" << endl;

    printSeparator();
    cout << "checkpoint 1---" << endl;
    Test t1(11);
    Test& t2 = t1;
    Test t3 = t1;
    t3.id = 33;
    cout << "checkpoint 2---" << endl;
    bar( t1, &t2, t3 );
    cout << "checkpoint 3---" << endl;
    Test* t4;
    Test* t5;
    t4 = &t1;
    t5 = t4;
    *t4 = t1;
    cout << "checkpoint 4---" << endl;
    bar( *t5, &t1, *t4 );
    cout << "checkpoint 5---" << endl;

    return 0;
}

