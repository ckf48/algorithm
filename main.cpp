
#include "basicSort/SelectionSort.h"
#include "SortTestHelper.h"
#include "basicSort/InsertionSort.h"

int main() {
    int n = 10000;
    int *a = SortTestHelper::generateRandomArray(n, 0, n);
    //selectionSort(a, n);
    //insertionSort(a, n);
    insertionSort2(a, n);
    SortTestHelper::printArray(a, n);
    delete[] a;
    return 0;
}
