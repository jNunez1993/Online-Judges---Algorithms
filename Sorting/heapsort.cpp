#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

void heapSort(int*, int);
void buildHeap(int*, int);
void heapifyUp(int*, int);
void heapifyDown(int*, int);
void swap(int*, int, int);
bool hasParent(int);
int getParentIndex(int);
int getLeftChildIndex(int);
int getRightChildIndex(int);
bool hasLeftChildIndex(int, int);
bool hasRightChildIndex(int, int);
void printArr(int*, int);

void heapSort(int arr[], int n) {
    for (int i = n-1; i >= 0; i--) {
        swap(arr, 0, i);
        heapifyDown(arr, i-1);
    }
}

void buildHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        heapifyUp(arr, i);
    }
}

void heapifyUp(int arr[], int index) {
    while (hasParent(index) && arr[getParentIndex(index)] < arr[index]) {
        swap(arr, getParentIndex(index), index);
        index = getParentIndex(index);
    }
}

void heapifyDown(int arr[], int n) {
    int index = 0;
    n = n-1;
    while (hasLeftChildIndex(index, n)) {
        int biggerChildIndex = getLeftChildIndex(index);
        if (hasRightChildIndex(index, n) && arr[getRightChildIndex(index)] > arr[biggerChildIndex]) {
            biggerChildIndex = getRightChildIndex(index);
        }

        if (arr[index] > arr[biggerChildIndex]) {
            break;
        } else {
            swap(arr, index, biggerChildIndex);
        }
        index = biggerChildIndex;
    }
}

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

bool hasParent(int index) {
    return index != 0;
}

int getParentIndex(int index) {
    return (index - 1) / 2;
}

int getLeftChildIndex(int index) {
    return index * 2 + 1;
}

int getRightChildIndex(int index) {
    return index * 2 + 2;
}

bool hasLeftChildIndex(int index, int n) {
    return getLeftChildIndex(index) <= n;
}

bool hasRightChildIndex(int index, int n) {
    return getRightChildIndex(index) <= n;
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }
}

int main() {
    //int arr[8] = {4, 5, 3, 23, 8, 12, 15, 21};
    int arr[146]= {932,66,777,426,127,404,63,281,426,317,735,628,543,78,31,811,626,104,389,412,687,296,35,252,441,675,604,770,342,284,917,274,702,46,53,829,450,116,463,229,786,198,857,329,276,888,140,254,992,530,18,31,178,405,284,619,80,240,742,423,876,659,49,931,57,102,760,859,571,575,88,357,773,945,38,401,186,531,655,530,413,673,562,591,79,198,563,159,790,305,582,666,316,984,597,373,86,710,584,9,285,673,718,411,970,757,812,508,288,468,39,701,493,953,644,924,151,559,84,293,864,18,959,532,2,909,257,441,619,842,802,256,515,521,667,837,630,832,346,918,652,385,971,145,690,967};
    int n = sizeof(arr)/sizeof(int);
    buildHeap(arr, n);
    heapSort(arr, n);
    printArr(arr, n);
}
