#include <stdio.h>

int strlenght(char *str) {
  int len = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    len++;
  }
  return len;
}

int strcompare(char *str1, char *str2) {
  int compare = strcmp(str1, str2);
  return compare;
}

int strconcat(char *str1, char *str2) {
  char res = strcat(str1, str2);
  return res;
}

int main(void) {
  char str1, str2, command;

  gets(command);
  if (strcmp(command, "strlenght") == 0) {
    printf("Enter the string: ");
    gets(str1);
    strlenght(str1);
  } else if (strcmp(command, "strcompare") == 0) {
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    strcompare(str1, str2);
  } else if (strcmp(command, "strconcat") == 0) {
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    strconcat(str1, str2);
  }

  return 0;
}