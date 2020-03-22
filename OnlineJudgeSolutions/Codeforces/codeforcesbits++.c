#include<stdio.h>
#include<string.h>
int main()

{
    int i,x=0,n;
    scanf("%d",&n);
    char c[n][100];
    for(i=0;i<n;i++)
    {
        scanf("%s",c[i]);
    }
    for(i=0;i<n;i++){
        if(strcmp("x++",c[i])==0||strcmp("++x",c[i])==0||strcmp("X++",c[i])==0||strcmp("++X",c[i])==0)
    {
        x++;
    }
    else
    {
        x--;
    }
    }
    printf("%d\n",x);
    return 0;
}
