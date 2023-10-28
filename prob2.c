#include <stdio.h>

void print_unique_elements(int array[], int size) {
  int i, j;
  int seen[size];

  for (i = 0; i < size; i++) {
    seen[i] = 0;
  }

  for (i = 0; i < size; i++) {
    if (seen[i] == 0) {
      seen[i] = 1;
      printf("%d ", array[i]);

      for (j = i + 1; j < size; j++) {
        if (array[i] == array[j]) {
          seen[j] = 1;
        }
      }
    }
  }

  printf("\n");
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  print_unique_elements(array, sizeof(array) / sizeof(array[0]));

  return 0;
}
