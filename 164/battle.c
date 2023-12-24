#include <stdio.h>
#include <stdlib.h>


int main(){

    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int turn = 0;
    while((a>0)&&(c>0)){
        if(turn % 2 ==0){
            c -= b;
        }else{
            a -= d;
        }
        turn += 1;
    }
    if(a <= 0){
        printf("No");
    }else{
        printf("Yes");
    }

    return 0;
}