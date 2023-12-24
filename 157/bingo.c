#include <stdio.h>
#include <stdlib.h>


int main(){

    int i, j;
    int A[3][3], judge[3][3] = {0};
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d",&A[i][j]);
        }
    }

    int n, a, k;
    scanf("%d",&n);
    for(k = 0; k < n; k++){
        scanf("%d",&a);
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                if(a == A[i][j]){
                    judge[i][j] = 1;
                }
            }
        }
    }
    int answer = 0;

    for(i = 0; i < 3; i++)
        answer += judge[i][0]*judge[i][1]*judge[i][2];
    for(j = 0; j < 3; j++)
        answer += judge[0][j]*judge[1][j]*judge[2][j];

    answer += judge[0][0]*judge[1][1]*judge[2][2];
    answer += judge[0][2]*judge[1][1]*judge[2][0];

    if(answer >= 1)
        printf("Yes");
    if(answer == 0)
        printf("No");
    

    return 0;
}