#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kai(char S[], int length){

    int judge = 1;
    int i;
    for(i = 0; i<=(length-3)/2; i++){
        if(S[i]!=S[length-1-i]){
            judge = 0;
        }
    }
    return judge;
}


int main(){

    char S1[99], S2[49], S3[49];
    scanf("%s",S1);
    int length = strlen(S1);

    int i, j;
    for(i = 0; i <= (length-1)/2-1; i++){
        S2[i] = S1[i];
    }
    S2[i] = '\0';
    int k = (length+3)/2-1;
    for(j = 0; j <= length-(length+3)/2; j++){
        S3[j] = S1[k];
        k++;
    }
    S3[j] = '\0';

    if((kai(S1,length)==1)&&(kai(S2,strlen(S2))==1)&&(kai(S3,strlen(S3))==1)){
        printf("Yes");
    }else{
        printf("No");
    }

   return 0;
}