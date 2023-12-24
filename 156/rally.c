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

void bubble_sort (int array[], int array_size) {
  int i, j;

  for (i = 0; i < array_size - 1; i++){
    for (j = array_size - 1; j >= i + 1; j--){
      if (array[j] < array[j-1]) { swap(&array[j], &array[j-1]); }
    }
  }
}

int main(){

    int n;
    scanf("%d",&n);
    int a[n], i;
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    bubble_sort(a,n);

    int tmp, j;
    long int answer = INFINITY;
    for(i = a[0]; i <= a[n-1] ; i++){
        tmp = 0;
        for(j = 0; j < n; j++){
            tmp += pow(a[j]-i,2);
        }

        if(tmp <= answer){
            answer = tmp;      
        }
    }
    printf("%ld",answer);
   return 0;
}