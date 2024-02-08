#include <stdio.h>

#define ARRAY_SIZE

int masiv(int a[], int n);

int main()
{
    int a;

    printf("The amount of elements you want to use:");
    scanf("%d",&a);

    if (a>20||a<0)
    {
        printf("Sorry, we can not do this");
    }
    else
    {
    #ifdef ARRAY_SIZE
    int arr[a];
    masiv(arr,a);
    #endif
    }
    return 0;
}
    masiv(int a[], int n){
       // printf("hello");
       int sum = 0;
       for(int i = 0; i <= n - 1; i++){
        for(int j = 0; j <= i; j++){
            sum = sum * 2;
        }
          printf ("%d \n",sum);
          sum = 1;
       }
    }
