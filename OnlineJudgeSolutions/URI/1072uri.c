#include<stdio.h>
int main()

{
    int a[10000],i,c1,c2,num;
    c1 = c2 = 0;
    scanf("%d",&num);
    for(i = 0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i<num;i++)
    {
        if(a[i] >= 10&&a[i] <= 20)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    printf("%d in\n%d out\n",c1,c2);
    return 0;
}
