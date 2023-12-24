#include <stdio.h>
#define ll long long int
#define mod 1000000007


int main(){

    int N, K;
    scanf("%d %d", &N, &K);     //オーバーフロで回答ミス
                                //N,iがintなので、それにか関わる計算にはllキャストが必要。かっこの位置にも注意
    int i;
    ll a, b, answer = 0;

    for(i = K; i <= N+1; i++){
        a = (ll)i*(i-1)/2;
        b = (ll)N*(N+1)/2-(ll)(N-i)*(N-i+1)/2;

        answer += b-a+1;

    }
    printf("%lld",answer%mod);

   return 0;
}