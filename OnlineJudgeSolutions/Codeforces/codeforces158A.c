#include<stdio.h>
int main()

{
    int n,k,i,j,c=0,x[50];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]>=x[k-1]&&x[i]>0)
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
