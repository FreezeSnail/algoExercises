#pragma once

class Sorter {
    private:
        int * array;
        int length;

        void mergeSort(int * arr, int l,  int r);
        void merge(int* array, int l, int m, int r);

    public:

        Sorter(int * arr, int len): array(arr), length(len){}

        int * insertionSort();
        int * insertionSortDecrease();

        int getLength();
        int * getArr();

        int * mergeSort();
        
};