#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    double a, b;            //WA原因→13行め,aを確認するのが抜けていた,範囲を搾る際にaを使ったため？
    scanf("%lf %lf", &a, &b);

    int i, answer = 0;
        for(i = floor(a*100/7); i >= ceil(a*100/8); i--){
            if((floor(i*8/100)==a)&&(floor(i*10/100)==b)){
                answer = i;
            }
        }

    if(answer == 0){
        printf("-1");
    }else{
        printf("%d",answer);
    }
    return 0;
}