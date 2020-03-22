#include <stdio.h>

int main()

{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
