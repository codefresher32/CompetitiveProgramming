#include<stdio.h>
int main()

{
    int x,i;
    scanf("%d",&x);
    if(x >= 1&&x <= 1000)
    {
        if(x%2 ==0)
        x--;
        for(i = 1;i <= x;i += 2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
