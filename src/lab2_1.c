#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
  int sum = 0;  // initial 0 for loop
  for (int i = 1; i <= n; i++) {
    sum += i;  // adding
  }

  return sum;  // placeholder
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);

  // TODO: validate input, call function, and print result
  if (n < 1) {
    printf("error : n must be +ve.\n");
    return 0;
  }
  int result = sum_to_n(n);  // for calling
  printf("sum from 1 to %d is %d\n", n, result);

  return 0;
}
