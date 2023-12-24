#include <stdio.h>
#include <stdlib.h>
#define ll long long int


int main(){

    ll a = (ll)141422*141421/2;     //(long long int)でキャストしないと、右辺がintで代入されてしまう
    ll b = (ll)141422*141421/2-141421*141421/2;
    printf("%lld",a);                                    //全体に対して（）でキャストするとアウト？
    printf("%lld",b);
    
    return 0;
}