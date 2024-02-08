#include "quadraticroots.h"
#include <stdio.h>

int main() {
  QuadraticRootsResult result1 = findroots(1, -3, 2);
  QuadraticRootsResult result2 =
      findroots(1.0f, -3.0f, 2.0f);
  QuadraticRootsResult result3 = findroots(1.0, -3.0, 2.0);
  if (!result1.norealroots) {
    printf("x1 = %f, x2 = %f\n", result1.x1, result1.x2);
  } else {
    printf("No real roots\n");
  }

  if (!result2.norealroots) {
    printf("x1 = %f, x2 = %f\n", result2.x1, result2.x2);
  } else {
    printf("No real roots\n");
  }

  if (!result3.norealroots) {
    printf("x1 = %f, x2 = %f\n", result3.x1, result3.x2);
  } else {
    printf("No real roots\n");
  }

  return 0;
}