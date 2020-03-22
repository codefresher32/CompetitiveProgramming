#include <stdio.h>
#include <limits.h>

int main()

{
    long long int n,k,out,part;
    scanf("%lld%lld",&n,&k);

    if(n%2==0)
    {
        part=n/2;
    }
    else
    {
        part=(n/2)+1;
    }

    if(k<=part)
    {
        out=(2*k)-1;
    }
    else
    {
        out=(k-part)*2;
    }
    printf("%lld\n",out);
    return 0;
}
