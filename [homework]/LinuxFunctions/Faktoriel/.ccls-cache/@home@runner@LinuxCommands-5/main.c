#include <stdio.h>

#include "math.h"

int main(void) {
  int number, result;
  printf("Enter the number: ");
  scanf("%d", &number);

  printf("The result is: %d", faktor(number));

  return 0;
}