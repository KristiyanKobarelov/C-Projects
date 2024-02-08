#include <stdio.h>

#define SQUARE(A, B) (A)*(A) + 2*(A)*(B) + (B)*(B)

int main(void)
{
    int a, b, n;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    n = SQUARE(a, b);

    return 0;
}
