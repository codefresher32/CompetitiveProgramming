#include <stdio.h>

int main()

{
    int x1,x2,x3,d;

    scanf("%d%d%d",&x1,&x2,&x3);

    if(x1>x2&&x1>x3)
    {
        if(x2>x3)
        {
            d=x1-x3;
        }
        else
        {
            d=x1-x2;
        }
    }
    else if(x2>x1&&x2>x3)
    {
        if(x1>x3)
        {
            d=x2-x3;
        }
        else
        {
            d=x2-x1;
        }
    }
    else if(x3>x1&&x3>x2)
    {
        if(x1>x2)
        {
            d=x3-x2;
        }
        else
        {
            d=x3-x1;
        }
    }

    printf("%d\n",d);
    return 0;
}
