#include<stdio.h>
int main()

{
    int n,s1=0,s2=0,s3=0,i,c=0;
    scanf("%d",&n);
    int x[n],y[n],z[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
        s1=s1+x[i];
        s2=s2+y[i];
        s3=s3+z[i];
    }
    if(s1==0&&s2==0&&s3==0)
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
