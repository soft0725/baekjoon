#include <stdio.h>
#include <string.h>

int arr[10000] = {0,};
int i = 0;

void push(int num)
{
	arr[i] = num;
	i++;
}

void pop()
{
	if(i == 0) printf("-1\n");
	else{
		i -= 1;
		printf("%d\n",arr[i]);
	}
}

void size()
{
	printf("%d\n",i);
}

void empty()
{
	if(i == 0) printf("1\n");
	else printf("0\n");
}

void top(){
	if(i == 0) printf("-1\n");
	else printf("%d\n",arr[i - 1]);
}

int main()
{
	char myans[7];
	int n,num;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%s",myans);
		if(strcmp(myans,"push") == 0){
			scanf("%d",&num);
			push(num);
		}
		else if(strcmp(myans,"pop") == 0){
			pop();
		}
		else if(strcmp(myans,"size") == 0){
			size();
		}
		else if(strcmp(myans,"empty") == 0){
			empty();
		}
		else{
			top();
		}
	}
	
	return 0;
}