#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using namespace std;

class GradeBook{
public:
    GradeBook( int courseNo ); // cannot use the default constructor after this creation
    GradeBook( );
    void setCourseNo( int no );
    int getCourseNo( );
    void displayMessage( string msg );
    void displayMessage( );
    void computeAvg();

private:
    int courseNo;
};
#endif // GRADEBOOK_H
