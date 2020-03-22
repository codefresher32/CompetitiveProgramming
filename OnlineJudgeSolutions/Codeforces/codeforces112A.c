#include<stdio.h>
#include<string.h>
int main()

{
    char x[100],y[100];
    int i;
    gets(x);
    gets(y);
    strlwr(x);
    strlwr(y);
    i=strcmp(x,y);
    if(i>0)
    {
        printf("1\n");
    }
    else if(i<0)
    {
        printf("-1\n");
    }
    else
        printf("0\n");
    return 0;
}
