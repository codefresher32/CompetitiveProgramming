#include<stdio.h>
int main()

{
    int m[5][5],i,j,x;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(m[i][j]==1)
            {
                if(i<=2&&j<=2)
                {
                    x=2-i+2-j;
                }
            else if(i>=2&&j>=2)
            {
                x=i-2+j-2;
            }
            else if(i>=2&&j<=2)
            {
                x=i-j;
            }
            else if(i<=2&&j>=2)
            {
                x=j-i;
            }
            }
        }
    }
    printf("%d\n",x);
    return 0;
}
