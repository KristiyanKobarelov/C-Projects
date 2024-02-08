#include <stdio.h>
#define number 100

void main() {
    int masiv [number];
    int result = 0, n;
    printf ("Enter the amount of elements you will use: ");
    scanf ("%d", &n);
    for (int m = 0; m< n; m++){
        printf ("\nEnter an element: ");
        scanf ("%d", &masiv [m]);
    }
    for (int i = 0; i < n; i++){
    int d = 1;
        do {
            d++;
        } while (masiv[i] % d != 0);
        if (n != d) result += masiv [i];
    }
    printf ("\nThe result is %d", result);
}
