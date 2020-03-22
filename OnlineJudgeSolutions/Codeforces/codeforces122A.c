#include<stdio.h>
int main()

{
    int n,r,c1=0,c2=0,x1,x2,x3,x4;
    scanf("%d",&n);
    x1=n%4;
    x2=n%7;
    x3=n%47;
    x4=n%74;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        c1++;
        if(r==4||r==7)
        {
            c2++;
        }
    }

    if(c1==c2)
    {
        printf("YES\n");
    }
    else if(x1==0||x2==0||x3==0||x4==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
