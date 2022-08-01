#include <stdio.h>

int main()
{
	int arr[101][101] = {0,};
	int num,len;
	int x = -1,y = 0;
	int cnt = 1;
	int f = 1;
	
	scanf("%d",&num);
	len = num;
	
	while(len > 0){
		for(int i=0; i<len; i++){
			x += f;
			arr[x][y] = cnt++;
		}
		len--;
		for(int i=0; i<len; i++){
			y += f;
			arr[x][y] = cnt++;
		}
		f *= -1;
	}
	
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}