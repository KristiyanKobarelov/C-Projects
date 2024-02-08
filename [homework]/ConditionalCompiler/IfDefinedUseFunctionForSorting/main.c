#include <stdio.h>

#define DEBUG
#define SIZE 100

void sort(int n, int* a)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
            {
                if(a[j] >= a[j+1])
                {
                    int c = a[j];
                    a[j] = a[j+1];
                    a[j+1] = c;
                }
            }

    }
}

void SUM(int* a, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        printf("\n%d", &a[i]);
        if(i % 3 == 0)
            sum += a[i];
    }
    printf("\n\n%d", sum);
}


int main(void)
{
    int n;
    do
    {
        printf("Enter the amount of elements you will use: ");
        scanf("%d", &n);
    } while(n < 0 && n > SIZE);
    printf("\n");
    int a[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &a[i]);
    }
    sort(n, a);
    printf("\n");

    #ifdef DEBUG
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    SUM(a, n);
    #else
    printf("\nNuh uh");
    #endif

    return 0;
}
