#include <stdio.h>

#define len 9

int main()
{
	
	int n,where;
	int max = -1;
	int arr[len] = {0,};
	
	for(int i=0; i<len; i++){
		scanf("%d",&arr[i]);
		if(max < arr[i]){
			max = arr[i];
			where = i + 1;
		} 
	}	
	
	printf("%d\n",max);
	printf("%d",where);
	
	return 0;
}