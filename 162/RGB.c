#include <stdio.h>
#include <stdlib.h>

int RGBjudge(char* s, int i, int j, int k){

    if((s[i]==s[j])||(s[j]==s[k])||(s[k]==s[i])){       //数学
        return 0;
    }else{
        if((j-i)==(k-j)||(i>=j)||(j>=k)){
            return 0;
        }else{
            return 1;
        }
    }
}

int main(){

    int N;
    char S[4001];

    scanf("%d",&N);
    scanf("%s",S);
    S[N] = '\0';

    int i,j,k, co = 0;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            for(k = 0; k < N; k++){
                if(RGBjudge(S, i, j, k) == 1){
                    co += 1;
                }
            }
        }
    }
    printf("%d",co);

    return 0;

}