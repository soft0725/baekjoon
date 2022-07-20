#include <stdio.h>

void print_num(int n,int arr[])
{
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j] < arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	
	for(int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
}

int main()
{
	
	int n;
	int arr[100000] = {0,};
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	print_num(n,arr);
	
	return 0;
}