#include <stdio.h>

int main()
{
	
	int d[1001][1001] = {0};
	int n,m,k,u;
	int x1,x2,y1,y2;
	
	scanf("%d %d %d",&n,&m,&k);
	
	for(int i=0; i<k; i++){
		scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&u);
			
		d[x1][y1] = d[x1][y1]+u;
		d[x2+1][y2+1] = d[x2+1][y2+1]+u;
		d[x1][y2+1] = d[x1][y2+1]-u;
		d[x2+1][y1] = d[x2+1][y1]-u;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += d[i][j];
            d[i][j] = sum;
 
        }
        sum = 0;
        
    }
    
    sum = 0;
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            sum += d[i][j];
            d[i][j] = sum;
        }
        sum = 0;
    }
	
	printf("\n");
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}