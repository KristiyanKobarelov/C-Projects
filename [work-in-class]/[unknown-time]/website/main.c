#include <stdio.h>
#include <string.h>

void main()
{
    char c[20];
    int i, n;
    printf("How many items did you want to buy: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nDid you choose something from the dumbells selection? ");
        gets(c);
        if(c[20]='yes') printf("\nOk");
        else printf("\nNo");
    }
}
