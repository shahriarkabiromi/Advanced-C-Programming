#include <stdio.h>

int find_the_sum(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + find_the_sum(n - 1);
  }
}

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  int sum = find_the_sum(n);

  printf("The sum of all the numbers from 1 to %d is %d.\n", n, sum);

  return 0;
}
