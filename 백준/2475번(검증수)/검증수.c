#include <stdio.h>
#include <math.h>

int main()
{
	int num,temp;
	int sum = 0;
	
	for(int i=0; i<5; i++){
		scanf("%d",&num);
		temp = pow(num,2);
		sum += temp;
	}
	
	printf("%d",sum % 10);
	
	return 0;
}