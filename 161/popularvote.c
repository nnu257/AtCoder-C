#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap (int *x, int *y) {
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;
}

void xbubble_sort (int array[], int array_size) {
  int i, j;

  for (i = array_size-1; i >= 1; i--){
    for (j = 0; j <= i-1; j++){
      if (array[j] < array[j+1]) { swap(&array[j], &array[j+1]); }
    }
  }
}

int main(){

    int N, M, i = 0, sum = 0;
    scanf("%d %d", &N, &M);
    int A[N];
    for(i = 0; i < N; i++){           //この方法で1 2 3 4を読み取り可能
        scanf("%d",&A[i]);
        sum += A[i];                    //一緒にsumも計算
    }

    xbubble_sort(A,N);

    if(A[M-1]>=ceil((double)sum/4.0/(double)M)){
        printf("Yes");
    }else{
        printf("No");               //WA原因→36line,ceilを使っても、整数の計算では駄目。
    }                               //例えば、ceil(2/3) = 0, ceil(2.0/3.0) = 1

   return 0;
}