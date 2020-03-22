#include<stdio.h>
#include<string.h>
int main()

{
    int n,i,x=0;
    char c1[10],c2="x++",c3="++x",c4="--x",c5="x--";
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&c1[i]);
    }
    for(i=0;c1[i]!='\0';i++)
    {
        if(strcmp(c2,c1[i])==0||strcmp(c3,c1[i])==0)
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
