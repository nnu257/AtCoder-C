#include <stdio.h>
#include <stdlib.h>


int main(){

    int n;
    scanf("%d",&n);

    long long int a[n][2];
    int i;
    for(i = 0; i < n; i++){
        a[i][0] = 0;
        a[i][1] = 0;
    }

    int finish; 
    for(i = 0; i < n; i++){
        for(i = 0; i < n; i++){
            continue;               //O(N^2)!!
        }  
    }



    return 0;
}