//**********************************************************
// IntArray.cpp - Implementation of the IntArray class
//
// This file contains the implementation of the IntArray class
// methods, including constructors, destructors, and overloaded
// operators.
//
//**********************************************************

#include "IntArray.h"

IntArray::IntArray( const int arrSize )
{
    if ( arrSize <= 0)
    {
        size = 0;
        data = nullptr;
    }
    else
    {
        size = arrSize;
        data = new int[ size ];
        for ( int i = 0; i < size; i++ )
            data[ i ] = 0;
    }
}

// This copy constructor deep copies the array items as opposed
// to default copy constructor provided by the compiler
IntArray::IntArray( const IntArray& arr ) : size( arr.size )
{
    if( size > 0 )
    {
        data = new int[size];
        for( int i = 0; i < size; i++ )
        {
            data[i] = arr.data[i];
        }
    }
    else
    {
        data = nullptr;
    }
}

IntArray::~IntArray()
{
    if( data )
    {
        delete[] data;
    }
}

//default assignment operator performs shallow copy
//for the memberwise assignments
IntArray& IntArray::operator=( const IntArray& right )
{
    if( &right != this )  // avoid self-assignment
    {
        if( size != right.size )
        {
            if( size > 0 )
            {
                delete[] data;
            }
            size = right.size;
            if( size > 0 )
            {
                data = new int[size];
            }
            else
            {
                data = nullptr;
            }
        }
        for( int i = 0; i < size; i++ )
        {
            data[i] = right.data[i];
        }
    }
    return *this; // to allow cascading
}

//The return type of this function should be of a
//reference type since its returned value can be
//used both as an lvalue and as an rvalue
int& IntArray::operator[]( const int index )
{
    if( index < 0 || index >= size )
    {
        throw out_of_range("Invalid index");
    }
    else
    {
        return data[ index ];
    }
}

istream& operator>>( istream& in, IntArray& arr )
{
    cout << "Enter " << arr.size << " integers : ";
    for( int i = 0; i < arr.size; i++ )
    {
        in >> arr.data[ i ];
    }
    return in;
}

ostream& operator<<( ostream& out, const IntArray& arr )
{
    for( int i = 0; i < arr.size; i++ )
    {
        out << arr.data[i] << " ";
    }
    out << endl;
    return out;
}


void testIntArray()
{
    // Test constructor with default argument
    IntArray arr1; // Creates an empty array

    // Test constructor with a specified size
    IntArray arr2(5); // Creates an array of size 5, initialized with 0s

    // Test subscript operator and input operator
    cin >> arr2; // Reads 5 integers into arr2

    // Test output operator
    cout << "arr2: " << arr2;

    // Modify an element using the subscript operator
    arr2[2] = 42;

    // Output modified arr2
    cout << "Modified arr2: " << arr2;

    // Test copy constructor
    IntArray arr3(arr2); // Creates a copy of arr2
    cout << "arr3 : " << arr3;

    // Test assignment operator
    IntArray arr4;
    arr4 = arr3; // Assigns arr3 to arr4
    cout << "arr4 : " << arr4;

    IntArray arr(100);
    try
    {
        arr[130] = 20;

    }
    catch ( const exception& e )
    {
        cout << e.what() << endl;
    }
}
















