#include <stdio.h>
#include <string.h>

int main()
{
	
	char str[1000001];
	int len;
	int cnt = 0;
	
	scanf("%[^\n]s", str);
	len = strlen(str);
	
	for(int i=0; i<len; i++){
		if(str[i] == ' '){
			if(i!=0 && i!=len-1) cnt++;
			if(len == 1) cnt = -1;
		}
	}
	
	printf("%d",cnt + 1);
	
	return 0;
}