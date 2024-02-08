#include <stdio.h>
#include <string.h>

#include "transformation.h"

void transform(char *str) {
  struct transformation transformed;
  int check = 1;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] < '0' && str[i] > '9') {
      transformed.result = 0;
      strcpy(transformed.error, "Wrong string input");
      check = 0;
      break;
    }
  }
  if (check == 1) {
    int tr;
    for (int i = 0; str[i] != '\0'; i++) {
      tr = tr * 10 + (str[i] - '0');
    }
    transformed.result = tr;
    strcpy(transformed.error, '\0');
    printf("%d\n", transformed.result);
  }
}