#include<stdio.h>
int main()

{
    int a[10000],num,i;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i<num;i++)
    {
        if(a[i] == 0)
        {
            printf("NULL\n");
        }
        else if(a[i]>0)
        {
            if(a[i]%2 == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else if(a[i]<0)
        {
            if(a[i]%2 == 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
