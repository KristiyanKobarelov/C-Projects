#include <math.h>
#include <stdio.h>

int main(void) {
  long numbers[100], n;
  do {
    printf("Enter the amount of numbers you will use: ");
    scanf("%d", &n);
  } while (n < 1 || n > 100);

  for (int i = 0; i < n; i++) {
    printf("Enter a number: ");
    scanf("%d", &numbers[i]);
  }
  for (int i = 0; i < n; i++) {
    pow(numbers[i], 4);
  }

  return 0;
}