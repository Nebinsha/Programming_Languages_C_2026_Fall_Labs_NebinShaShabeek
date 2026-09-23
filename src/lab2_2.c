#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  long long f = 1;  // from 1
  for (int i = 1; i <= n; i++) {
    f *= i;  // to multiply
  }
  return f;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  // TODO: validate input, call function, print result
  if (n < 0) {
    printf("error: n can't be -ve.\n");
    return 0;
  }
  long long ans = factorial(n);
  printf("%d! =%lld\n", n, ans);
  return 0;
}
