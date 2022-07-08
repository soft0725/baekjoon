#include <stdio.h>

int main()
{
    int dice1,dice2,dice3;
    int prize = 0;
    int max;

    scanf("%d %d %d",&dice1,&dice2,&dice3);

    max = (dice1 > dice2) ? ((dice1 > dice3) ? dice1 : dice3) : ((dice2 > dice3) ? dice2 : dice3);

    if((dice1 == dice2) && (dice2 == dice3) && (dice3 == dice1)){
        prize = 10000 + ((dice1) * 1000);
    }
    else if((dice1 == dice2) && (dice1 != dice3)){
        prize = 1000 + ((dice1) * 100);
    }
    else if((dice2 == dice3) && (dice2 != dice1)){
        prize = 1000 + ((dice2) * 100);
    }
    else if((dice1 == dice3) && (dice3 != dice2)){
        prize = 1000 + ((dice3) * 100);
    }
    else{
        prize = max * 100 + prize;
    } 

    printf("%d",prize); 

    return 0;
}