#include <stdio.h>

int main()
{
	
	int arr[101] = {0};
	int n;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	
	for(int j=0; j<n; j+=2){
		arr[j] > arr[j+1] ? printf("%d ",arr[j+1]) : printf("%d ",arr[j]);
	}
	
	
	return 0;
}
