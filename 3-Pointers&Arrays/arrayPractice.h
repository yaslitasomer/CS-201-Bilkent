/*
   This C++ program demonstrates various functions for creating and managing arrays:

   - createArray_1 returns a dynamically allocated array of 10 doubles with specific values.
   - createArray_2 initializes and returns a dynamically allocated array of 10 doubles using a reference parameter.
   - createArray_3 initializes and returns a dynamically allocated array of 10 doubles using a pointer parameter.

   The program also includes utility functions for printing the contents of arrays and a run function
   to test the array creation and manipulation functions.
*/



// createArray_1 returns the array as a return value
double* createArray_1( )
{
    return new double[ 10 ]{1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};;
}

// createArray_2 returns the array from the parameter list
// (using a reference parameter)
void createArray_2( double*& arr )
{
    arr = new double[ 10 ]();
}

// createArray_3 returns the array from the parameter list
// (without using a reference parameter but simulating
// pass-by-reference using a pointer)
void createArray_3( double** arr )
{
    *arr = new double[ 10 ]{1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0, 10.1};
}

/*
// void incorrectCreateArray_1( double* arr ) {
// arr = new double[ 10 ];
//}
//      does not return an array

// double* incorrectCreateArray_2( ) {
// double arr[ 10 ];
// return arr;
// }    it is a local array
*/

void printArr( const double* arr){
    for( int i = 0; i < 10; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void runArr()
{
    double* D;
    D = createArray_1();
    printArr(D);
    delete [] D;
    createArray_2( D );
    printArr(D);
    delete [] D;
    createArray_3( &D );
    printArr(D);
    delete [] D;
}
