#include <stdio.h>

int main()
{
	int a,n;
	
	scanf("%d %d",&a,&n);
	
	for(int len=0; len<n; len++){
		for(int i=0; i<a; i++){
			for(int j=0; j<i; j++){
				printf(" ");
			}
			printf("*");
			printf("\n");
		}	
	
	for(int i=a-2; i>=0; i--){
		for(int j=0; j<i; j++){
			printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}
	
	return 0;
}