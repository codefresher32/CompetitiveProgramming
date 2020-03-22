#include <stdio.h>

int main()

{
    int n,k,c,i,j;

    scanf("%d%d",&n,&k);

    for(i=n+1;i<=k;i++)
        {
            c=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    c=1;
                    printf("NO\n");
                    return 0;
                }
                if(c==0&&i==k)
                {
                    printf("YES\n");
                    return 0;
                }
            }
        }
}
