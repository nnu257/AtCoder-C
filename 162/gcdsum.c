#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    
    int tmp;

    if(a < b){
        tmp = a;
        a = b;
        b = tmp;
    }

    if(a%b == 0){
        return b;
    }else{
        return gcd(b,a%b);
    }

}


int main(){

    int N;
    long int sum = 0;
    int i, j, k, tmp;

    scanf("%d",&N);

    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            for(k = 1; k <= N; k++){

                tmp = gcd(i,j);
                sum += gcd(tmp,k);
            }
        }
    }

    printf("%ld\n",sum);

    return 0;
}