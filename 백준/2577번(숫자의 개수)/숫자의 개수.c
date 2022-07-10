#include <stdio.h>

int main(){
	
	int a,b,c;
	int sum = 1,cnt = 0;
	int arr[10] = {0,};
	int temp[10] = {0,};
	
	scanf("%d %d %d",&a,&b,&c);
	sum = sum * a * b * c;
	
	while(sum != 0){
		arr[cnt++] = sum % 10;
		sum /= 10;
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<cnt; j++){
			if(arr[j] == i){
				temp[i] += 1;
			}
		}
	}
	
	for(int i=0; i<10; i++) printf("%d\n",temp[i]);
	
	return 0;
}