#include <stdio.h>

void insert_element_at_last(int array[], int element, int size) {
  array[size - 1] = element;
}

int main() {
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int element = 10;

  insert_element_at_last(array, element, sizeof(array) / sizeof(array[0]));

  printf("The array after inserting the element at the last is: ");
  for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}
