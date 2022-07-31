#include <stdio.h>

int main()
{
	
	int n,m;
	//int temp = 0,sum = 0;
	int arr[101][101] = {0};
	int sum_arr[101][101] = {0};
	
	scanf("%d %d", &n,&m);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d",&arr[i][j]);	
		}
	}
	
	for(int i=0; i<n; i++){
		int temp = 0;
		int sum = 0;
		for(int j=0; j<m; j++){
			if(j==0 && i==0){
				temp = arr[i][j];
				sum_arr[i][j] = arr[i][j];
			}
			else{
				for(int k=i; k>=0; k--){
					temp = temp + arr[i-k][j];
				}
				sum = temp;
				sum_arr[i][j] = sum;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ",sum_arr[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}