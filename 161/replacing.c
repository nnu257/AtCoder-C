#include <stdio.h>
#include <stdlib.h>

void replac(int* a, int* b){
    *a = abs(*a-*b);
}

int main(){

    int N , K ;
    scanf("%d %d", &N, &K);

    int i;
    for(i = 0; i <= 10; i++){
        printf("N=%d, K=%d\n",N,K);         //紙（テキスト）での実験必須
        replac(&N,&K);
    }


   return 0;
}