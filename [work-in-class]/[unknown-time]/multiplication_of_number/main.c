#include <stdio.h>

void main() {
    int number, m=1;

    do
    {
        printf ("Enter the number: ");
        scanf ("%d", &number);
    }while(number < 1);
    while(number > 0)
    {
        m = m *(number % 10);
        number /= 10;
    }
    printf("\nThe result of the digits is %d", m);


}
