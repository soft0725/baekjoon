#include <stdio.h>
#include <string.h>

int main()
{
	
	int len;
	scanf("%d",&len);
	 
	for(int i=0; i<len; i++){
		char str[21];
		int num;
		scanf("%d %s",&num,str);
		for(int j=0; j<strlen(str); j++){
			for(int k=0; k<num; k++){
				printf("%c",str[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}