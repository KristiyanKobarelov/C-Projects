#include <stdio.h>

#define Define for(int i = 0; i < 5; i++) { printf("\nEnter an element: "); scanf("%d", &array[i]); }
#define Print for(int i = 0; i < 5; i++) printf("%d\n", array[i]);

int main(void)
{
    int array [5];
    Define
    Print

    return 0;
}
