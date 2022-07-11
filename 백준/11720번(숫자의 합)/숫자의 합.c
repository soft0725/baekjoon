#include <stdio.h>

int main()
{
	char str[101];
	int n,sum = 0;
	
	scanf("%d",&n);
	scanf("%s",str);
	
	for(int i=0; i<n; i++){
		sum += str[i] - '0';
	}
	
	printf("%d",sum);
	
	return 0;
}
 