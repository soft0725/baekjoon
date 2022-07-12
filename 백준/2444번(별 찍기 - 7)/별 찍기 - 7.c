#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<n; i++){
        for(int j=n; j>i; j--){
            printf(" ");
        }
        for(int k=0; k<i*2-1; k++){
        	printf("*");
		}
        printf("\n");
    }
    
    for(int i=n; i>=0; i--){
        for(int j=n; j>i; j--){
            printf(" ");
        }
        for(int k=0; k<i*2-1; k++){
        	printf("*");
		}
        printf("\n");
    }
    
    return 0;
}