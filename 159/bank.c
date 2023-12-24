#include <stdio.h>
#include <stdlib.h>


int main(){         //TLE

    int N;
    scanf("%d",&N);

    int number[N];
    int raw[N];
    int i;
    for(i = 0; i < N; i++){
        number[i] = 0;
    }
    for(i = 0; i < N; i++){
        int a;
        scanf("%d",&a);
        raw[i] = a;
        number[a-1] += 1;
    }

    int k;
    for(k = 0; k <= N-1; k++){
        int answer = 0;
        for(i = 0; i <= N-1; i++){
            if((raw[k]-1)==i){
                if(number[i]!=0){
                    answer += (number[i]-1)*(number[i]-2)/2;
                }
            }else{
                answer += number[i]*(number[i]-1)/2;
            }
        }
        printf("%d\n",answer);
    }
   return 0;
}