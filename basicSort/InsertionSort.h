//
// Created by ckf48 on 2020/5/9.
//

#ifndef ALGORITHM_INSERTIONSORT_H
#define ALGORITHM_INSERTIONSORT_H

#include <algorithm>

using namespace std;

template<typename T>
void insertionSort(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            } else {
                break;
            }
        }
    }
}

template<typename T>
void insertionSort2(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        T e = arr[i];
        int j;
        for (j = i; j > 0; j--) {
            if (e < arr[j - 1]) {
                arr[j] = arr[j - 1];
            }
        }
        arr[j] = e;
    }
}


#endif //ALGORITHM_INSERTIONSORT_H
