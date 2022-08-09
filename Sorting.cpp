#include "Sorting.h"
#include <iostream>

void Sorting::swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Sorting::selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}

void Sorting::bubbleSort(int array[], int size){
    for (int step = 0; step < size; ++step) {
        for (int i = 0; i < size - step; ++i) {
            if (array[i] > array[i + 1]) {

                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void Sorting::insertionSort(int array[], int size){
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;
        
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void Sorting::printArray(int array[], int size){
        int i;
        for (i = 0; i < size; i++)
            std::cout << array[i] << " ";
        std::cout << std::endl;
}
