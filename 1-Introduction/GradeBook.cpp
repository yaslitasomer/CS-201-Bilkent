#include <iostream>
using namespace std;
#include "GradeBook.h"

GradeBook::GradeBook( int no ) {
    setCourseNo( no );
}

GradeBook::GradeBook( ) {
    courseNo = 0;
}

void GradeBook::setCourseNo( int no ){
    if(( no >= 100 ) && ( no <= 999 )){
        courseNo = no;
    }
    else{
        cout << "invalid grade!" << endl;
        courseNo = 0;
    }
}

int GradeBook::getCourseNo(){
    return courseNo;
}

void GradeBook::displayMessage( string msg ){
    cout << msg << " " << getCourseNo() << "!" << endl;
}

void GradeBook::displayMessage(){
    cout << "Welcome to CS " << getCourseNo() << "!" << endl;
}

void GradeBook::computeAvg(){
    int grade, avg, sum = 0, count = 0;
    char letter;

    cout << "Enter grades (negative value to stop): ";
    cin >> grade;
    while ( grade >= 0 ) {
        sum += grade;
        count++;
        cout << "Enter grades (negative value to stop): ";
        cin >> grade;
    }
    if ( count )
        avg = static_cast<double>( sum ) / count;
    else
        avg = 0;
    switch ( avg / 10 ) {
        case 10:
        case 9: letter = 'A'; break;
        case 8: letter = 'B'; break;
        case 7: letter = 'C'; break;
        case 6: letter = 'D'; break;
        default: letter = 'F'; break;
    }
    cout << "The class average is " << letter << endl;
}
