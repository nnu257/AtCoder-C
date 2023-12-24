#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int n,k;
    scanf("%d %d",&n,&k);

    int judge = 0, i;
    for(i = 0; judge == 0; i++){
        if(n-pow(k,i) < 0){
            judge = 1;
        }
    }

    printf("%d",i-1);

    return 0;
}