#include "sorter.h"

static int * copyArray(int * array, int length){
    int * arr;
    arr = new int[length];
    for(int i = 0; i < length; i++)
        arr[i] = array[i];

    return arr;
}

int Sorter::getLength(){ return this->length;}
int * Sorter::getArr(){ return this->array;}

int * Sorter::insertionSort(){
    int * arr;
    arr = copyArray(this->array, this->length);

    for( int i = 1; i < this->length; i++){
        int key  = arr[i];
        //instert arr[i] into the sorted sequence arr[0..i-1]
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    return arr;
}

int * Sorter::insertionSortDecrease(){
    int * arr;
    arr = copyArray(this->array, this->length);

    for( int i = 1; i < this->length; i++){
        int key  = arr[i];
        //instert arr[i] into the sorted sequence arr[0..i-1]
        int j = i - 1;
        while(j >= 0 && arr[j] < key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    return arr;
}

int * Sorter::mergeSort(){
    int * arr;
    arr = copyArray(this->array, this->length);

    mergeSort(arr, 0, this->length-1);
    return arr;
    
}

void Sorter::mergeSort(int * arr, int l,  int r){
    if(l < r){
        int m = l + (r-l) /2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }

}

void Sorter::merge(int* array, int l, int m, int r){
    // sizes for the two split arrays
    int nL = m - l + 1;
    int nR = r - m;

    int leftArr[nL], rightArr[nR];

    //coppy contents into new arrays
    for(int i = 0; i < nL; i++)
        leftArr[i] = array[l+i];

    for(int i = 0; i < nL; i++)
        rightArr[i] = array[m+i+1];

    int i = 0;
    int j = 0;
    int k = l;
    while(i < nL && j < nR){
        if(leftArr[i] <= rightArr[j]){
            array[k] = leftArr[i];
            i++;
        }
        else {
            array[k] = rightArr[j];
            j++;
        }
        k++;
    }
    // copy any left over values

    while( i < nL){
        array[k] = leftArr[i];
            i++;
            k++;
    }
    while( j < nR){
        array[k] = rightArr[j];
            j++;
            k++;
    }
    
}