#include<stdio.h>
int main()

{
    int x,i,j;
    scanf("%d",&x);
    int a[x],b[x],sum=0,temp=0;
    for(i=0;i<x;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<x;i++)
    {
        if(i==0)
        {
            sum=a[i]+b[i];
            temp=sum;
        }
        else
        {
            sum=(sum-a[i])+b[i];
        }
        if(sum>temp)
        {
            temp=sum;
        }
    }
    printf("%d\n",temp);
    return 0;
}
