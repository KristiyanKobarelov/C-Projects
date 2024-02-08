#include <stdio.h>
#include <string.h>

int strcompare(char *str1, char *str2) {
  int compare = strcmp(str1, str2);
  return compare;
}

int main(void) 
{
  char str1, str2;
  printf("Enter String 1: ");
  gets(str1);
  printf("\nEnter string 2: ");
  gets(str2);

  printf("\nThe comparison of the strings is: %d", strcompare(str1, str2));
}