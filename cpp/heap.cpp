#include "heap.h"
#include "stdio.h"


//parent(i) flr(i/2)
//left(i) 2i
//right(i) 2i+1
//in a max heap a[parent(i)] >= a[i]

static int parent(int i){ return i/2;}
static int left(int i){ return 2*i;}
static int right(int i){ return 2*i + 1;}


void maxHeap::maxHeapify(int i){
    //assume the children of i are heaps, but arr[i] may be out of place

    int l = left(i);
    int r = right(i);
    int largest;

    if(l <= this.length && this->arr[l] > this->arr[i]){
        largest = l;
    }else{
        largest = i;
    }

    if( r <= this.length && this->arr[r] > this->arr[largest]){
        largest = r;
    }

    if(largest != i){
        int tmp = this->arr[i];
        this->arr[i] = this->arr[largest];
        this->arr[largest] = tmp;
        this.maxHeapify(largest);
    }
}

void maxHeap::printHeap(){
     int count = 0;
     int level = 1;

     for(int i = 1; i <= this->length; i++){
        printf("%d ", this->arr[i-1]);
        count++;
        if(count == level){
            level = level *2;
            count = 1;
            printf("\n");
        }
    }
}

