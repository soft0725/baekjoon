// 자리 뽑기 프로그램 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

#define N 100
#define wait 9

void get_random_num(int len,int arr[]);

void wait_time(char *waiting);

void print_result(int len,int arr[],int x);

int main()
{   

    char waiting[] = "waiting ....";
    char myans[4];

    int x,y;
    int stu_num;
    int stu_arr[N] = {0,};

    printf("학생 수를 입력해 주세요.\n : ");
    scanf("%d",&stu_num);
    stu_arr[stu_num];

    printf("가로줄과 세로줄을 적어주세요.\n : ");
    scanf("%d %d",&x,&y);

    fin :

    get_random_num(stu_num,stu_arr);

    wait_time(waiting);

    print_result(stu_num,stu_arr,x);

    printf("다시 뽑으시겠습니까?  (yes/no)\n : ");
    scanf("%s",myans);

    if(strcmp(myans,"yes") == 0){
        goto fin;
    }
    else{
        system("cls");
        printf("최종결과\n-----------------\n");
        print_result(stu_num,stu_arr,x);
        return 0;
    }

    return 0;
}

void get_random_num(int len,int arr[])
{
    
    srand(time(NULL));
    for(int i=1; i<=len; i++){
        arr[i] = rand() % len + 1;
        for(int j=0; j<i; j++){
            if(arr[i] == arr[j]){
                i--;
                break;
            }
        }
    }
}

void wait_time(char *waiting)
{
    
    system("cls");

    for(int i=0; i<14; i++){
        Sleep(200);
        printf("%c",waiting[i]);
    }

    system("cls");
}

void print_result(int len,int arr[],int x){
    for(int i=1; i<=len; i++){
        printf("%d ",arr[i]);
        if(i % x == 0) printf("\n");
    }
}