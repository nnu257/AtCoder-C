#include <stdio.h>
#include <stdlib.h>


int main(){

    int N, M;
    scanf("%d %d",&N, &M);

    int i, a, work = 0;
    for(i = 0; i < M; i++){
        scanf("%d",&a);
        work += a;
    }

    if(work <= N){
        printf("%d",N-work);
    }else{
        printf("-1");
    }

   return 0;
}