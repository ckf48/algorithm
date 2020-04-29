//
// Created by ckf48 on 2020/4/29.
//

#ifndef ALGORITHM_SELECTIONSORT_H
#define ALGORITHM_SELECTIONSORT_H

#include <algorithm>

using namespace std;

template<typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            swap(arr[i], arr[minIndex]);
        }
    }
}

#endif //ALGORITHM_SELECTIONSORT_H
