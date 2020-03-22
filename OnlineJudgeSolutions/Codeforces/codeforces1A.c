#include<stdio.h>
#include<limits.h>
int main()

{
    long long int n,m,a,x,y;
   scanf("%lld %lld %lld",&n,&m,&a);
        if(n%a!=0)
        {
            x=n/a;
            x++;
        }
        else
        {
            x=n/a;
        }
        if(m%a!=0)
        {
            y=m/a;
            y++;
        }
        else
        {
            y=m/a;
        }
        printf("%lld\n",x*y);
return 0;
}
