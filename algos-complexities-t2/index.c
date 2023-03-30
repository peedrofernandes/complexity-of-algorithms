#include <stdio.h>
#include <stdlib.h>
#include "algos.h"

void printVet(int *v, int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    printf("%d", v[i]);
    if (i != n - 1)
      printf(",");
  }
  printf("]\n");
}

int main() {
  int v[] = {1, 5, 32, 8, 5, 9, 2, 4, 10, 3};

  

  printVet(v, 10);
}