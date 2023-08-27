#include "functionTemplate.h"
#include <iostream>
#include "Student.h"
using namespace std;

void func( const int& x, const int y){
    cout << "First x and y values : " << x << ", " << y << endl;
    //x++; cannot do these
    //y++;
    cout << "Last x and y values : " << x << ", " << y << endl;
}

int main() {

    // pass by value vs. reference
    Student s1( 20 );
    nextStudentIdByValue( s1 );
    cout << s1.getId() << endl;

    Student s2( 40 );
    nextStudentIdByReference( s2 );
    cout << s2.getId() << endl;

    // function template
    int a = 2, b = 23;
    cout << endl << maximum(a, b) << endl;

    double c = 2.3, d = 6.3;
    cout << maximum(c, d) << endl;

    string e = "a", f= "b";
    cout << maximum(e, f) << endl;

    //func(5, 3);

    return 0;
}
