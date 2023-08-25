#include "GradeBook.h"

int main(){
    GradeBook gb1( 201 ), gb2;

    gb2.displayMessage();
    gb2.setCourseNo(202);
    gb2.displayMessage("Hello CS");

    gb2.computeAvg();
}
