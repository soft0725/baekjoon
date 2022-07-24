#include <stdio.h>
#include <string.h>

int main()
{
	char str[81];
	int n;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%s",str);
		int len = strlen(str);
		int sum = 0;
		int cnt = 0;
		for(int j=0; j<len; j++){
			if(str[j] == 'O'){
				sum += 1 + cnt;
				cnt++;
			}
			else{
				cnt = 0;
			}
		}
		printf("%d\n",sum);
	}
	
	return 0;
}