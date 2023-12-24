#include <stdio.h>
#include <stdlib.h>


int main(){

    int N;
    scanf("%d",&N);

    int A[N];
    int i;

    for(i = 0; i < N; i++){
        A[i] = 0;
    }

    int tmp;
    for(i = 0; i < N-1; i++){
        scanf("%d",&tmp);
        A[tmp-1] += 1;
    }

    for(i = 0; i < N; i++){
        printf("%d\n",A[i]);
    }

   return 0;
}