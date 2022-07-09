#include <stdio.h>
#include <string.h>

int main()
{
	
	char *color[11] = {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
	char str[3][20] = {0,};
	
	long long int val[10] = {0,1,2,3,4,5,6,7,8,9};
	long long int gob[10] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
	long long int sum = 0,temp;
	
	scanf("%s %s %s",str[0],str[1],str[2]);
	
	for(int i=0; i<10; i++){
		if(strcmp(str[0],color[i]) == 0){
			sum = sum + (val[i]*10);
		}
		if(strcmp(str[1],color[i]) == 0){
			sum = sum + val[i];
		}
		if(strcmp(str[2],color[i]) == 0){
			temp = gob[i];
		}
	}
	
	printf("%lld",sum*temp);
	
	return 0;
}