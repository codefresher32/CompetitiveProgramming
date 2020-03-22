#include<stdio.h>
int main()

{
    int n,c=0,i;
    scanf("%d",&n);
    int p[n],q[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p[i],&q[i]);
        if((q[i]-p[i])>=2)
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
