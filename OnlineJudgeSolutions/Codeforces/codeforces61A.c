#include <stdio.h>
#include <string.h>

int main()

{
    char x[101],y[101],a[101];
    int i,len;

    gets(x);
    gets(y);
    len=strlen(x);

    for(i=0;i<len;i++)
    {
        if(x[i]!=y[i])
        {
            a[i]='1';
        }
        else
        {
           a[i]='0';
        }
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}
