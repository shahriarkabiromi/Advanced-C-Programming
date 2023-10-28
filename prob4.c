#include <stdio.h>

void add_consecutive_elements(int array[], int summation_array[], int size) {
  int i;

  for (i = 0; i < size - 1; i++) {
    summation_array[i] = array[i] + array[i + 1];
  }
}

int main() {
  int array[] = {2, 3, 8, 1, 9, 2};
  int summation_array[sizeof(array) / sizeof(array[0]) - 1];

  add_consecutive_elements(array, summation_array, sizeof(array) / sizeof(array[0]));

  printf("The summation array is: ");
  for (int i = 0; i < sizeof(summation_array) / sizeof(summation_array[0]); i++) {
    printf("%d ", summation_array[i]);
  }

  printf("\n");

  return 0;
}
