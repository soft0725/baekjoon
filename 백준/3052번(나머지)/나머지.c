#include <stdio.h>

#define n 10

int main()
{   

    int num;
    int cnt = 0;
    int sum = 0;
    int arr[n] = {0,};

    for(int i=0; i<n; i++){
        scanf("%d",&num);
        arr[i] = num % 42;
    }

    for(int i=0; i<n; i++){
    	cnt = 0;
        for(int j=i+1; j<n; j++){
        	if(arr[i] == arr[j]) cnt += 1;
		}
		if(cnt == 0) sum+=1;
    }
    
    printf("%d",sum);

    return 0;
}