#include "algos.h"

void insertionSort(int *v, int n) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && v[j - 1] > v[j]) {
      int aux = v[j];
      v[j] = v[j - 1];
      v[j - 1] = aux;
      j--;
    }
  }
}

void bubbleSort(int *v, int n) {
  for (int j = n - 1; j >= 0; j--) {
    for (int i = 0; i < j; i++) {
      if (v[i] > v[i + 1]) {
        int aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
      }
    }
  }
}

void quickSort(int *v, int n) {
  
}

void mergeSort(int *v, int n) {
  
}

void heapSort(int *v, int n) {
  
}

int linearSearch(int *v, int key, int n) {
  
}

int binarySearch(int *v, int key, int n) {
  
}