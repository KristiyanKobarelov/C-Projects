#include <stdio.h>
#define n 10

void main()
{
    float a[10], avg=0, raz[10];
    int i;
    for(i=0; i<n; i++)
        {
            printf("\nDay %d= ", i+1);
            scanf("%f", &a[i]);
        }
    for(i=0; i<n; i++)
        avg+= a[i];
    avg = avg/n;
    printf("\nThe average temperature is %.2f", avg);
    for(i=0; i<n; i++)
    {
        if(a[i]>avg) raz[i]=a[i]-avg;
        else if(a[i]<avg) raz[i]=avg-a[i];
        else raz[i]=0;
    }
    for(i=0; i<n; i++)
    printf("\nThe difference is %.2f", raz[i]);
}
