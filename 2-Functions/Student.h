#include <iostream>
using namespace std;

class Student {
public:
    Student( int i = 0 );
    void setId( int i );
    int getId();
    private:
    int id;
};

Student::Student( int i ) {
    setId(i);
}
void Student::setId( int i )  {
    id = i;
}
int Student::getId( ) {
    return id;
}
void nextStudentIdByValue( Student s ) {
    int x = s.getId();
    x++;
    s.setId( x );
}

void nextStudentIdByReference( Student& s ) {
    int x = s.getId();
    x++;
    s.setId( x );
}
