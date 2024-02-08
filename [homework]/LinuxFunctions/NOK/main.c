#include <stdio.h>

int nod(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int nok(int a, int b) { return (a * b) / nod(a, b); }

int main() {
  int num1 = 12, num2 = 18;

  int result = nok(num1, num2);
  printf("The least common multiple is: %d\n", num1, num2, result);

  return 0;
}
