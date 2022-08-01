#include <stdio.h>

int main()
{
	int n, j = 0;
	int arr[21][21] = {0,};
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++) scanf("%d",&arr[i][j]);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			if(j==0) printf("%d ",arr[i][j]);
			else{
				arr[i][j] = arr[i][j-1] - arr[i-1][j-1];
				printf("%d ",arr[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}