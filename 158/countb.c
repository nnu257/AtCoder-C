#include <stdio.h>
#include <stdlib.h>
#define ll long long int


int main(){

    ll n, a, b;
    scanf("%lld %lld %lld", &n, &a, &b);

    ll answer = n/(a+b)*a;
    if(n%(a+b)>=a){
        answer += a;
    }else{
        answer += n%(a+b);
    }

    printf("%lld",answer);

   return 0;
}