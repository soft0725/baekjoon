#include <stdio.h>

int main(){
	
	int n,num;
	int max = -1000001,low = 1000000;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%d",&num);
		if(max < num) max = num;
		if(low > num) low = num;
	}
	
	printf("%d %d",low,max);
	
	return 0;
}