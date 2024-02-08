#include <stdio.h>

#define STEPEN(A, B) (A + B) * (A + B);

int main(void) {
  int a = 1, b = 2, result;

  result = STEPEN(a, b);

  return 0;
}