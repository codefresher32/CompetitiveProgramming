#include <stdio.h>

int main()

{
    int n,sum=0,ans=0,c=0,temp;

    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
    }
    sum/=2;
    while(ans<=sum)
    {
        c++;
        ans+=a[n-c];
    }
    printf("%d\n",c);
    return 0;
}
