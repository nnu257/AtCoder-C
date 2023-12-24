#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){

    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){

    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);       //入力注意

    swap(&x,&y);
    swap(&x,&z);

    printf("%d %d %d", x, y, z);

   return 0;
}