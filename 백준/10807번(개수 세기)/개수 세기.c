#include <stdio.h>

int main()
{
	
	int arr[100] = {0,};
	int n,find;
	int cnt = 0;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&find);
	
	for(int i=0; i<n; i++){
		if(find == arr[i]) cnt++;
	}
	
	printf("%d",cnt);
	
	return 0;  
}