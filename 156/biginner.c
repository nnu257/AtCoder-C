#include <stdio.h>
#include <stdlib.h>


int main(){

    int n,r;
    scanf("%d %d",&n,&r);

    if(n >= 10){
        printf("%d",r);
    }else{
        printf("%d",r+1000-100*n);
    }

   return 0;
}