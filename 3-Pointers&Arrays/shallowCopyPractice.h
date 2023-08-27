/*
   This C++ code demonstrates the concept of shallow copying an array using two different functions:
   - `shallowCopy_1` assigns the input array directly to the output pointer.
   - `shallowCopy_2` assigns the input array through a double pointer.

   It also illustrates the impact of modifying one of the shallow copies on the original array
   and the other copy. Remember that shallow copies share the same underlying data, so
   modifications to one copy affect all other copies.
*/


// shallowCopy_1 and shallowCopy_2 create a shallow copy of the input array
void shallowCopy_1( double* arr, const int arrSize, double*& output )
{
    output = arr;
}
void shallowCopy_2( double* arr, const int arrSize, double** output )
{
    *output = arr;
}

void printArr(const double* arr, const int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


void runShallowCopy() {
    const int arrSize = 5;
    double* originalArray = new double[arrSize];

    // Initialize the originalArray with some values
    for (int i = 0; i < arrSize; i++) {
        originalArray[i] = static_cast<double>(i + 1) * 1.1;
    }

    double* copiedArray1 = nullptr;
    double* copiedArray2 = nullptr;

    // Create shallow copies
    shallowCopy_1(originalArray, arrSize, copiedArray1);
    shallowCopy_2(originalArray, arrSize, &copiedArray2);

    std::cout << "Original Array: ";
    printArr(originalArray, arrSize);

    std::cout << "Shallow Copy 1: ";
    printArr(copiedArray1, arrSize);

    std::cout << "Shallow Copy 2: ";
    printArr(copiedArray2, arrSize);

    // Modify the first element of one of the copies
    copiedArray1[0] = 99.9;

    std::cout << "Modified Shallow Copy 1: ";
    printArr(copiedArray1, arrSize);

    std::cout << "Unmodified Shallow Copy 2: ";
    printArr(copiedArray2, arrSize);

    std::cout << "Original Array (affected by shallow copy): ";
    printArr(originalArray, arrSize);

    // Clean up memory
    delete[] originalArray;
}

