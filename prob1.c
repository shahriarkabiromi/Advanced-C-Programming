#include <stdio.h>

void copy_array(int source_array[], int destination_array[], int size) {
  for (int i = 0; i < size; i++) {
    destination_array[i] = source_array[i];
  }
}

int main() {
  int source_array[10];
  int destination_array[10];

  for (int i = 0; i < 10; i++) {
    source_array[i] = i + 1;
  }

  copy_array(source_array, destination_array, 10);

  for (int i = 0; i < 10; i++) {
    printf("%d ", destination_array[i]);
  }

  printf("\n");

  return 0;
}
