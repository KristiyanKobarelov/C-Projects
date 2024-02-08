#include <stdio.h>

#define Helper1(A) printf("\nThe name: %s", A);
#define Helper2(A) printf("\nThe value is: %d", A);\
printf("\nThe file is: %s", __FILE__);\
printf("\nThe line is: %d", __LINE__);

int main(void)
{
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);

    Helper1 ("value");
    Helper2 (value);

    return 0;
}
