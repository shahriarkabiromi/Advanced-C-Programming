#include <stdio.h>

int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  int length;

  printf("Enter the length of the Fibonacci series: ");
  scanf("%d", &length);

  printf("The Fibonacci series of length %d is:\n", length);
  for (int i = 0; i < length; i++) {
    printf("%d ", fibonacci(i));
  }

  printf("\n");

  return 0;
}
