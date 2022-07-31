#include <stdio.h>

int main()
{
	
	int arr[101] = {0};
	int k,n;
	int s,e,u;
	int sum = 0;
	
	scanf("%d %d",&k,&n);
	
	for(int i=0; i<n; i++){
		scanf("%d %d %d",&s,&e,&u);
		arr[s] = arr[s] + u;
		arr[e+1] = arr[e+1]-u;
	}

	for(int i=1; i<=k; i++) printf("%d ",arr[i]);
	printf("\n");
	
	for(int i=1; i<=k; i++){
		sum += arr[i];
		printf("%d ",sum);
	}
	
	return 0;
}