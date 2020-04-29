#include <iostream>
#include "basicSort/selectionSort.h"

int main() {
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(a, 10);
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
