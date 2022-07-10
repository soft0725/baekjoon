#include <stdio.h>

int main()
{
    int a,b,n,temp;

    scanf("%d",&n);
    for(int i=0; i<n; i++)
	{
        scanf("%d %d",&a,&b);
     	temp = a;
		for(int j=0; j<b - 1; j++)
		{
     		temp = temp * a % 10;
		}
		printf("%d\n",temp%10);   
    }

    return 0;
}