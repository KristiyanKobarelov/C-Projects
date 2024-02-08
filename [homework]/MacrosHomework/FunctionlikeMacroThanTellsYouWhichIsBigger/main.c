#include <stdio.h>

#define Compare(A, X) if (A > X) printf("X is bigger than Y"); \
else if (A < X) printf("Y is bigger than X"); \
else if (A == X) printf("X is equal to Y");

int main(void)
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("\nEnter y: ");
    scanf("%d", &y);
    printf("\n");

    Compare(x, y);

    return 0;
}
