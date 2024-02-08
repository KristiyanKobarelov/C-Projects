#include <stdio.h>
#include <string.h>

#include "transformation.h"

int main(void) {
  char str[100];

  gets(str);
  transform(str);

  return 0;
}