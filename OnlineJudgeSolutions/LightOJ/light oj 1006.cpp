#include <stdio.h>
int main()
    {
    long long int a, b, c, d, e, f;
    long long int ara[10000], m;
    int n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %d", &ara[0], &ara[1], &ara[2], &ara[3], &ara[4], &ara[5], &n);
        for(m=6; m<=n; m++)
            ara[m]=(ara[m-1]+ara[m-2]+ara[m-3]+ara[m-4]+ara[m-5]+ara[m-6])%10000007;

        printf("Case %d: %lld\n", ++caseno, ara[n]  % 10000007);
    }
    return 0;
}
