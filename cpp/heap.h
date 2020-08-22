#pragma once
/*
*   given height n, the heap ranges from 2^h to 2^(h+1) -1 elements
*
*
*
*/
class maxHeap{
    public: 
        int * arr;
        int length;

        void maxHeapify(int index);   //O(lg n)
        void buildMaxHeap(); //O(n)
        void heapSort();     //O(n lg n)

        void printHeap();
};