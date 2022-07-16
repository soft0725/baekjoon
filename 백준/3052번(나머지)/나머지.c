#include <stdio.h>

#define n 10

int main()
{   

    int num;
    int arr[n] = {0,};

    for(int i=0; i<n; i++){
        scanf("%d",&num);
        arr[i] = num % 42;
    }

    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}