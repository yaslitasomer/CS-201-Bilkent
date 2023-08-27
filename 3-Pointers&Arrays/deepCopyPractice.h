/*
   This C++ code demonstrates two functions for deep copying an array:
   - `deepCopy_1` allocates memory for a new array, copies the elements from the input array, and returns it.
   - `deepCopy_2` allocates memory for a new array and assigns it to a pointer to a pointer.

   It also includes a test function, `runDeepCopy`, that showcases the deep copying process using both functions.
   The original array remains unaffected by modifications to the deep copies.

   Note: Proper memory cleanup is performed using `delete[]` to avoid memory leaks.
*/


void deepCopy_1( const double* arr, const int arrSize, double*& output )
{
    output = new double [ arrSize ];
    for (int i = 0; i < arrSize; i++)
        output[ i ] = arr[i];
// arr[ 0 ] = 10; Compile-time error since arr is a pointer to constant data
// dereferencing (subscript) operator cannot be used as
// an l-value
}
void deepCopy_2( const double* arr, const int arrSize, double** output )
{
    *output = new double [ arrSize ];
    for (int i = 0; i < arrSize; i++)
        (*output)[ i ] = arr[i];
}

// Function to print an array
void printArray(const double* arr, const int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void runDeepCopy()
{
    const int arrSize = 5;
    double originalArray[arrSize] = {1.1, 2.2, 3.3, 4.4, 5.5};

    double* copiedArray1 = nullptr;
    double* copiedArray2 = nullptr;

    // Test deepCopy_1
    deepCopy_1(originalArray, arrSize, copiedArray1);

    std::cout << "Original Array: ";
    printArray(originalArray, arrSize);

    std::cout << "Deep Copy 1: ";
    printArray(copiedArray1, arrSize);

    // Modify the first element of the deep copy
    copiedArray1[0] = 99.9;

    std::cout << "Modified Deep Copy 1: ";
    printArray(copiedArray1, arrSize);

    std::cout << "Original Array (unaffected by deep copy): ";
    printArray(originalArray, arrSize);

    // Free memory
    delete[] copiedArray1;

    // Test deepCopy_2
    deepCopy_2(originalArray, arrSize, &copiedArray2);

    std::cout << "Deep Copy 2: ";
    printArray(copiedArray2, arrSize);

    // Modify the first element of the deep copy
    copiedArray2[0] = 88.8;

    std::cout << "Modified Deep Copy 2: ";
    printArray(copiedArray2, arrSize);

    std::cout << "Original Array (unaffected by deep copy): ";
    printArray(originalArray, arrSize);

    // Free memory
    delete[] copiedArray2;
}
