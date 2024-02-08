#include <stdio.h>

int strlenght(char *str) {
  int len = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    len++;
  }
  return len;
}

int main(void) {
  char str;
  printf("Enter the string: ");
  gets(str);

  printf("The length of the string is: %d", strlenght(str));
}