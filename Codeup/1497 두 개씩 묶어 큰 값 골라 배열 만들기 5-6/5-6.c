#include <stdio.h>

int main()
{
	
	int n;
	int arr[101] = {0,};
	
	scanf("%d",&n);
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	
	for(int i=0; i<n; i+=2){
		arr[i] > arr[i+1] ? printf("%d ",arr[i]) : printf("%d ",arr[i+1]);
	}
	
	return 0;
}
