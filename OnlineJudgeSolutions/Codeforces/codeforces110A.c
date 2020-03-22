#include<stdio.h>.
#include<limits.h>

int main()

{
    long long int n;
    int r,c=0;
    scanf("%lld",&n);
        while(n>0)
        {
            r=n%10;
            n=n/10;
            if(r==4||r==7)
            {
                c++;
            }
        }
        if(c==4||c==7)
        {
            printf("YES\n");
            return 0;
        }
        printf("NO\n");
        return 0;
}
