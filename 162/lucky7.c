#include <stdio.h>
#include <stdlib.h>

int main(){

    int N;
    char s[4];

    scanf("%d",&N);
    s[3] = '\0';
    sprintf(s,"%d", N);

    int judge = 0;
    int i;

    for(i = 0; i < 3; i++){
        if(s[i] == '7'){
            judge = 1;
        }
    }

    if(judge == 0){
        printf("No");
    }else{
        printf("Yes");
    }

    return 0;
}