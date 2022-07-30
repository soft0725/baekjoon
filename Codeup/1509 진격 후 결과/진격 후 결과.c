#include <stdio.h>

#define n 10

int main()
{
	
	int arr[n][n];
	int mal[n] = {0,};
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0; i<n; i++) scanf("%d",&mal[i]);
	
	for(int i=0; i<n; i++){
		int sw = 0;
		int cnt = 0;
		if(mal[i] == 1){
			for(int j=n-1; j>=0; j--){
				if(arr[j][i] != 0){
					if(arr[j][i] < 0){
						printf("%d fall\n",i+1);
						break;
					}
					else{
						printf("%d crash\n",i+1);
						break;
					}
				}
				else cnt += 1;
			}
			if(cnt == 10) printf("%d safe\n",i+1);
		}
	}
	
	return 0;
}