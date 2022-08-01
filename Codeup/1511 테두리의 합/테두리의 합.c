#include <stdio.h>

int main()
{	
	int i,j;
	int n, cnt = 0, sum = 0;
	int arr[101][101] = {0,};
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cnt++;
			arr[i][j] = cnt;
		}
	}
	
	for(i=0; i<n; i++){
		sum += arr[0][i];
	}
	
	for(j=1; j<n; j++){
		sum += arr[j][n-1];
	}
	
	for(i=n-2; i>=0; i--){
		sum += arr[n-1][i];
	}
	
	for(j=n-2; j>0; j--){
		sum += arr[j][0];
	}
	
	printf("%d",sum);
	
	return 0;
}