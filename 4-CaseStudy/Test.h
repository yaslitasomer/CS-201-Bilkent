/*
    Test.h

    Description:
    This header file defines the 'Test' class with constructors, a destructor, a copy constructor,
    and an assignment operator. The class represents a basic test object identified by an integer 'id'.
    Output messages in constructors, destructors, copy constructors, and assignment operator are for
    demonstration purposes.

*/

class Test
{
public:
    Test( int i = 0 )
    {
        id = i;
        cout << "Constructor " << id << endl;
    }

    ~Test()
    {
        cout << "Destructor " << id << endl;
    }

    Test( const Test& o )
    {
        id = o.id;
        cout << "Copy constructor " << id << endl;
    }

    Test& operator=( const Test& right )
    {
        id = right.id;
        cout << "Assignment " << id << endl;
        return *this;
    }
    int id;
};


