#include <stdio.h>

#define n 8

int main()
{
	
	int arr[n] = {0,};
	int sw = 0;
	int cnt = 0;
	
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	
	if(arr[0] == 8){
		for(int i=0; i<n; i++){
			if(arr[i] == n-i) cnt += 1;
		}
		printf("%s", cnt == 8 ? "descending" : "mixed");
	}
	else if(arr[0] == 1){
		for(int i=0; i<n; i++){
			if(arr[i] == i+1) cnt += 1;
		}
		printf("%s", cnt == 8 ? "ascending" : "mixed");
	}
	else printf("mixed");
	
	return 0;
}