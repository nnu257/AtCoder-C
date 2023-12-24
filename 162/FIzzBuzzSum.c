#include <stdio.h>
#include <stdlib.h>

int main(){

    long int N;
    long int sum = 0;
    int i;

    scanf("%ld",&N);

    for(i = 1; i <= N; i++){
        if((i%3 != 0)&&(i%5 != 0)){
            sum += i; 
        }
    }
    
    printf("%ld",sum);

    return 0;
}