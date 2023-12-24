#include <stdio.h>
#include <stdlib.h>


int main(){

    int N, M;
    scanf("%d %d",&N, &M);

    int answer = 0;
    if(N>0){
        answer += N*(N-1)/2;
    }
    if(M>0){
        answer += M*(M-1)/2;
    }
    printf("%d",answer);

   return 0;
}