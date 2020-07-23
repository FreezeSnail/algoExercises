#include <stdio.h>
#include "sorter.h"


static void printArr(int *arr, int length){
    printf("[ ");
    for(int i = 0; i < length; i++)
        printf("%d, ", arr[i]);
    printf("]\n");
}
int main(){

    int  arr[] = { 1, 6, 8, 3, 4, 9};
    Sorter sortTool(arr, 6);
    printArr(arr, sortTool.getLength());

    // this bleads mem
    printArr(sortTool.insertionSort(), sortTool.getLength());
    printArr(sortTool.insertionSortDecrease(), sortTool.getLength());
    printArr(sortTool.mergeSort(), sortTool.getLength());
    printArr(sortTool.getArr(), sortTool.getLength());

    return 0;
}