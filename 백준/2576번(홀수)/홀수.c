#include <stdio.h>
 
int main() {
 
    int n;
    int sum=0;
	int min=100;
    
	for(int i=0; i<7; i++){
        scanf("%d",&n);
		if(n%2==1){
        sum+=n;
        if(n<min) min=n;
        }
    }
    
    sum == 0 ? printf("-1") : printf("%d %d",sum,min);
    
    return 0;
}
