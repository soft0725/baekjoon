#include <stdio.h>
#include <math.h>

#define n 3
#define ten 10

int Rev(int num)
{
	int arr[n] = {0,};
	int sum = 0;
	int cnt = n-1;
	int i = 0;
	
	while(num != 0){
		int temp = pow(ten,cnt--);
		arr[i] = num % ten;
		num /= ten;
		sum += (temp * arr[i]);
		i++;
	}
	
	return sum;
}

int main()
{
	
	int a,b;
	
	scanf("%d %d",&a,&b);

	int result_a = Rev(a);
	int result_b = Rev(b);
	
	printf("%d", result_a > result_b ? result_a : result_b);
	
	return 0;
}