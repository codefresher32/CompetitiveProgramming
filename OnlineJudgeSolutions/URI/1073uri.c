#include<stdio.h>
int main()

{
    int n,i,s;
    scanf("%d",&n);
    if(n>5 && n<2000)
    {
        for(i=2;i <= n;i += 2)
        {
            s = pow(i,2);
            printf("%d^2 = %d\n",i,s);
        }
    }
    return 0;
}
