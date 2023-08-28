//**********************************************************
// IntArray - A class for managing an array of integers.
//
// This class provides methods for creating and managing
// dynamic integer arrays. It includes constructors, a destructor,
// an overloaded assignment operator, and subscript operator
// for element access.
//
//**********************************************************
#ifndef INTARRAY_H
#define INTARRAY_H
#include <iostream>
using namespace std;
class IntArray
{
public:

    // If a class has dynamically allocated data members, it is highly recommended to
    // re-implement the destructor and copy constructor, and overload the assignment
    // operator (instead of using the ones provided by the compiler)
    IntArray( const int = 0 );   // constructor with a default argument
    IntArray( const IntArray& ); // copy constructor
    ~IntArray();                 // destructor
    IntArray& operator=( const IntArray& ); // overloaded assignment operator
    int& operator[]( const int );           // overloaded subscript operator

private:
    int size;
    int* data;

// IntArray class declares the following two functions as its friend such that they
// can access its private data members and call its private member functions
    friend istream& operator>>( istream&, IntArray& );
    friend ostream& operator<<( ostream&, const IntArray& );
};

void testIntArray();

#endif // INTARRAY_H
