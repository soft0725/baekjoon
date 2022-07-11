#include <stdio.h>
#include <string.h>

int main()
{
	
	char str[101];
	int arr[26] = {0,};
	int cnt = 0;
		
	scanf("%s",str);
	
	for(int i='a'; i<='z'; i++)
	{
		int j = 0;
		while(str[j] != 0)
		{
			if(str[j] == (char)i) break;
			j++;
 		}
 		if(str[j] == (char)i) printf("%d ",j);
 		else printf("-1 ");
	}
	
	return 0;
}