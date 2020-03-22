#include<stdio.h>
int main()

{
    int n,i,j,c,m;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<=m;i++)
    {
        c=0;
        for(j=2;j<=i/2;j++)
        {
             if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
    {
        if(i==m)
        {
            printf("YES\n");
            return 0;
        }
        else
        {
            printf("NO\n");
            return 0;
        }
    }
    }
    printf("NO\n");
    return 0;
}
