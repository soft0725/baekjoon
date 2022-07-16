#include <stdio.h>
#include <math.h>

int Rev(int num,int arr[]){
	
	int temp;
	int sum = 0;
	int i = 0;
	int j = 0;
	int cnt = 0;
	
	while(num != 0){
		arr[i] = num % 10;
		num /= 10;
		cnt++,i++;
	}
	
	for(int i=cnt-1; i>=0; i--){
		temp = pow(10,i);
		arr[j] = arr[j] * temp;
		sum += arr[j];
		j++;
	}
	
	return sum;
}

int main()
{	
	
	int arr[4] = {0,};
	int a,b;
	int result_a, result_b;
	int sum = 0;
	
	scanf("%d %d",&a,&b);
	
	result_a = Rev(a,arr);
	result_b = Rev(b,arr);
	
	sum += result_a + result_b;
	
	sum = Rev(sum,arr);
	printf("%d",sum);
	
	return 0;
}