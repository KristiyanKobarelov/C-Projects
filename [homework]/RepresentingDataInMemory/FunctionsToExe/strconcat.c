#include <stdio.h>
#include <strings.h>

int strconcat(char *str1, char *str2) {
  char res = strcat(str1, str2);
  return res;
}

int main(void) {
  char str1, str2;
  printf("Enter String 1: ");
  gets(str1);
  printf("\nEnter string 2: ");
  gets(str2);

  printf("The concatenated string is: %d", strconcat(str1, str2));
}
}