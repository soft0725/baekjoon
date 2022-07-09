#include <stdio.h>

int main()
{
	int cnt = 0;
	int num,temp;
		
	scanf("%d",&num);
	temp = num;
	
	while(1){
		num = (num/10+num%10)%10+num%10*10;
		cnt++; 
		if(temp == num){
			printf("%d",cnt);
			break;
		}
 	}
 	
	return 0;
}